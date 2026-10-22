// Fill out your copyright notice in the Description page of Project Settings.


#include "V3DNavigationData.h"

#include "AirPathfindingComponent.h"
#include "V3DNavigtion_Interface.h"
#include "Components/BoxComponent.h"
#include "Engine/OverlapResult.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AV3DNavigationData::AV3DNavigationData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BoundsRoot"));
	BoundsBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundsBox"));
	BoundsBox->SetupAttachment(RootComponent);
	//BoundsBox->SetCollisionProfileName(FName("Trigger"));
	
}

// Called when the game starts or when spawned
void AV3DNavigationData::BeginPlay()
{
	Super::BeginPlay();
	BoundsBox->UpdateBounds();
	Bounds = BoundsBox->Bounds.GetBox();
	SetChild();
	InitGridSize();
	//添加忽略列表
	for (TSubclassOf<AActor> Class : IgnoreClasses)
	{
		TArray<AActor*> outActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),Class,outActors);
		IgnoreActors.Append(outActors);
	}
	
	Params.AddIgnoredActors(IgnoreActors);
	
	CheckBoundsAndMakers();
	DrawVoxels();
	if (bDrawBounds)
	{
		DrawBounds();
	}
}

void AV3DNavigationData::DrawBounds()
{
	DrawDebugBox(GetWorld(),
			Bounds.GetCenter(),       // 中心
		Bounds.GetSize() / 2,    // 半尺寸
		FQuat::Identity,
		FColor::Green,true);
	
}

void AV3DNavigationData::InitGridSize()
{
	GridSize = FIntVector(
		FMath::CeilToInt(FMath::Abs(Bounds.Max.X - Bounds.Min.X) / VoxelSize),
		FMath::CeilToInt(FMath::Abs(Bounds.Max.Y - Bounds.Min.Y) / VoxelSize),
		FMath::CeilToInt(FMath::Abs(Bounds.Max.Z - Bounds.Min.Z) / VoxelSize)
	);
}

void AV3DNavigationData::DrawVoxels()
{
	UE_LOG(LogTemp, Warning, TEXT("GridSize=(%d,%d,%d)"), GridSize.X, GridSize.Y, GridSize.Z);
	for (int32 x = 0; x < GridSize.X; x++)
	{
		for (int32 y = 0; y < GridSize.Y; y++)
		{
			for (int32 z = 0; z < GridSize.Z; z++)
			{
				FIntVector Voxel = FIntVector(x, y, z);
				FVector CurrVoxel = VoxelToWord(Voxel);
				
				//逐个体素检测碰撞即将废弃
				//CheckVoxelOverlap(Voxel);
				if (bDrawBounds)
				{
					if (!IsBlocked(Voxel) )
					{
						if ( bDrawFreeVoxels)
						DrawDebugBox(GetWorld(),
						CurrVoxel,
						FVector::One() * VoxelSize * 0.5f,
						FQuat::Identity,
						FColor::Green,
						true);
					}else
					{
						DrawDebugBox(GetWorld(),
						CurrVoxel,
						FVector::One() * VoxelSize * 0.5f,
						FQuat::Identity,
						FColor::Red,
						true);
					}
				}
				
			}
		}
	}
}

void AV3DNavigationData::CheckBoundsAndMakers()
{
	if (GridSize.X <= 0 || GridSize.Y <= 0 || GridSize.Z <= 0)
	{
		return;
	}

	const int32 ChunkCountX = (GridSize.X + CHUNK_SIZE - 1) / CHUNK_SIZE;
	const int32 ChunkCountY = (GridSize.Y + CHUNK_SIZE - 1) / CHUNK_SIZE;
	const int32 ChunkCountZ = (GridSize.Z + CHUNK_SIZE - 1) / CHUNK_SIZE;

	for (int32 x = 0; x < ChunkCountX; x++)
	{
		for (int32 y = 0; y < ChunkCountY; y++)
		{
			for (int32 z = 0; z < ChunkCountZ; z++)
			{
				const FIntVector ChunkVoxelMin(x * CHUNK_SIZE, y * CHUNK_SIZE, z * CHUNK_SIZE);
				const FIntVector ChunkVoxelMax(
					FMath::Min((x + 1) * CHUNK_SIZE, GridSize.X) - 1,
					FMath::Min((y + 1) * CHUNK_SIZE, GridSize.Y) - 1,
					FMath::Min((z + 1) * CHUNK_SIZE, GridSize.Z) - 1);
				const FIntVector ChunkVoxelCenter = (ChunkVoxelMin + ChunkVoxelMax) / 2;
				const FVector Center = VoxelToWord(ChunkVoxelCenter);
				// 该 chunk 实际体素边长（最后一块可能不足 CHUNK_SIZE）
				const int32 ActualExtentX = ChunkVoxelMax.X - ChunkVoxelMin.X + 1;
				const int32 ActualExtentY = ChunkVoxelMax.Y - ChunkVoxelMin.Y + 1;
				const int32 ActualExtentZ = ChunkVoxelMax.Z - ChunkVoxelMin.Z + 1;

				//分chunk检测碰撞，命中后走八叉细分
				if (CheckChunkOverlap(Center))
				{
					SubdivideAndCheck(ChunkVoxelMin, ChunkVoxelMax);
				}

				//chunk范围调试信息展示
				if (bDrawChunks)
				{
					UE_LOG(LogTemp, Warning, TEXT("Chunk=(%d,%d,%d) Extent=(%d,%d,%d)"),
						ChunkVoxelMin.X, ChunkVoxelMin.Y, ChunkVoxelMin.Z,
						ActualExtentX, ActualExtentY, ActualExtentZ);
					DrawDebugBox(GetWorld(),
							Center,
							FVector(ActualExtentX, ActualExtentY, ActualExtentZ) * VoxelSize * 0.5f,
							FQuat::Identity,
							FColor::Yellow,
							true);
				}
			}
		}
	}
}

void AV3DNavigationData::CheckVoxelOverlap(const FIntVector& Voxel)
{
	FCollisionShape Box = FCollisionShape::MakeBox(FVector(VoxelSize * 0.5f));
	
	bool bBlocked = GetWorld()->OverlapBlockingTestByChannel(VoxelToWord(Voxel), FQuat::Identity, ECC_WorldStatic, Box, Params);
	if (bBlocked)
	{
	SetBlocked(Voxel,bBlocked);
	}
}

bool AV3DNavigationData::CheckChunkOverlap(const FVector& Local)
{
	FCollisionShape Box = FCollisionShape::MakeBox(FVector(CHUNK_SIZE * VoxelSize * 0.5f));
	bool bBlocked = GetWorld()->OverlapBlockingTestByChannel(Local, FQuat::Identity, ECC_WorldStatic, Box, Params);
	return bBlocked;
}

bool AV3DNavigationData::CheckSubRegionOverlap(const FVector& WorldCenter, int32 VoxelExtent)
{
	// 半尺寸 = 体素数 × VoxelSize × 0.5（保证单位与 CheckVoxelOverlap 一致）
	FCollisionShape Box = FCollisionShape::MakeBox(FVector(VoxelExtent * VoxelSize * 0.5f));
	return GetWorld()->OverlapBlockingTestByChannel(WorldCenter, FQuat::Identity, ECC_WorldStatic, Box, Params);
}

void AV3DNavigationData::SubdivideAndCheck(const FIntVector& VoxelMin, const FIntVector& VoxelMax)
{
	// 子块体素边长
	const int32 Extent = VoxelMax.X - VoxelMin.X + 1;

	// 终止条件：边长 1 个体素 => 直接做单个体素检测
	if (Extent <= 1)
	{
		CheckVoxelOverlap(VoxelMin);
		return;
	}

	// 计算子块世界中心点（取 Min/Max 中点体素）
	const FIntVector MidVoxel = (VoxelMin + VoxelMax) / 2;
	const FVector VoxelCenter = VoxelToWord(MidVoxel);

	// 无碰撞 => 整体跳过，内部体素全自由
	if (!CheckSubRegionOverlap(VoxelCenter, Extent))
	{
		return;
	}

	// 有碰撞且仍可细分 => 每维二分，递归处理 8 个子块
	const int32 MidX = (VoxelMin.X + VoxelMax.X) / 2;
	const int32 MidY = (VoxelMin.Y + VoxelMax.Y) / 2;
	const int32 MidZ = (VoxelMin.Z + VoxelMax.Z) / 2;

	SubdivideAndCheck(FIntVector(VoxelMin.X, VoxelMin.Y, VoxelMin.Z), FIntVector(MidX, MidY, MidZ));
	SubdivideAndCheck(FIntVector(MidX + 1, VoxelMin.Y, VoxelMin.Z), FIntVector(VoxelMax.X, MidY, MidZ));
	SubdivideAndCheck(FIntVector(VoxelMin.X, VoxelMin.Y, MidZ + 1), FIntVector(MidX, MidY, VoxelMax.Z));
	SubdivideAndCheck(FIntVector(MidX + 1, VoxelMin.Y, MidZ + 1), FIntVector(VoxelMax.X, MidY, VoxelMax.Z));
	SubdivideAndCheck(FIntVector(VoxelMin.X, MidY + 1, VoxelMin.Z), FIntVector(MidX, VoxelMax.Y, MidZ));
	SubdivideAndCheck(FIntVector(MidX + 1, MidY + 1, VoxelMin.Z), FIntVector(VoxelMax.X, VoxelMax.Y, MidZ));
	SubdivideAndCheck(FIntVector(VoxelMin.X, MidY + 1, MidZ + 1), FIntVector(MidX, VoxelMax.Y, VoxelMax.Z));
	SubdivideAndCheck(FIntVector(MidX + 1, MidY + 1, MidZ + 1), FIntVector(VoxelMax.X, VoxelMax.Y, VoxelMax.Z));
}

// Called every frame
void AV3DNavigationData::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AV3DNavigationData::SetChild()
{
	//TArray<AActor*> tChildren;
	TArray<FOverlapResult> Overlaps;
	FComponentQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	GetWorld()->ComponentOverlapMultiByChannel(
		Overlaps,
		BoundsBox,
		BoundsBox->GetComponentLocation(),
		BoundsBox->GetComponentRotation(),
		ECC_WorldDynamic,
		QueryParams
	);
	//BoundsBox->GetOverlappingActors(tChildren);
	for (int32 i = 0; i < Overlaps.Num(); i++)
	{
		UActorComponent* AirCom = Overlaps[i].GetActor()->GetComponentByClass(UAirPathfindingComponent::StaticClass());
		if (!AirCom) continue;
		IV3DNavigtion_Interface* interface = Cast<IV3DNavigtion_Interface>(AirCom);
		if (!interface) continue;
		interface->SetNavigator(this);
	}
}

TArray<FVector> AV3DNavigationData::FindPath(const FIntVector& Start, const FIntVector& End)
{
	TArray<FVector> Path;

	// 将起终点夹取到合法范围内，越界或不可达则返回空路径
	FIntVector ClampedStart = FIntVector(
		FMath::Clamp(Start.X, 0, GridSize.X - 1),
		FMath::Clamp(Start.Y, 0, GridSize.Y - 1),
		FMath::Clamp(Start.Z, 0, GridSize.Z - 1));
	FIntVector ClampedEnd = FIntVector(
		FMath::Clamp(End.X, 0, GridSize.X - 1),
		FMath::Clamp(End.Y, 0, GridSize.Y - 1),
		FMath::Clamp(End.Z, 0, GridSize.Z - 1));

	if (GridSize.X <= 0 || GridSize.Y <= 0 || GridSize.Z <= 0)
	{
		return Path;
	}

	// 起终点被阻挡则无法寻路
	if (IsBlocked(ClampedStart) || IsBlocked(ClampedEnd))
	{
		return Path;
	}

	// 26向移动：6轴 + 12对角 + 8体对角
	static const int32 MoveDelta[26][3] = {
		{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1},
		{1,1,0},{1,-1,0},{-1,1,0},{-1,-1,0},{1,0,1},{1,0,-1},
		{-1,0,1},{-1,0,-1},{0,1,1},{0,1,-1},{0,-1,1},{0,-1,-1},
		{1,1,1},{1,1,-1},{1,-1,1},{1,-1,-1},{-1,1,1},{-1,1,-1},
		{-1,-1,1},{-1,-1,-1}
	};

	auto VoxelIndex = [this](const FIntVector& V)
	{
		// 1D线性化索引
		return (V.Z * GridSize.Y + V.Y) * GridSize.X + V.X;
	};

	const int32 Total = GridSize.X * GridSize.Y * GridSize.Z;
	const float DiagonalCost = FMath::Sqrt(3.0f) * VoxelSize;
	const float FaceDiagonalCost = FMath::Sqrt(2.0f) * VoxelSize;

	// A* 所需数据结构
	TArray<FIntVector> Parents;
	Parents.Init({}, Total);
	TArray<int32> ParentIndex;
	ParentIndex.Init(INDEX_NONE, Total);
	const float kMaxDist = FLT_MAX;
	TArray<float> GScore;
	GScore.Init(kMaxDist, Total);
	TArray<float> FScore;
	FScore.Init(kMaxDist, Total);
	TArray<bool> Closed;
	Closed.Init(false, Total);

	// 一次性构造本次寻路的扁平碰撞掩码，避免 A* 热循环中反复查 TMap/TUniquePtr
	TArray<uint8, TInlineAllocator<64>> CollisionMask;
	CollisionMask.SetNumZeroed(Total);
	for (const auto& Pair : Chunks)
	{
		const FIntVector& ChunkCoord = Pair.Key;
		const FVoxelChunk* Chunk = Pair.Value.Get();
		if (!Chunk)
		{
			continue;
		}

		const int32 ChunkBaseIndex =
			(ChunkCoord.Z * CHUNK_SIZE * GridSize.Y + ChunkCoord.Y * CHUNK_SIZE) * GridSize.X + ChunkCoord.X * CHUNK_SIZE;

		for (int32 CZ = 0; CZ < CHUNK_SIZE; CZ++)
		{
			const int32 LocalZ = ChunkCoord.Z * CHUNK_SIZE + CZ;
			if (LocalZ < 0 || LocalZ >= GridSize.Z)
			{
				continue;
			}

			for (int32 CY = 0; CY < CHUNK_SIZE; CY++)
			{
				const int32 LocalY = ChunkCoord.Y * CHUNK_SIZE + CY;
				if (LocalY < 0 || LocalY >= GridSize.Y)
				{
					continue;
				}

				for (int32 CX = 0; CX < CHUNK_SIZE; CX++)
				{
					const int32 LocalX = ChunkCoord.X * CHUNK_SIZE + CX;
					if (LocalX < 0 || LocalX >= GridSize.X)
					{
						continue;
					}

					const int32 VoxelIdx =
						(LocalZ * GridSize.Y + LocalY) * GridSize.X + LocalX;

					const int32 LocalIndex = CX + CY * CHUNK_SIZE + CZ * CHUNK_SIZE * CHUNK_SIZE;
					if (LocalIndex < CHUNK_VOXELS && Chunk->Occupancy[LocalIndex])
					{
						CollisionMask[VoxelIdx] = 1;
					}
				}
			}
		}
	}

	auto IsBlockedFast = [&](int32 VoxelIdx)
	{
		return VoxelIdx >= 0 && VoxelIdx < Total && CollisionMask[VoxelIdx];
	};

	const int32 StartIdx = VoxelIndex(ClampedStart);
	const int32 EndIdx = VoxelIndex(ClampedEnd);
	if (IsBlockedFast(StartIdx) || IsBlockedFast(EndIdx))
	{
		return Path;
	}

	// 简易二叉堆优先队列
	TArray<int32> Open;
	auto PopMin = [&]()
	{
		const int32 Idx = Open[0];
		if (Open.Num() == 1)
		{
			Open.Reset();
			return Idx;
		}
		Open[0] = Open.Pop();
		int32 Cur = 0;
		while (true)
		{
			int32 Left = Cur * 2 + 1;
			int32 Right = Left + 1;
			int32 Smallest = Cur;
			if (Left < Open.Num() && FScore[Open[Left]] < FScore[Open[Smallest]])
			{
				Smallest = Left;
			}
			if (Right < Open.Num() && FScore[Open[Right]] < FScore[Open[Smallest]])
			{
				Smallest = Right;
			}
			if (Smallest == Cur) break;
			Swap(Open[Cur], Open[Smallest]);
			Cur = Smallest;
		}
		return Idx;
	};
	auto Push = [&](int32 Idx)
	{
		Open.Add(Idx);
		int32 Cur = Open.Num() - 1;
		while (Cur > 0)
		{
			const int32 Parent = (Cur - 1) / 2;
			if (FScore[Open[Parent]] <= FScore[Open[Cur]]) break;
			Swap(Open[Parent], Open[Cur]);
			Cur = Parent;
		}
	};

	// 启发函数：切比雪夫距离对应的3D欧氏代价
	auto Heuristic = [](const FIntVector& A, const FIntVector& B, float FaceCost, float BodyCost)
	{
		int32 DX = FMath::Abs(A.X - B.X);
		int32 DY = FMath::Abs(A.Y - B.Y);
		int32 DZ = FMath::Abs(A.Z - B.Z);
		int32 Min = FMath::Min(DX, FMath::Min(DY, DZ));
		int32 Mid = DX + DY + DZ - 2 * Min;
		int32 Max = DX + DY + DZ - 2 * (Min + Mid) - Min;
		return static_cast<float>(Max) * BodyCost + static_cast<float>(Min) * FaceCost;
	};

	const float StartH = Heuristic(ClampedStart, ClampedEnd, FaceDiagonalCost, DiagonalCost);
	GScore[StartIdx] = 0.0f;
	FScore[StartIdx] = StartH;
	Push(StartIdx);

	bool bFound = false;
	while (Open.Num() > 0)
	{
		const int32 CurrentIdx = PopMin();
		if (Closed[CurrentIdx])
		{
			continue;
		}
		Closed[CurrentIdx] = true;

		if (CurrentIdx == EndIdx)
		{
			bFound = true;
			break;
		}

		FIntVector Current(CurrentIdx % GridSize.X, (CurrentIdx / GridSize.X) % GridSize.Y, CurrentIdx / (GridSize.X * GridSize.Y));

		for (const auto& D : MoveDelta)
		{
			const int32 NX = Current.X + D[0];
			const int32 NY = Current.Y + D[1];
			const int32 NZ = Current.Z + D[2];
			if (NX < 0 || NX >= GridSize.X || NY < 0 || NY >= GridSize.Y || NZ < 0 || NZ >= GridSize.Z)
			{
				continue;
			}

			const FIntVector Neighbor(NX, NY, NZ);
			const int32 NeighborIdx = VoxelIndex(Neighbor);
			if (Closed[NeighborIdx] || IsBlockedFast(NeighborIdx))
			{
				continue;
			}

			// 斜向移动时，禁止斜穿墙角：斜向经过的相邻轴向体素必须都未阻挡
			if (D[0] != 0 && D[1] != 0)
			{
				const int32 Side1Idx = VoxelIndex(FIntVector(NX, Current.Y, Current.Z));
				const int32 Side2Idx = VoxelIndex(FIntVector(Current.X, NY, Current.Z));
				if (IsBlockedFast(Side1Idx) || IsBlockedFast(Side2Idx))
				{
					continue;
				}
			}
			if (D[0] != 0 && D[2] != 0)
			{
				const int32 Side1Idx = VoxelIndex(FIntVector(NX, Current.Y, NZ));
				const int32 Side2Idx = VoxelIndex(FIntVector(Current.X, Current.Y, NZ));
				if (IsBlockedFast(Side1Idx) || IsBlockedFast(Side2Idx))
				{
					continue;
				}
			}
			if (D[1] != 0 && D[2] != 0)
			{
				const int32 Side1Idx = VoxelIndex(FIntVector(Current.X, NY, NZ));
				const int32 Side2Idx = VoxelIndex(FIntVector(Current.X, Current.Y, NZ));
				if (IsBlockedFast(Side1Idx) || IsBlockedFast(Side2Idx))
				{
					continue;
				}
			}

			float MoveCost;
			if (D[0] != 0 && D[1] != 0 && D[2] != 0)
			{
				MoveCost = DiagonalCost;
			}
			else if ((D[0] != 0 && D[1] != 0) || (D[0] != 0 && D[2] != 0) || (D[1] != 0 && D[2] != 0))
			{
				MoveCost = FaceDiagonalCost;
			}
			else
			{
				MoveCost = VoxelSize;
			}

			const float TentativeG = GScore[CurrentIdx] + MoveCost;

			if (TentativeG < GScore[NeighborIdx])
			{
				GScore[NeighborIdx] = TentativeG;
				FScore[NeighborIdx] = TentativeG + Heuristic(Neighbor, ClampedEnd, FaceDiagonalCost, DiagonalCost);
				Parents[NeighborIdx] = Current;
				ParentIndex[NeighborIdx] = CurrentIdx;
				Push(NeighborIdx);
			}
		}
	}

	if (bFound)
	{
		// 回溯父节点，生成路径
		TArray<FIntVector> VoxelPath;
		if (StartIdx == EndIdx)
		{
			VoxelPath.Add(ClampedStart);
		}
		else
		{
			int32 Current = EndIdx;
			while (Current != StartIdx)
			{
				VoxelPath.Add(Parents[Current]);
				Current = ParentIndex[Current];
			}
			VoxelPath.Add(ClampedStart);
			Algo::Reverse(VoxelPath);
		}

		for (const FIntVector& V : VoxelPath)
		{
			Path.Add(VoxelToWord(V));
		}
		if (Path.Num() > 1)
		{
			Path[0] = VoxelToWord(Start);
			Path.Last() = VoxelToWord(End);
		}
		else if (Path.Num() == 1)
		{
			Path[0] = VoxelToWord(Start);
		}
	}

	return Path;
}

void AV3DNavigationData::FindPathAsync(const FIntVector& Start, const FIntVector& End,const int64& RequestId)
{
	auto FindPathTask = [](const FIntVector& Start, const FIntVector& End,AV3DNavigationData* ThisNavi,const int64& RequestId)
	{
		TArray<FVector> Path;
		float VoxelSize = ThisNavi->VoxelSize;
		FIntVector GridSize = ThisNavi->GridSize;

		// 将起终点夹取到合法范围内，越界或不可达则返回空路径
		FIntVector ClampedStart = FIntVector(
			FMath::Clamp(Start.X, 0, GridSize.X - 1),
			FMath::Clamp(Start.Y, 0, GridSize.Y - 1),
			FMath::Clamp(Start.Z, 0, GridSize.Z - 1));
		FIntVector ClampedEnd = FIntVector(
			FMath::Clamp(End.X, 0, GridSize.X - 1),
			FMath::Clamp(End.Y, 0, GridSize.Y - 1),
			FMath::Clamp(End.Z, 0, GridSize.Z - 1));

		if (GridSize.X <= 0 || GridSize.Y <= 0 || GridSize.Z <= 0)
		{
			// 计算完成后，调度回主线程 GameThread
			AsyncTask(ENamedThreads::GameThread, [ThisNavi, Path,RequestId]()
			{
				//  在主线程安全地广播结果，蓝图或其他监听者会收到通知
				ThisNavi->OnPathFound.Broadcast(RequestId,Path,false);
				
			});
			return;
		}

		// 起终点被阻挡则无法寻路
		if (ThisNavi->IsBlocked(ClampedStart) || ThisNavi->IsBlocked(ClampedEnd))
		{
			// 计算完成后，调度回主线程 GameThread
			AsyncTask(ENamedThreads::GameThread, [ThisNavi, Path,RequestId]()
			{
				//  在主线程安全地广播结果，蓝图或其他监听者会收到通知
				ThisNavi->OnPathFound.Broadcast(RequestId,Path,false);
			});
			return;
		}

		// 26向移动：6轴 + 12对角 + 8体对角
		static const int32 MoveDelta[26][3] = {
			{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1},
			{1,1,0},{1,-1,0},{-1,1,0},{-1,-1,0},{1,0,1},{1,0,-1},
			{-1,0,1},{-1,0,-1},{0,1,1},{0,1,-1},{0,-1,1},{0,-1,-1},
			{1,1,1},{1,1,-1},{1,-1,1},{1,-1,-1},{-1,1,1},{-1,1,-1},
			{-1,-1,1},{-1,-1,-1}
		};

		auto VoxelIndex = [GridSize](const FIntVector& V)
		{
			// 1D线性化索引
			return (V.Z * GridSize.Y + V.Y) * GridSize.X + V.X;
		};

		const int32 Total = GridSize.X * GridSize.Y * GridSize.Z;
		const float DiagonalCost = FMath::Sqrt(3.0f) * VoxelSize;
		const float FaceDiagonalCost = FMath::Sqrt(2.0f) * VoxelSize;

		// A* 所需数据结构
		TArray<FIntVector> Parents;
		Parents.Init({}, Total);
		TArray<int32> ParentIndex;
		ParentIndex.Init(INDEX_NONE, Total);
		const float kMaxDist = FLT_MAX;
		TArray<float> GScore;
		GScore.Init(kMaxDist, Total);
		TArray<float> FScore;
		FScore.Init(kMaxDist, Total);
		TArray<bool> Closed;
		Closed.Init(false, Total);

		// 一次性构造本次寻路的扁平碰撞掩码，避免 A* 热循环中反复查 TMap/TUniquePtr
		TArray<uint8, TInlineAllocator<64>> CollisionMask;
		CollisionMask.SetNumZeroed(Total);
		for (const auto& Pair : ThisNavi->Chunks)
		{
			const FIntVector& ChunkCoord = Pair.Key;
			const FVoxelChunk* Chunk = Pair.Value.Get();
			if (!Chunk)
			{
				continue;
			}

			for (int32 CZ = 0; CZ < CHUNK_SIZE; CZ++)
			{
				const int32 LocalZ = ChunkCoord.Z * CHUNK_SIZE + CZ;
				if (LocalZ < 0 || LocalZ >= GridSize.Z)
				{
					continue;
				}

				for (int32 CY = 0; CY < CHUNK_SIZE; CY++)
				{
					const int32 LocalY = ChunkCoord.Y * CHUNK_SIZE + CY;
					if (LocalY < 0 || LocalY >= GridSize.Y)
					{
						continue;
					}

					for (int32 CX = 0; CX < CHUNK_SIZE; CX++)
					{
						const int32 LocalX = ChunkCoord.X * CHUNK_SIZE + CX;
						if (LocalX < 0 || LocalX >= GridSize.X)
						{
							continue;
						}

						const int32 VoxelIdx =
							(LocalZ * GridSize.Y + LocalY) * GridSize.X + LocalX;

						const int32 LocalIndex = CX + CY * CHUNK_SIZE + CZ * CHUNK_SIZE * CHUNK_SIZE;
						if (LocalIndex < CHUNK_VOXELS && Chunk->Occupancy[LocalIndex])
						{
							CollisionMask[VoxelIdx] = 1;
						}
					}
				}
			}
		}

		auto IsBlockedFast = [&](int32 VoxelIdx)
		{
			return VoxelIdx >= 0 && VoxelIdx < Total && CollisionMask[VoxelIdx];
		};

		const int32 StartIdx = VoxelIndex(ClampedStart);
		const int32 EndIdx = VoxelIndex(ClampedEnd);
		if (IsBlockedFast(StartIdx) || IsBlockedFast(EndIdx))
		{
			// 计算完成后，调度回主线程 GameThread
			AsyncTask(ENamedThreads::GameThread, [ThisNavi, Path,RequestId]()
			{
				//  在主线程安全地广播结果，蓝图或其他监听者会收到通知
				ThisNavi->OnPathFound.Broadcast(RequestId,Path,false);
				
			});
			return;
		}

		// 简易二叉堆优先队列
		TArray<int32> Open;
		auto PopMin = [&]()
		{
			const int32 Idx = Open[0];
			if (Open.Num() == 1)
			{
				Open.Reset();
				return Idx;
			}
			Open[0] = Open.Pop();
			int32 Cur = 0;
			while (true)
			{
				int32 Left = Cur * 2 + 1;
				int32 Right = Left + 1;
				int32 Smallest = Cur;
				if (Left < Open.Num() && FScore[Open[Left]] < FScore[Open[Smallest]])
				{
					Smallest = Left;
				}
				if (Right < Open.Num() && FScore[Open[Right]] < FScore[Open[Smallest]])
				{
					Smallest = Right;
				}
				if (Smallest == Cur) break;
				Swap(Open[Cur], Open[Smallest]);
				Cur = Smallest;
			}
			return Idx;
		};
		auto Push = [&](int32 Idx)
		{
			Open.Add(Idx);
			int32 Cur = Open.Num() - 1;
			while (Cur > 0)
			{
				const int32 Parent = (Cur - 1) / 2;
				if (FScore[Open[Parent]] <= FScore[Open[Cur]]) break;
				Swap(Open[Parent], Open[Cur]);
				Cur = Parent;
			}
		};

		// 启发函数：切比雪夫距离对应的3D欧氏代价
		auto Heuristic = [](const FIntVector& A, const FIntVector& B, float FaceCost, float BodyCost)
		{
			int32 DX = FMath::Abs(A.X - B.X);
			int32 DY = FMath::Abs(A.Y - B.Y);
			int32 DZ = FMath::Abs(A.Z - B.Z);
			int32 Min = FMath::Min(DX, FMath::Min(DY, DZ));
			int32 Mid = DX + DY + DZ - 2 * Min;
			int32 Max = DX + DY + DZ - 2 * (Min + Mid) - Min;
			return static_cast<float>(Max) * BodyCost + static_cast<float>(Min) * FaceCost;
		};

		const float StartH = Heuristic(ClampedStart, ClampedEnd, FaceDiagonalCost, DiagonalCost);
		GScore[StartIdx] = 0.0f;
		FScore[StartIdx] = StartH;
		Push(StartIdx);

		bool bFound = false;
		while (Open.Num() > 0)
		{
			const int32 CurrentIdx = PopMin();
			if (Closed[CurrentIdx])
			{
				continue;
			}
			Closed[CurrentIdx] = true;

			if (CurrentIdx == EndIdx)
			{
				bFound = true;
				break;
			}

			FIntVector Current(CurrentIdx % GridSize.X, (CurrentIdx / GridSize.X) % GridSize.Y, CurrentIdx / (GridSize.X * GridSize.Y));

			for (const auto& D : MoveDelta)
			{
				const int32 NX = Current.X + D[0];
				const int32 NY = Current.Y + D[1];
				const int32 NZ = Current.Z + D[2];
				if (NX < 0 || NX >= GridSize.X || NY < 0 || NY >= GridSize.Y || NZ < 0 || NZ >= GridSize.Z)
				{
					continue;
				}

				const FIntVector Neighbor(NX, NY, NZ);
				const int32 NeighborIdx = VoxelIndex(Neighbor);
				if (Closed[NeighborIdx] || IsBlockedFast(NeighborIdx))
				{
					continue;
				}

				// 斜向移动时，禁止斜穿墙角：斜向经过的相邻轴向体素必须都未阻挡
				if (D[0] != 0 && D[1] != 0)
				{
					const int32 Side1Idx = VoxelIndex(FIntVector(NX, Current.Y, Current.Z));
					const int32 Side2Idx = VoxelIndex(FIntVector(Current.X, NY, Current.Z));
					if (IsBlockedFast(Side1Idx) || IsBlockedFast(Side2Idx))
					{
						continue;
					}
				}
				if (D[0] != 0 && D[2] != 0)
				{
					const int32 Side1Idx = VoxelIndex(FIntVector(NX, Current.Y, NZ));
					const int32 Side2Idx = VoxelIndex(FIntVector(Current.X, Current.Y, NZ));
					if (IsBlockedFast(Side1Idx) || IsBlockedFast(Side2Idx))
					{
						continue;
					}
				}
				if (D[1] != 0 && D[2] != 0)
				{
					const int32 Side1Idx = VoxelIndex(FIntVector(Current.X, NY, NZ));
					const int32 Side2Idx = VoxelIndex(FIntVector(Current.X, Current.Y, NZ));
					if (IsBlockedFast(Side1Idx) || IsBlockedFast(Side2Idx))
					{
						continue;
					}
				}

				float MoveCost;
				if (D[0] != 0 && D[1] != 0 && D[2] != 0)
				{
					MoveCost = DiagonalCost;
				}
				else if ((D[0] != 0 && D[1] != 0) || (D[0] != 0 && D[2] != 0) || (D[1] != 0 && D[2] != 0))
				{
					MoveCost = FaceDiagonalCost;
				}
				else
				{
					MoveCost = VoxelSize;
				}

				const float TentativeG = GScore[CurrentIdx] + MoveCost;

				if (TentativeG < GScore[NeighborIdx])
				{
					GScore[NeighborIdx] = TentativeG;
					FScore[NeighborIdx] = TentativeG + Heuristic(Neighbor, ClampedEnd, FaceDiagonalCost, DiagonalCost);
					Parents[NeighborIdx] = Current;
					ParentIndex[NeighborIdx] = CurrentIdx;
					Push(NeighborIdx);
				}
			}
		}

		if (bFound)
		{
			// 回溯父节点，生成路径
			TArray<FIntVector> VoxelPath;
			if (StartIdx == EndIdx)
			{
				VoxelPath.Add(ClampedStart);
			}
			else
			{
				int32 Current = EndIdx;
				while (Current != StartIdx)
				{
					VoxelPath.Add(Parents[Current]);
					Current = ParentIndex[Current];
				}
				VoxelPath.Add(ClampedStart);
				Algo::Reverse(VoxelPath);
			}

			for (const FIntVector& V : VoxelPath)
			{
				Path.Add(ThisNavi->VoxelToWord(V));
			}
			if (Path.Num() > 1)
			{
				Path[0] = ThisNavi->VoxelToWord(Start);
				Path.Last() = ThisNavi->VoxelToWord(End);
			}
			else if (Path.Num() == 1)
			{
				Path[0] = ThisNavi->VoxelToWord(Start);
			}
		}

		// 计算完成后，调度回主线程 GameThread
		AsyncTask(ENamedThreads::GameThread, [ThisNavi, Path,RequestId]()
		{
			//  在主线程安全地广播结果，蓝图或其他监听者会收到通知
			ThisNavi->OnPathFound.Broadcast(RequestId,Path,false);
				
		});
	};

	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [FindPathTask, Start, End, this,RequestId]()
	{
		FindPathTask(Start, End, this,RequestId);
	});
}

FIntVector AV3DNavigationData::WordToVoxel(const FVector& World) const
{
	FVector Local = World - Bounds.Min;
	return FIntVector(
	FMath::FloorToInt(Local.X/VoxelSize),
	FMath::FloorToInt(Local.Y/VoxelSize),
	FMath::FloorToInt(Local.Z/VoxelSize)
	);
}

FVector AV3DNavigationData::VoxelToWord(const FIntVector& Voxel) const
{
	// 每轴独立处理方向：如果 Bounds.Max 分量的绝对值小于 Bounds.Min 分量，说明该轴是负方向
	FVector World = FVector(Voxel.X, Voxel.Y, Voxel.Z) + FVector(0.5, 0.5, 0.5);
	World *= VoxelSize;
	FVector Offset = Bounds.Min;
	// 判断每轴是否需要反向
	if (Bounds.Max.X < Bounds.Min.X) { World.X = -World.X; Offset.X = Bounds.Min.X; }
	if (Bounds.Max.Y < Bounds.Min.Y) { World.Y = -World.Y; Offset.Y = Bounds.Min.Y; }
	if (Bounds.Max.Z < Bounds.Min.Z) { World.Z = -World.Z; Offset.Z = Bounds.Min.Z; }
	return Offset + World;
}

FIntVector AV3DNavigationData::VoxelToChunk(const FIntVector& Voxel) const
{
	return FIntVector(
		Voxel.X / CHUNK_SIZE,
		Voxel.Y / CHUNK_SIZE,
		Voxel.Z / CHUNK_SIZE
	);
}

bool AV3DNavigationData::IsBlocked(const FIntVector& Voxel) const
{
	//是否在空域内
	if (!IsInsideBounds(Voxel)) return true;
	
	//获取当前体素块坐标
	FIntVector CurrentChunk = VoxelToChunk(Voxel);
	
	//查找对应体素块
	if (Chunks.Find(CurrentChunk))
	{
		//检测是否碰撞
		return  Chunks[CurrentChunk]->CheckVoxel(Voxel);
	}
	
	
	//默认可自由飞行
	return false;
}

void AV3DNavigationData::SetBlocked(const FIntVector& Voxel, bool Blocked)
{
	if (!IsInsideBounds(Voxel)) return;
	//获取当前体素块坐标
	FIntVector CurrentChunk = VoxelToChunk(Voxel);
	if (Chunks.Find(CurrentChunk))
	{
		Chunks[CurrentChunk]->SetBlocked(Voxel,Blocked);
	}else
	{
		TUniquePtr<FVoxelChunk> Chunk = MakeUnique<FVoxelChunk>();
		Chunk->SetBlocked(Voxel,Blocked);
		Chunks.Add(CurrentChunk,MoveTemp(Chunk));
	}
}

bool AV3DNavigationData::IsInsideBounds(const FIntVector& Voxel) const
{
	return Voxel.X >= 0 && Voxel.X < GridSize.X
	&& Voxel.Y >= 0 && Voxel.Y < GridSize.Y
	&& Voxel.Z >= 0 && Voxel.Z < GridSize.Z;
}

