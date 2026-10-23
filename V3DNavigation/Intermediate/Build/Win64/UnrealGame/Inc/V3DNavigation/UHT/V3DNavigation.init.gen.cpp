// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeV3DNavigation_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	V3DNAVIGATION_API UFunction* Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_V3DNavigation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_V3DNavigation()
	{
		if (!Z_Registration_Info_UPackage__Script_V3DNavigation.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/V3DNavigation",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x55E915B4,
			0xD3E6B5DA,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_V3DNavigation.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_V3DNavigation.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_V3DNavigation(Z_Construct_UPackage__Script_V3DNavigation, TEXT("/Script/V3DNavigation"), Z_Registration_Info_UPackage__Script_V3DNavigation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x55E915B4, 0xD3E6B5DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
