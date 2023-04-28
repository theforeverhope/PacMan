// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PacManHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacManHUD() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacManHUD_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacManHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PacMan();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void APacManHUD::StaticRegisterNativesAPacManHUD()
	{
	}
	UClass* Z_Construct_UClass_APacManHUD_NoRegister()
	{
		return APacManHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APacManHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_PacMan,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "PacManHUD.h" },
				{ "ModuleRelativePath", "Public/PacManHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[] = {
				{ "Category", "HUDFont" },
				{ "ModuleRelativePath", "Public/PacManHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont = { UE4CodeGen_Private::EPropertyClass::Object, "HUDFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APacManHUD, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(NewProp_HUDFont_MetaData, ARRAY_COUNT(NewProp_HUDFont_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDFont,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APacManHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APacManHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacManHUD, 4174744419);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacManHUD(Z_Construct_UClass_APacManHUD, &APacManHUD::StaticClass, TEXT("/Script/PacMan"), TEXT("APacManHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacManHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
