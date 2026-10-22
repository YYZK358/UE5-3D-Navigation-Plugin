// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "V3DNavigtion_Interface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UV3DNavigtion_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AV3DNavigationData;
class V3DNAVIGATION_API IV3DNavigtion_Interface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(Category = "V3DNavigation")
	virtual  void SetNavigator(AV3DNavigationData *Navigator);
};
