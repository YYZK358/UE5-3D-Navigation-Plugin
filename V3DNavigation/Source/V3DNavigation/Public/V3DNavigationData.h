// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/StaticBitArray.h"
#include "GameFramework/Actor.h"
#include "CollisionQueryParams.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "V3DNavigationData.generated.h"


constexpr int32 CHUNK_SIZE = 32;                          // 每个 Chunk 边长（体素）
constexpr int32 CHUNK_VOXELS = CHUNK_SIZE * CHUNK_SIZE * CHUNK_SIZE; // 32768


//体素块边长CHUNK_SIZE
struct FVoxelChunk
{
	//位图: 1表示障碍物，0表示自由
	TStaticBitArray<CHUNK_VOXELS> Occupancy;
	FVoxelChunk()
	{
		Occupancy.Fill(false);
	}
	//体素坐标对应的Chunk局部索引
	int32 VoxelToChunkLocal(const FIntVector& Voxel) const
	{
		 auto Mod = [](int32 Value)
            {
                int32 R = Value % CHUNK_SIZE;
                return (R < 0) ? R + CHUNK_SIZE : R;
            };
            FIntVector Local(Mod(Voxel.X), Mod(Voxel.Y), Mod(Voxel.Z));
            return Local.X + Local.Y * CHUNK_SIZE + Local.Z * CHUNK_SIZE * CHUNK_SIZE;
	}
	bool CheckVoxel(const FIntVector& Voxel) const
	{
		return Occupancy[VoxelToChunkLocal(Voxel)];
	}
	void SetBlocked(const FIntVector& Voxel, bool Blocked)
	{
		Occupancy[VoxelToChunkLocal(Voxel)] = Blocked;
	}
};


UCLASS()
class V3DNAVIGATION_API AV3DNavigationData : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AV3DNavigationData();
	
	UPROPERTY(VisibleAnywhere, Category = "V3DNavigation")
	USceneComponent* BoundsRoot;

	UPROPERTY(VisibleAnywhere, Category = "V3DNavigation")
	class UBoxComponent* BoundsBox;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "V3DNavigation")
	TArray<TSubclassOf<AActor>> IgnoreClasses;
	TArray<AActor*> IgnoreActors;
	FCollisionQueryParams Params;
	
	//空域大小
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "V3DNavigation")
	FBox Bounds;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "V3DNavigation")
	//体素边长
	float VoxelSize = 100;
	//网格大小，xyz体素数量
	UPROPERTY(BlueprintReadOnly,Category = "V3DNavigation")
	FIntVector GridSize;
	
	//体素坐标对应的体素块
	TMap<FIntVector,TUniquePtr<FVoxelChunk>> Chunks;
	
	
	//调试信息
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "V3DNavigation")
	bool bDrawBounds = false;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//绘制空域大小
	void DrawBounds();
	//初始化网格大小（根据Bounds和VoxelSize计算）
	void InitGridSize();
	//绘制体素
	void DrawVoxels();
	
	void CheckBoundsAndMakers();
	void CheckVoxelOverlap(const FIntVector& Voxel);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable,Category = "V3DNavigation")
	TArray<FVector> FindPath(const FIntVector& Start, const FIntVector& End);
	
	//体素坐标与世界坐标之间的转换
	UFUNCTION(BlueprintCallable,Category = "V3DNavigation")
	FIntVector WordToVoxel(const FVector& World) const;
	UFUNCTION(BlueprintCallable,Category = "V3DNavigation")
	FVector VoxelToWord(const FIntVector& Voxel) const;
	
	//查询坐标位于的体素块
	FIntVector VoxelToChunk(const FIntVector& Voxel) const;
	
	
	//查询是否阻挡
	bool IsBlocked(const FIntVector& Voxel) const;
	//设置是否阻挡
	void SetBlocked(const FIntVector& Voxel, bool Blocked);
	//查询是否越界
	bool IsInsideBounds(const FIntVector& Voxel) const;
};
