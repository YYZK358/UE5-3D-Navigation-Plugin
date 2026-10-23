// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "V3DNavigtion_Interface.h"
#include "Components/ActorComponent.h"
#include "Containers/Queue.h"
#include "AirPathfindingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class V3DNAVIGATION_API UAirPathfindingComponent : public UActorComponent,public IV3DNavigtion_Interface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAirPathfindingComponent();
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "V3DNavigation")
	class AV3DNavigationData* NavigationData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "V3DNavigation")
	float MovementSpeed=0.1;
	
	bool bISMove = false;
	
	FVector SelfLocation;
	int64 RequestId=UObject::GetUniqueID();
	
	FVector TargetLocation;
	TQueue<FVector> PathPoints;
	
	TObjectPtr<AActor> Owner;
	FVector MoveStage;
	//移动开始计时
	float StatTime = 0;
	//移动失败超时时间
	float BreakTime;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable,Category = "V3DNavigation")
	void MoveToLocation(const FVector& Target);
	UFUNCTION(BlueprintCallable,Category = "V3DNavigation")
	void MoveToLocationAsync(const FVector& Target);
	UFUNCTION(Category = "V3DNavigation")
	void AutoMoveToLocation(int64 RRequestId,TArray<FVector> OutPath,bool bSuccess);
	
	virtual void SetNavigator(AV3DNavigationData *Navigator) override;
	
	UFUNCTION(BlueprintCallable,Category = "V3DNavigation")
	void GetRandPointInPath(FVector Center,FVector &Out,bool& bFind,float Radius,bool bShowDebug);
};
