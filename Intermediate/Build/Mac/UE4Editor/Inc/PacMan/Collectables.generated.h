// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_Collectables_generated_h
#error "Collectables.generated.h already included, missing '#pragma once' in Collectables.h"
#endif
#define PACMAN_Collectables_generated_h

#define PacMan_Source_PacMan_Public_Collectables_h_14_RPC_WRAPPERS
#define PacMan_Source_PacMan_Public_Collectables_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMan_Source_PacMan_Public_Collectables_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectables(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_ACollectables(); \
public: \
	DECLARE_CLASS(ACollectables, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(ACollectables) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_Collectables_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACollectables(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_ACollectables(); \
public: \
	DECLARE_CLASS(ACollectables, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(ACollectables) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_Collectables_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectables(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectables) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectables); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectables); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectables(ACollectables&&); \
	NO_API ACollectables(const ACollectables&); \
public:


#define PacMan_Source_PacMan_Public_Collectables_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectables(ACollectables&&); \
	NO_API ACollectables(const ACollectables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectables); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectables); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectables)


#define PacMan_Source_PacMan_Public_Collectables_h_14_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_Public_Collectables_h_11_PROLOG
#define PacMan_Source_PacMan_Public_Collectables_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_Collectables_h_14_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_Collectables_h_14_RPC_WRAPPERS \
	PacMan_Source_PacMan_Public_Collectables_h_14_INCLASS \
	PacMan_Source_PacMan_Public_Collectables_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_Public_Collectables_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_Collectables_h_14_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_Collectables_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_Collectables_h_14_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_Collectables_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_Public_Collectables_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
