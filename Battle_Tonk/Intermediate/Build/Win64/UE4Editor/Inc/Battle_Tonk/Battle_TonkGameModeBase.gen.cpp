// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Battle_TonkGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattle_TonkGameModeBase() {}
// Cross Module References
	BATTLE_TONK_API UClass* Z_Construct_UClass_ABattle_TonkGameModeBase_NoRegister();
	BATTLE_TONK_API UClass* Z_Construct_UClass_ABattle_TonkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Battle_Tonk();
// End Cross Module References
	void ABattle_TonkGameModeBase::StaticRegisterNativesABattle_TonkGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattle_TonkGameModeBase_NoRegister()
	{
		return ABattle_TonkGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABattle_TonkGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Battle_Tonk,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Battle_TonkGameModeBase.h" },
				{ "ModuleRelativePath", "Battle_TonkGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABattle_TonkGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABattle_TonkGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattle_TonkGameModeBase, 2753442428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattle_TonkGameModeBase(Z_Construct_UClass_ABattle_TonkGameModeBase, &ABattle_TonkGameModeBase::StaticClass, TEXT("/Script/Battle_Tonk"), TEXT("ABattle_TonkGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattle_TonkGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
