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
V3DNAVIGATION_API UClass* Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAirPathfindingComponent Function AutoMoveToLocation *********************
struct Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics
{
	struct AirPathfindingComponent_eventAutoMoveToLocation_Parms
	{
		int64 RRequestId;
		TArray<FVector> OutPath;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/AirPathfindingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AutoMoveToLocation constinit property declarations ********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RRequestId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPath;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AutoMoveToLocation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AutoMoveToLocation Property Definitions *******************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_RRequestId = { "RRequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventAutoMoveToLocation_Parms, RRequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_OutPath_Inner = { "OutPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventAutoMoveToLocation_Parms, OutPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((AirPathfindingComponent_eventAutoMoveToLocation_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirPathfindingComponent_eventAutoMoveToLocation_Parms), &Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_RRequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_OutPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_OutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::PropPointers) < 2048);
// ********** End Function AutoMoveToLocation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirPathfindingComponent, nullptr, "AutoMoveToLocation", 	Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::AirPathfindingComponent_eventAutoMoveToLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::AirPathfindingComponent_eventAutoMoveToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirPathfindingComponent::execAutoMoveToLocation)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_RRequestId);
	P_GET_TARRAY(FVector,Z_Param_OutPath);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoMoveToLocation(Z_Param_RRequestId,Z_Param_OutPath,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UAirPathfindingComponent Function AutoMoveToLocation ***********************

// ********** Begin Class UAirPathfindingComponent Function GetRandPointInPath *********************
struct Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics
{
	struct AirPathfindingComponent_eventGetRandPointInPath_Parms
	{
		FVector Center;
		FVector Out;
		bool bFind;
		float Radius;
		bool bShowDebug;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/AirPathfindingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRandPointInPath constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Out;
	static void NewProp_bFind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFind;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bShowDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRandPointInPath constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRandPointInPath Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventGetRandPointInPath_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventGetRandPointInPath_Parms, Out), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bFind_SetBit(void* Obj)
{
	((AirPathfindingComponent_eventGetRandPointInPath_Parms*)Obj)->bFind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bFind = { "bFind", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirPathfindingComponent_eventGetRandPointInPath_Parms), &Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bFind_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventGetRandPointInPath_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bShowDebug_SetBit(void* Obj)
{
	((AirPathfindingComponent_eventGetRandPointInPath_Parms*)Obj)->bShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirPathfindingComponent_eventGetRandPointInPath_Parms), &Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_Out,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::NewProp_bShowDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::PropPointers) < 2048);
// ********** End Function GetRandPointInPath Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirPathfindingComponent, nullptr, "GetRandPointInPath", 	Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::AirPathfindingComponent_eventGetRandPointInPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::AirPathfindingComponent_eventGetRandPointInPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirPathfindingComponent::execGetRandPointInPath)
{
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Out);
	P_GET_UBOOL_REF(Z_Param_Out_bFind);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bShowDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRandPointInPath(Z_Param_Center,Z_Param_Out_Out,Z_Param_Out_bFind,Z_Param_Radius,Z_Param_bShowDebug);
	P_NATIVE_END;
}
// ********** End Class UAirPathfindingComponent Function GetRandPointInPath ***********************

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

// ********** Begin Class UAirPathfindingComponent Function MoveToLocationAsync ********************
struct Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics
{
	struct AirPathfindingComponent_eventMoveToLocationAsync_Parms
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

// ********** Begin Function MoveToLocationAsync constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveToLocationAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveToLocationAsync Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirPathfindingComponent_eventMoveToLocationAsync_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::PropPointers) < 2048);
// ********** End Function MoveToLocationAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirPathfindingComponent, nullptr, "MoveToLocationAsync", 	Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::AirPathfindingComponent_eventMoveToLocationAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::AirPathfindingComponent_eventMoveToLocationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirPathfindingComponent::execMoveToLocationAsync)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToLocationAsync(Z_Param_Out_Target);
	P_NATIVE_END;
}
// ********** End Class UAirPathfindingComponent Function MoveToLocationAsync **********************

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
		{ .NameUTF8 = UTF8TEXT("AutoMoveToLocation"), .Pointer = &UAirPathfindingComponent::execAutoMoveToLocation },
		{ .NameUTF8 = UTF8TEXT("GetRandPointInPath"), .Pointer = &UAirPathfindingComponent::execGetRandPointInPath },
		{ .NameUTF8 = UTF8TEXT("MoveToLocation"), .Pointer = &UAirPathfindingComponent::execMoveToLocation },
		{ .NameUTF8 = UTF8TEXT("MoveToLocationAsync"), .Pointer = &UAirPathfindingComponent::execMoveToLocationAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAirPathfindingComponent_AutoMoveToLocation, "AutoMoveToLocation" }, // 1128272360
		{ &Z_Construct_UFunction_UAirPathfindingComponent_GetRandPointInPath, "GetRandPointInPath" }, // 4144200939
		{ &Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocation, "MoveToLocation" }, // 1559119955
		{ &Z_Construct_UFunction_UAirPathfindingComponent_MoveToLocationAsync, "MoveToLocationAsync" }, // 4028405332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAirPathfindingComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister, (int32)VTABLE_OFFSET(UAirPathfindingComponent, IV3DNavigtion_Interface), false },  // 3855682041
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAirPathfindingComponent_Statics::ClassParams = {
	&UAirPathfindingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAirPathfindingComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAirPathfindingComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_UAirPathfindingComponent, UAirPathfindingComponent::StaticClass, TEXT("UAirPathfindingComponent"), &Z_Registration_Info_UClass_UAirPathfindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAirPathfindingComponent), 2564763848U) },
	};
}; // Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_3284933202{
	TEXT("/Script/V3DNavigation"),
	Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_AirPathfindingComponent_h__Script_V3DNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
