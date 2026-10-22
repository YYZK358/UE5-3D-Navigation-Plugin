// Fill out your copyright notice in the Description page of Project Settings.


#include "AirPathfindingComponent.h"
#include "V3DNavigationData.h"

// Sets default values for this component's properties
UAirPathfindingComponent::UAirPathfindingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Owner = GetOwner();
	// ...
}


// Called when the game starts
void UAirPathfindingComponent::BeginPlay()
{
	Super::BeginPlay();
}




// Called every frame
void UAirPathfindingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bISMove)
	{
		StatTime += DeltaTime;
		SelfLocation += MoveStage;
		Owner->SetActorLocation(SelfLocation);
		Owner->SetActorRotation(MoveStage.Rotation());
		if (StatTime >=BreakTime || FVector::Distance(TargetLocation,SelfLocation)<100)
		{
			bISMove = false;
			if (!PathPoints.IsEmpty())
			{
				TargetLocation = *PathPoints.Peek();
				PathPoints.Pop();
				//移动开始计时
				StatTime = 0;
				//移动失败超时时间
				BreakTime = FVector::Distance(TargetLocation,SelfLocation)*2;
				MoveStage = (TargetLocation - SelfLocation) * MovementSpeed;
				bISMove = true;
			}
		}
	}
	
	// ...
}

void UAirPathfindingComponent::MoveToLocation(const FVector& Target)
{
	if (!NavigationData)return;
	
	SelfLocation = Owner->GetActorLocation();
	FIntVector Start = NavigationData->WordToVoxel(SelfLocation);
	FIntVector End = NavigationData->WordToVoxel(Target);
	TArray<FVector> OutPath = NavigationData->FindPath(Start, End);
	AutoMoveToLocation(RequestId,OutPath,true);
}

void UAirPathfindingComponent::MoveToLocationAsync(const FVector& Target)
{
	if (!NavigationData)return;
	SelfLocation = Owner->GetActorLocation();
	FIntVector Start = NavigationData->WordToVoxel(SelfLocation);
	FIntVector End = NavigationData->WordToVoxel(Target);
	NavigationData->FindPathAsync(Start,End,RequestId);
	NavigationData->OnPathFound.AddDynamic(this,&UAirPathfindingComponent::AutoMoveToLocation);
}

void UAirPathfindingComponent::AutoMoveToLocation(int64 RRequestId,const TArray<FVector>& OutPath,bool bSuccess)
{
	if (RRequestId!=RequestId)return;
	for (FVector PathPoint : OutPath)
	{
		PathPoints.Enqueue(PathPoint);
	}
	
	if (PathPoints.IsEmpty())return;
	
	TargetLocation = *PathPoints.Peek();
	PathPoints.Pop();
	//移动开始计时
	StatTime = 0;
	//移动失败超时时间
	BreakTime = FVector::Distance(TargetLocation,SelfLocation)*2;
	MoveStage = (TargetLocation - SelfLocation) * MovementSpeed;
	bISMove = true;
}

void UAirPathfindingComponent::SetNavigator(AV3DNavigationData* Navigator)
{
	//IV3DNavigtion_Interface::SetNavigator(Navigator);
	UE_LOG(LogTemp,Warning,TEXT("%s 添加 %s"),*Owner->GetName(),*Navigator->GetName());
	this->NavigationData = Navigator;
	if (NavigationData)
	{
		NavigationData->IgnoreClasses.AddUnique(Owner.GetClass());
	}
		//NavigationData->IgnoreActors.Add(Owner);
}



