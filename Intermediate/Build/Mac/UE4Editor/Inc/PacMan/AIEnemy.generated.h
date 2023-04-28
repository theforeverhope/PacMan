// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_AIEnemy_generated_h
#error "AIEnemy.generated.h already included, missing '#pragma once' in AIEnemy.h"
#endif
#define PACMAN_AIEnemy_generated_h

#define PacMan_Source_PacMan_Public_AIEnemy_h_17_RPC_WRAPPERS
#define PacMan_Source_PacMan_Public_AIEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMan_Source_PacMan_Public_AIEnemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIEnemy(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_AAIEnemy(); \
public: \
	DECLARE_CLASS(AAIEnemy, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_AIEnemy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAIEnemy(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_AAIEnemy(); \
public: \
	DECLARE_CLASS(AAIEnemy, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_AIEnemy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIEnemy(AAIEnemy&&); \
	NO_API AAIEnemy(const AAIEnemy&); \
public:


#define PacMan_Source_PacMan_Public_AIEnemy_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIEnemy(AAIEnemy&&); \
	NO_API AAIEnemy(const AAIEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIEnemy)


#define PacMan_Source_PacMan_Public_AIEnemy_h_17_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_Public_AIEnemy_h_14_PROLOG
#define PacMan_Source_PacMan_Public_AIEnemy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_RPC_WRAPPERS \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_INCLASS \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_Public_AIEnemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_AIEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_Public_AIEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
