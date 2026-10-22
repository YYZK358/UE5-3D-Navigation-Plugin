// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "V3DNavigationData.h"

#ifdef V3DNAVIGATION_V3DNavigationData_generated_h
#error "V3DNavigationData.generated.h already included, missing '#pragma once' in V3DNavigationData.h"
#endif
#define V3DNAVIGATION_V3DNavigationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnPathFound **********************************************************
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_14_DELEGATE \
V3DNAVIGATION_API void FOnPathFound_DelegateWrapper(const FMulticastScriptDelegate& OnPathFound, int64 RequestID, TArray<FVector> const& PathPoints, bool bSuccess);


// ********** End Delegate FOnPathFound ************************************************************

// ********** Begin Class AV3DNavigationData *******************************************************
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execVoxelToWord); \
	DECLARE_FUNCTION(execWordToVoxel); \
	DECLARE_FUNCTION(execFindPathAsync); \
	DECLARE_FUNCTION(execFindPath);


struct Z_Construct_UClass_AV3DNavigationData_Statics;
V3DNAVIGATION_API UClass* Z_Construct_UClass_AV3DNavigationData_NoRegister();

#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAV3DNavigationData(); \
	friend struct ::Z_Construct_UClass_AV3DNavigationData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend V3DNAVIGATION_API UClass* ::Z_Construct_UClass_AV3DNavigationData_NoRegister(); \
public: \
	DECLARE_CLASS2(AV3DNavigationData, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/V3DNavigation"), Z_Construct_UClass_AV3DNavigationData_NoRegister) \
	DECLARE_SERIALIZER(AV3DNavigationData)


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AV3DNavigationData(AV3DNavigationData&&) = delete; \
	AV3DNavigationData(const AV3DNavigationData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AV3DNavigationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AV3DNavigationData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AV3DNavigationData) \
	NO_API virtual ~AV3DNavigationData();


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_53_PROLOG
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_INCLASS_NO_PURE_DECLS \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AV3DNavigationData;

// ********** End Class AV3DNavigationData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
