// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OSTRICHONE_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define OSTRICHONE_TestActor_generated_h

#define OstrichOne_Source_OstrichOne_TestActor_h_12_RPC_WRAPPERS
#define OstrichOne_Source_OstrichOne_TestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define OstrichOne_Source_OstrichOne_TestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend OSTRICHONE_API class UClass* Z_Construct_UClass_ATestActor(); \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OstrichOne"), NO_API) \
	DECLARE_SERIALIZER(ATestActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OstrichOne_Source_OstrichOne_TestActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend OSTRICHONE_API class UClass* Z_Construct_UClass_ATestActor(); \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OstrichOne"), NO_API) \
	DECLARE_SERIALIZER(ATestActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OstrichOne_Source_OstrichOne_TestActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActor(ATestActor&&); \
	NO_API ATestActor(const ATestActor&); \
public:


#define OstrichOne_Source_OstrichOne_TestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActor(ATestActor&&); \
	NO_API ATestActor(const ATestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor)


#define OstrichOne_Source_OstrichOne_TestActor_h_12_PRIVATE_PROPERTY_OFFSET
#define OstrichOne_Source_OstrichOne_TestActor_h_9_PROLOG
#define OstrichOne_Source_OstrichOne_TestActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OstrichOne_Source_OstrichOne_TestActor_h_12_PRIVATE_PROPERTY_OFFSET \
	OstrichOne_Source_OstrichOne_TestActor_h_12_RPC_WRAPPERS \
	OstrichOne_Source_OstrichOne_TestActor_h_12_INCLASS \
	OstrichOne_Source_OstrichOne_TestActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OstrichOne_Source_OstrichOne_TestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OstrichOne_Source_OstrichOne_TestActor_h_12_PRIVATE_PROPERTY_OFFSET \
	OstrichOne_Source_OstrichOne_TestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OstrichOne_Source_OstrichOne_TestActor_h_12_INCLASS_NO_PURE_DECLS \
	OstrichOne_Source_OstrichOne_TestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OstrichOne_Source_OstrichOne_TestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
