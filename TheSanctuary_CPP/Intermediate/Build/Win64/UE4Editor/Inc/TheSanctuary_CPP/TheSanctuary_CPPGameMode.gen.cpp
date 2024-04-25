// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSanctuary_CPP/TheSanctuary_CPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheSanctuary_CPPGameMode() {}
// Cross Module References
	THESANCTUARY_CPP_API UClass* Z_Construct_UClass_ATheSanctuary_CPPGameMode_NoRegister();
	THESANCTUARY_CPP_API UClass* Z_Construct_UClass_ATheSanctuary_CPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheSanctuary_CPP();
// End Cross Module References
	void ATheSanctuary_CPPGameMode::StaticRegisterNativesATheSanctuary_CPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATheSanctuary_CPPGameMode_NoRegister()
	{
		return ATheSanctuary_CPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSanctuary_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheSanctuary_CPPGameMode.h" },
		{ "ModuleRelativePath", "TheSanctuary_CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheSanctuary_CPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::ClassParams = {
		&ATheSanctuary_CPPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheSanctuary_CPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheSanctuary_CPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheSanctuary_CPPGameMode, 3472100894);
	template<> THESANCTUARY_CPP_API UClass* StaticClass<ATheSanctuary_CPPGameMode>()
	{
		return ATheSanctuary_CPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheSanctuary_CPPGameMode(Z_Construct_UClass_ATheSanctuary_CPPGameMode, &ATheSanctuary_CPPGameMode::StaticClass, TEXT("/Script/TheSanctuary_CPP"), TEXT("ATheSanctuary_CPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheSanctuary_CPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
