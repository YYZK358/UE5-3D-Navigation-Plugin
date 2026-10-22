// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "V3DNavigtion_Interface.h"

#ifdef V3DNAVIGATION_V3DNavigtion_Interface_generated_h
#error "V3DNavigtion_Interface.generated.h already included, missing '#pragma once' in V3DNavigtion_Interface.h"
#endif
#define V3DNAVIGATION_V3DNavigtion_Interface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AV3DNavigationData;

// ********** Begin Interface UV3DNavigtion_Interface **********************************************
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNavigator);


struct Z_Construct_UClass_UV3DNavigtion_Interface_Statics;
V3DNAVIGATION_API UClass* Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister();

#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	V3DNAVIGATION_API UV3DNavigtion_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UV3DNavigtion_Interface(UV3DNavigtion_Interface&&) = delete; \
	UV3DNavigtion_Interface(const UV3DNavigtion_Interface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(V3DNAVIGATION_API, UV3DNavigtion_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UV3DNavigtion_Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UV3DNavigtion_Interface) \
	virtual ~UV3DNavigtion_Interface() = default;


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUV3DNavigtion_Interface(); \
	friend struct ::Z_Construct_UClass_UV3DNavigtion_Interface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend V3DNAVIGATION_API UClass* ::Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister(); \
public: \
	DECLARE_CLASS2(UV3DNavigtion_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/V3DNavigation"), Z_Construct_UClass_UV3DNavigtion_Interface_NoRegister) \
	DECLARE_SERIALIZER(UV3DNavigtion_Interface)


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IV3DNavigtion_Interface() {} \
public: \
	typedef UV3DNavigtion_Interface UClassType; \
	typedef IV3DNavigtion_Interface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_10_PROLOG
#define FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UV3DNavigtion_Interface;

// ********** End Interface UV3DNavigtion_Interface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_V3DNavigation_HostProject_Plugins_V3DNavigation_Source_V3DNavigation_Public_V3DNavigtion_Interface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
