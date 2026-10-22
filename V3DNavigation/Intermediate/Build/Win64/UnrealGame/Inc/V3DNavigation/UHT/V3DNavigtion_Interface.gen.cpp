// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V3DNavigtion_Interface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeV3DNavigtion_Interface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_V3DNavigation();
V3DNAVIGATION_API UClass* Z_Construct_UClass_AV3DNavigationData_NoRegister();
V3DNAVIGATION_API UClass* Z_Construct_UClass_UV3DNavigtion_Interface();
V3DNAVIGATION_API UClass* Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UV3DNavigtion_Interface Function SetNavigator ************************
struct Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics
{
	struct V3DNavigtion_Interface_eventSetNavigator_Parms
	{
		AV3DNavigationData* Navigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigtion_Interface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNavigator constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Navigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNavigator constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNavigator Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::NewProp_Navigator = { "Navigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigtion_Interface_eventSetNavigator_Parms, Navigator), Z_Construct_UClass_AV3DNavigationData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::NewProp_Navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::PropPointers) < 2048);
// ********** End Function SetNavigator Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UV3DNavigtion_Interface, nullptr, "SetNavigator", 	Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::V3DNavigtion_Interface_eventSetNavigator_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::V3DNavigtion_Interface_eventSetNavigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IV3DNavigtion_Interface::execSetNavigator)
{
	P_GET_OBJECT(AV3DNavigationData,Z_Param_Navigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigator(Z_Param_Navigator);
	P_NATIVE_END;
}
// ********** End Interface UV3DNavigtion_Interface Function SetNavigator **************************

// ********** Begin Interface UV3DNavigtion_Interface **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UV3DNavigtion_Interface;
UClass* UV3DNavigtion_Interface::GetPrivateStaticClass()
{
	using TClass = UV3DNavigtion_Interface;
	if (!Z_Registration_Info_UClass_UV3DNavigtion_Interface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("V3DNavigtion_Interface"),
			Z_Registration_Info_UClass_UV3DNavigtion_Interface.InnerSingleton,
			StaticRegisterNativesUV3DNavigtion_Interface,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UV3DNavigtion_Interface.InnerSingleton;
}
UClass* Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister()
{
	return UV3DNavigtion_Interface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UV3DNavigtion_Interface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/V3DNavigtion_Interface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UV3DNavigtion_Interface constinit property declarations **************
// ********** End Interface UV3DNavigtion_Interface constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetNavigator"), .Pointer = &IV3DNavigtion_Interface::execSetNavigator },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UV3DNavigtion_Interface_SetNavigator, "SetNavigator" }, // 1324972393
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IV3DNavigtion_Interface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UV3DNavigtion_Interface_Statics
UObject* (*const Z_Construct_UClass_UV3DNavigtion_Interface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_V3DNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UV3DNavigtion_Interface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UV3DNavigtion_Interface_Statics::ClassParams = {
	&UV3DNavigtion_Interface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UV3DNavigtion_Interface_Statics::Class_MetaDataParams), Z_Construct_UClass_UV3DNavigtion_Interface_Statics::Class_MetaDataParams)
};
void UV3DNavigtion_Interface::StaticRegisterNativesUV3DNavigtion_Interface()
{
	UClass* Class = UV3DNavigtion_Interface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UV3DNavigtion_Interface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UV3DNavigtion_Interface()
{
	if (!Z_Registration_Info_UClass_UV3DNavigtion_Interface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UV3DNavigtion_Interface.OuterSingleton, Z_Construct_UClass_UV3DNavigtion_Interface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UV3DNavigtion_Interface.OuterSingleton;
}
UV3DNavigtion_Interface::UV3DNavigtion_Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UV3DNavigtion_Interface);
// ********** End Interface UV3DNavigtion_Interface ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h__Script_V3DNavigation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UV3DNavigtion_Interface, UV3DNavigtion_Interface::StaticClass, TEXT("UV3DNavigtion_Interface"), &Z_Registration_Info_UClass_UV3DNavigtion_Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UV3DNavigtion_Interface), 3855682041U) },
	};
}; // Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h__Script_V3DNavigation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h__Script_V3DNavigation_2506120393{
	TEXT("/Script/V3DNavigation"),
	Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h__Script_V3DNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h__Script_V3DNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
