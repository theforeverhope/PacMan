// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PACMAN_PacManCharacter_generated_h
#error "PacManCharacter.generated.h already included, missing '#pragma once' in PacManCharacter.h"
#endif
#define PACMAN_PacManCharacter_generated_h

#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OnterBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCollision(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OnterBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OnterBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCollision(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OnterBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacManCharacter(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_APacManCharacter(); \
public: \
	DECLARE_CLASS(APacManCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPacManCharacter(); \
	friend PACMAN_API class UClass* Z_Construct_UClass_APacManCharacter(); \
public: \
	DECLARE_CLASS(APacManCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManCharacter(APacManCharacter&&); \
	NO_API APacManCharacter(const APacManCharacter&); \
public:


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManCharacter(APacManCharacter&&); \
	NO_API APacManCharacter(const APacManCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacManCharacter)


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_Public_PacManCharacter_h_10_PROLOG
#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_RPC_WRAPPERS \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_INCLASS \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_Public_PacManCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_Public_PacManCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_Public_PacManCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
