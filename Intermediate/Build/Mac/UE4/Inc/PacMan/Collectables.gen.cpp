// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Collectables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectables() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_ACollectables_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_ACollectables();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PacMan();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACollectables::StaticRegisterNativesACollectables()
	{
	}
	UClass* Z_Construct_UClass_ACollectables_NoRegister()
	{
		return ACollectables::StaticClass();
	}
	UClass* Z_Construct_UClass_ACollectables()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_PacMan,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Collectables.h" },
				{ "ModuleRelativePath", "Public/Collectables.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSuperCollectable_MetaData[] = {
				{ "Category", "Collectable" },
				{ "ModuleRelativePath", "Public/Collectables.h" },
				{ "ToolTip", "EditDefaultsOnly \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe5\x8f\xaf\xe7\xbc\x96\xe8\xbe\x91\xe5\x8e\x9f\xe5\x9e\x8b\xe4\xb8\x8e\xe5\xae\x9e\xe4\xbe\x8b" },
			};
#endif
			auto NewProp_bIsSuperCollectable_SetBit = [](void* Obj){ ((ACollectables*)Obj)->bIsSuperCollectable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuperCollectable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSuperCollectable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ACollectables), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSuperCollectable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSuperCollectable_MetaData, ARRAY_COUNT(NewProp_bIsSuperCollectable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCollisionComponent_MetaData[] = {
				{ "Category", "Collectable" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Collectables.h" },
				{ "ToolTip", "EditDefaultsOnly \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe5\x8f\xaf\xe7\xbc\x96\xe8\xbe\x91\xe5\x8e\x9f\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseCollisionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BaseCollisionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000090009, 1, nullptr, STRUCT_OFFSET(ACollectables, BaseCollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_BaseCollisionComponent_MetaData, ARRAY_COUNT(NewProp_BaseCollisionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectableMesh_MetaData[] = {
				{ "Category", "Collectable" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Collectables.h" },
				{ "ToolTip", "Category \xe5\x88\x86\xe5\x88\xb0 Collectable\xe7\xb1\xbb \xe9\x87\x8c\nVisibleAnywhere \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe5\x8f\xaf\xe7\x9c\x8b\xe5\x88\xb0" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectableMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CollectableMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ACollectables, CollectableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_CollectableMesh_MetaData, ARRAY_COUNT(NewProp_CollectableMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSuperCollectable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseCollisionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollectableMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACollectables>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACollectables::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectables, 2134069968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectables(Z_Construct_UClass_ACollectables, &ACollectables::StaticClass, TEXT("/Script/PacMan"), TEXT("ACollectables"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectables);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
