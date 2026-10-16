// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirPathfindingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAirPathfindingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_V3DNavigation();
V3DNAVIGATION_API UClass* Z_Construct_UClass_AV3DNavigationData_NoRegister();
V3DNAVIGATION_API UClass* Z_Construct_UClass_UAirPathfindingComponent();
V3DNAVIGATION_API UClass* Z_Construct_UClass_UAirPathfindingComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAirPathfindingComponent Function MoveToLocation *************************
struct Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics
{
	struct AirPathfindingComponent_eventMoveToLocation_Parms
	{
		FVector Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/AirPathfindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MoveToLocation constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveToLocation constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveToLocation Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventMoveToLocation_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::PropPointers) < 2048);
// ********** End Function MoveToLocation Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirPathfindingComponent, nullptr, "MoveToLocation", 	Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::AirPathfindingComponent_eventMoveToLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::AirPathfindingComponent_eventMoveToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirPathfindingComponent::execMoveToLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToLocation(Z_Param_Out_Target);
	P_NATIVE_END;
}
// ********** End Class UAirPathfindingComponent Function MoveToLocation ***************************

// ********** Begin Class UAirPathfindingComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAirPathfindingComponent;
UClass* UAirPathfindingComponent::GetPrivateStaticClass()
{
	using TClass = UAirPathfindingComponent;
	if (!Z_Registration_Info_UClass_UAirPathfindingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AirPathfindingComponent"),
			Z_Registration_Info_UClass_UAirPathfindingComponent.InnerSingleton,
			StaticRegisterNativesUAirPathfindingComponent,
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
	return Z_Registration_Info_UClass_UAirPathfindingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAirPathfindingComponent_NoRegister()
{
	return UAirPathfindingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAirPathfindingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AirPathfindingComponent.h" },
		{ "ModuleRelativePath", "Public/AirPathfindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationData_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/AirPathfindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/AirPathfindingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAirPathfindingComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAirPathfindingComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MoveToLocation"), .Pointer = &UAirPathfindingComponent::execMoveToLocation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation, "MoveToLocation" }, // 1559119955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirPathfindingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAirPathfindingComponent_Statics

// ********** Begin Class UAirPathfindingComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAirPathfindingComponent_Statics::NewProp_NavigationData = { "NavigationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAirPathfindingComponent, NavigationData), Z_Construct_UClass_AV3DNavigationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationData_MetaData), NewProp_NavigationData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAirPathfindingComponent_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAirPathfindingComponent, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAirPathfindingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAirPathfindingComponent_Statics::NewProp_NavigationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAirPathfindingComponent_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAirPathfindingComponent_Statics::PropPointers) < 2048);
// ********** End Class UAirPathfindingComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UAirPathfindingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_V3DNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAirPathfindingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAirPathfindingComponent_Statics::ClassParams = {
	&UAirPathfindingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAirPathfindingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAirPathfindingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAirPathfindingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAirPathfindingComponent_Statics::Class_MetaDataParams)
};
void UAirPathfindingComponent::StaticRegisterNativesUAirPathfindingComponent()
{
	UClass* Class = UAirPathfindingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAirPathfindingComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAirPathfindingComponent()
{
	if (!Z_Registration_Info_UClass_UAirPathfindingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAirPathfindingComponent.OuterSingleton, Z_Construct_UClass_UAirPathfindingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAirPathfindingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAirPathfindingComponent);
UAirPathfindingComponent::~UAirPathfindingComponent() {}
// ********** End Class UAirPathfindingComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAirPathfindingComponent, UAirPathfindingComponent::StaticClass, TEXT("UAirPathfindingComponent"), &Z_Registration_Info_UClass_UAirPathfindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAirPathfindingComponent), 99209770U) },
	};
}; // Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_674720720{
	TEXT("/Script/V3DNavigation"),
	Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
