// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AirPathfindingComponent.h"

#ifdef V3DNAVIGATION_AirPathfindingComponent_generated_h
#error "AirPathfindingComponent.generated.h already included, missing '#pragma once' in AirPathfindingComponent.h"
#endif
#define V3DNAVIGATION_AirPathfindingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAirPathfindingComponent *************************************************
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoMoveToLocation); \
	DECLARE_FUNCTION(execMoveToLocationAsync); \
	DECLARE_FUNCTION(execMoveToLocation);


struct Z_Construct_UClass_UAirPathfindingComponent_Statics;
V3DNAVIGATION_API UClass* Z_Construct_UClass_UAirPathfindingComponent_NoRegister();

#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAirPathfindingComponent(); \
	friend struct ::Z_Construct_UClass_UAirPathfindingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend V3DNAVIGATION_API UClass* ::Z_Construct_UClass_UAirPathfindingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAirPathfindingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/V3DNavigation"), Z_Construct_UClass_UAirPathfindingComponent_NoRegister) \
	DECLARE_SERIALIZER(UAirPathfindingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAirPathfindingComponent*>(this); }


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAirPathfindingComponent(UAirPathfindingComponent&&) = delete; \
	UAirPathfindingComponent(const UAirPathfindingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirPathfindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirPathfindingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAirPathfindingComponent) \
	NO_API virtual ~UAirPathfindingComponent();


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_12_PROLOG
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAirPathfindingComponent;

// ********** End Class UAirPathfindingComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
