// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V3DNavigationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeV3DNavigationData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_V3DNavigation();
V3DNAVIGATION_API UClass* Z_Construct_UClass_AV3DNavigationData();
V3DNAVIGATION_API UClass* Z_Construct_UClass_AV3DNavigationData_NoRegister();
V3DNAVIGATION_API UFunction* Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPathFound **********************************************************
struct Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics
{
	struct _Script_V3DNavigation_eventOnPathFound_Parms
	{
		int64 RequestID;
		TArray<FVector> PathPoints;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPathFound constinit property declarations **************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPathFound constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPathFound Property Definitions *************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_V3DNavigation_eventOnPathFound_Parms, RequestID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_V3DNavigation_eventOnPathFound_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_V3DNavigation_eventOnPathFound_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_V3DNavigation_eventOnPathFound_Parms), &Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPathFound Property Definitions ***************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_V3DNavigation, nullptr, "OnPathFound__DelegateSignature", 	Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::_Script_V3DNavigation_eventOnPathFound_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::_Script_V3DNavigation_eventOnPathFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPathFound_DelegateWrapper(const FMulticastScriptDelegate& OnPathFound, int64 RequestID, const TArray<FVector>& PathPoints, bool bSuccess)
{
	struct _Script_V3DNavigation_eventOnPathFound_Parms
	{
		int64 RequestID;
		TArray<FVector> PathPoints;
		bool bSuccess;
	};
	_Script_V3DNavigation_eventOnPathFound_Parms Parms;
	Parms.RequestID=RequestID;
	Parms.PathPoints=PathPoints;
	Parms.bSuccess=bSuccess ? true : false;
	OnPathFound.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPathFound ************************************************************

// ********** Begin Class AV3DNavigationData Function FindPath *************************************
struct Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics
{
	struct V3DNavigationData_eventFindPath_Parms
	{
		FIntVector Start;
		FIntVector End;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindPath constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindPath constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindPath Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventFindPath_Parms, Start), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventFindPath_Parms, End), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventFindPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::PropPointers) < 2048);
// ********** End Function FindPath Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AV3DNavigationData, nullptr, "FindPath", 	Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::V3DNavigationData_eventFindPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::V3DNavigationData_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AV3DNavigationData_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AV3DNavigationData_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AV3DNavigationData::execFindPath)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_End);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->FindPath(Z_Param_Out_Start,Z_Param_Out_End);
	P_NATIVE_END;
}
// ********** End Class AV3DNavigationData Function FindPath ***************************************

// ********** Begin Class AV3DNavigationData Function FindPathAsync ********************************
struct Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics
{
	struct V3DNavigationData_eventFindPathAsync_Parms
	{
		FIntVector Start;
		FIntVector End;
		int64 RequestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindPathAsync constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindPathAsync constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindPathAsync Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventFindPathAsync_Parms, Start), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventFindPathAsync_Parms, End), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventFindPathAsync_Parms, RequestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestId_MetaData), NewProp_RequestId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::NewProp_RequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::PropPointers) < 2048);
// ********** End Function FindPathAsync Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AV3DNavigationData, nullptr, "FindPathAsync", 	Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::V3DNavigationData_eventFindPathAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::V3DNavigationData_eventFindPathAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AV3DNavigationData_FindPathAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AV3DNavigationData_FindPathAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AV3DNavigationData::execFindPathAsync)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_End);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindPathAsync(Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_RequestId);
	P_NATIVE_END;
}
// ********** End Class AV3DNavigationData Function FindPathAsync **********************************

// ********** Begin Class AV3DNavigationData Function GetRandPointInPath ***************************
struct Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics
{
	struct V3DNavigationData_eventGetRandPointInPath_Parms
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
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventGetRandPointInPath_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventGetRandPointInPath_Parms, Out), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bFind_SetBit(void* Obj)
{
	((V3DNavigationData_eventGetRandPointInPath_Parms*)Obj)->bFind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bFind = { "bFind", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(V3DNavigationData_eventGetRandPointInPath_Parms), &Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bFind_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventGetRandPointInPath_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bShowDebug_SetBit(void* Obj)
{
	((V3DNavigationData_eventGetRandPointInPath_Parms*)Obj)->bShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(V3DNavigationData_eventGetRandPointInPath_Parms), &Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_Out,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::NewProp_bShowDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::PropPointers) < 2048);
// ********** End Function GetRandPointInPath Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AV3DNavigationData, nullptr, "GetRandPointInPath", 	Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::V3DNavigationData_eventGetRandPointInPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::V3DNavigationData_eventGetRandPointInPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AV3DNavigationData::execGetRandPointInPath)
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
// ********** End Class AV3DNavigationData Function GetRandPointInPath *****************************

// ********** Begin Class AV3DNavigationData Function VoxelToWord **********************************
struct Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics
{
	struct V3DNavigationData_eventVoxelToWord_Parms
	{
		FIntVector Voxel;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voxel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function VoxelToWord constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function VoxelToWord constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function VoxelToWord Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::NewProp_Voxel = { "Voxel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventVoxelToWord_Parms, Voxel), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voxel_MetaData), NewProp_Voxel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventVoxelToWord_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::NewProp_Voxel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::PropPointers) < 2048);
// ********** End Function VoxelToWord Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AV3DNavigationData, nullptr, "VoxelToWord", 	Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::V3DNavigationData_eventVoxelToWord_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::Function_MetaDataParams), Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::V3DNavigationData_eventVoxelToWord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AV3DNavigationData_VoxelToWord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AV3DNavigationData_VoxelToWord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AV3DNavigationData::execVoxelToWord)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Voxel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->VoxelToWord(Z_Param_Out_Voxel);
	P_NATIVE_END;
}
// ********** End Class AV3DNavigationData Function VoxelToWord ************************************

// ********** Begin Class AV3DNavigationData Function WordToVoxel **********************************
struct Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics
{
	struct V3DNavigationData_eventWordToVoxel_Parms
	{
		FVector World;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe4\xbd\x93\xe7\xb4\xa0\xe5\x9d\x90\xe6\xa0\x87\xe4\xb8\x8e\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe8\xbd\xac\xe6\x8d\xa2\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe4\xbd\x93\xe7\xb4\xa0\xe5\x9d\x90\xe6\xa0\x87\xe4\xb8\x8e\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe8\xbd\xac\xe6\x8d\xa2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WordToVoxel constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WordToVoxel constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WordToVoxel Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventWordToVoxel_Parms, World), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(V3DNavigationData_eventWordToVoxel_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::PropPointers) < 2048);
// ********** End Function WordToVoxel Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AV3DNavigationData, nullptr, "WordToVoxel", 	Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::V3DNavigationData_eventWordToVoxel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::V3DNavigationData_eventWordToVoxel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AV3DNavigationData_WordToVoxel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AV3DNavigationData_WordToVoxel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AV3DNavigationData::execWordToVoxel)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->WordToVoxel(Z_Param_Out_World);
	P_NATIVE_END;
}
// ********** End Class AV3DNavigationData Function WordToVoxel ************************************

// ********** Begin Class AV3DNavigationData *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AV3DNavigationData;
UClass* AV3DNavigationData::GetPrivateStaticClass()
{
	using TClass = AV3DNavigationData;
	if (!Z_Registration_Info_UClass_AV3DNavigationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("V3DNavigationData"),
			Z_Registration_Info_UClass_AV3DNavigationData.InnerSingleton,
			StaticRegisterNativesAV3DNavigationData,
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
	return Z_Registration_Info_UClass_AV3DNavigationData.InnerSingleton;
}
UClass* Z_Construct_UClass_AV3DNavigationData_NoRegister()
{
	return AV3DNavigationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AV3DNavigationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "V3DNavigationData.h" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsRoot_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsBox_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreClasses_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPathFound_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe5\xa7\x94\xe6\x89\x98\xe6\x89\xbe\xe5\x88\xb0\xe8\xb7\xaf\xe5\xbe\x84\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe5\xa7\x94\xe6\x89\x98\xe6\x89\xbe\xe5\x88\xb0\xe8\xb7\xaf\xe5\xbe\x84" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe7\xa9\xba\xe5\x9f\x9f\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe7\xa9\xba\xe5\x9f\x9f\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe4\xbd\x93\xe7\xb4\xa0\xe8\xbe\xb9\xe9\x95\xbf\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe4\xbd\x93\xe7\xb4\xa0\xe8\xbe\xb9\xe9\x95\xbf" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe7\xbd\x91\xe6\xa0\xbc\xe5\xa4\xa7\xe5\xb0\x8f\xef\xbc\x8cxyz\xe4\xbd\x93\xe7\xb4\xa0\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe7\xbd\x91\xe6\xa0\xbc\xe5\xa4\xa7\xe5\xb0\x8f\xef\xbc\x8cxyz\xe4\xbd\x93\xe7\xb4\xa0\xe6\x95\xb0\xe9\x87\x8f" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBounds_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe8\xb0\x83\xe8\xaf\x95\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe8\xb0\x83\xe8\xaf\x95\xe4\xbf\xa1\xe6\x81\xaf" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawChunks_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFreeVoxels_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivideFactor_MetaData[] = {
		{ "Category", "V3DNavigation" },
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x86\xe5\x88\x86\xe5\x9b\xa0\xe5\xad\x90\xef\xbc\x9a\xe6\xaf\x8f\xe7\xbb\xb4\xe4\xba\x8c\xe5\x88\x86 => 8\xe4\xb8\xaa\xe5\xad\x90\xe7\xab\x8b\xe6\x96\xb9\xe4\xbd\x93\xef\xbc\x88\xe5\x85\xab\xe5\x8f\x89\xef\xbc\x89\n" },
		{ "ModuleRelativePath", "Public/V3DNavigationData.h" },
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x86\xe5\x88\x86\xe5\x9b\xa0\xe5\xad\x90\xef\xbc\x9a\xe6\xaf\x8f\xe7\xbb\xb4\xe4\xba\x8c\xe5\x88\x86 => 8\xe4\xb8\xaa\xe5\xad\x90\xe7\xab\x8b\xe6\x96\xb9\xe4\xbd\x93\xef\xbc\x88\xe5\x85\xab\xe5\x8f\x89\xef\xbc\x89" },
	};
#endif // WITH_METADATA

// ********** Begin Class AV3DNavigationData constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IgnoreClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreClasses;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPathFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static void NewProp_bDrawBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBounds;
	static void NewProp_bDrawChunks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawChunks;
	static void NewProp_bDrawFreeVoxels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFreeVoxels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubdivideFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AV3DNavigationData constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindPath"), .Pointer = &AV3DNavigationData::execFindPath },
		{ .NameUTF8 = UTF8TEXT("FindPathAsync"), .Pointer = &AV3DNavigationData::execFindPathAsync },
		{ .NameUTF8 = UTF8TEXT("GetRandPointInPath"), .Pointer = &AV3DNavigationData::execGetRandPointInPath },
		{ .NameUTF8 = UTF8TEXT("VoxelToWord"), .Pointer = &AV3DNavigationData::execVoxelToWord },
		{ .NameUTF8 = UTF8TEXT("WordToVoxel"), .Pointer = &AV3DNavigationData::execWordToVoxel },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AV3DNavigationData_FindPath, "FindPath" }, // 834411527
		{ &Z_Construct_UFunction_AV3DNavigationData_FindPathAsync, "FindPathAsync" }, // 2760038814
		{ &Z_Construct_UFunction_AV3DNavigationData_GetRandPointInPath, "GetRandPointInPath" }, // 3905375067
		{ &Z_Construct_UFunction_AV3DNavigationData_VoxelToWord, "VoxelToWord" }, // 2392601833
		{ &Z_Construct_UFunction_AV3DNavigationData_WordToVoxel, "WordToVoxel" }, // 242006140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AV3DNavigationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AV3DNavigationData_Statics

// ********** Begin Class AV3DNavigationData Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_BoundsRoot = { "BoundsRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, BoundsRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsRoot_MetaData), NewProp_BoundsRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_BoundsBox = { "BoundsBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, BoundsBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsBox_MetaData), NewProp_BoundsBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_IgnoreClasses_Inner = { "IgnoreClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_IgnoreClasses = { "IgnoreClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, IgnoreClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreClasses_MetaData), NewProp_IgnoreClasses_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_OnPathFound = { "OnPathFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, OnPathFound), Z_Construct_UDelegateFunction_V3DNavigation_OnPathFound__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPathFound_MetaData), NewProp_OnPathFound_MetaData) }; // 3249652719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, GridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
void Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawBounds_SetBit(void* Obj)
{
	((AV3DNavigationData*)Obj)->bDrawBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawBounds = { "bDrawBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AV3DNavigationData), &Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawBounds_MetaData), NewProp_bDrawBounds_MetaData) };
void Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawChunks_SetBit(void* Obj)
{
	((AV3DNavigationData*)Obj)->bDrawChunks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawChunks = { "bDrawChunks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AV3DNavigationData), &Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawChunks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawChunks_MetaData), NewProp_bDrawChunks_MetaData) };
void Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawFreeVoxels_SetBit(void* Obj)
{
	((AV3DNavigationData*)Obj)->bDrawFreeVoxels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawFreeVoxels = { "bDrawFreeVoxels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AV3DNavigationData), &Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawFreeVoxels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFreeVoxels_MetaData), NewProp_bDrawFreeVoxels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_SubdivideFactor = { "SubdivideFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AV3DNavigationData, SubdivideFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivideFactor_MetaData), NewProp_SubdivideFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AV3DNavigationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_BoundsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_BoundsBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_IgnoreClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_IgnoreClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_OnPathFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_bDrawFreeVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AV3DNavigationData_Statics::NewProp_SubdivideFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AV3DNavigationData_Statics::PropPointers) < 2048);
// ********** End Class AV3DNavigationData Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AV3DNavigationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_V3DNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AV3DNavigationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AV3DNavigationData_Statics::ClassParams = {
	&AV3DNavigationData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AV3DNavigationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AV3DNavigationData_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AV3DNavigationData_Statics::Class_MetaDataParams), Z_Construct_UClass_AV3DNavigationData_Statics::Class_MetaDataParams)
};
void AV3DNavigationData::StaticRegisterNativesAV3DNavigationData()
{
	UClass* Class = AV3DNavigationData::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AV3DNavigationData_Statics::Funcs));
}
UClass* Z_Construct_UClass_AV3DNavigationData()
{
	if (!Z_Registration_Info_UClass_AV3DNavigationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AV3DNavigationData.OuterSingleton, Z_Construct_UClass_AV3DNavigationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AV3DNavigationData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AV3DNavigationData);
AV3DNavigationData::~AV3DNavigationData() {}
// ********** End Class AV3DNavigationData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h__Script_V3DNavigation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AV3DNavigationData, AV3DNavigationData::StaticClass, TEXT("AV3DNavigationData"), &Z_Registration_Info_UClass_AV3DNavigationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AV3DNavigationData), 3981844955U) },
	};
}; // Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h__Script_V3DNavigation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h__Script_V3DNavigation_502140537{
	TEXT("/Script/V3DNavigation"),
	Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h__Script_V3DNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigationData_h__Script_V3DNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
