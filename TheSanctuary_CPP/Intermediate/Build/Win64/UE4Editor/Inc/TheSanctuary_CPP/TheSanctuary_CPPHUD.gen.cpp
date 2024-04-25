// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSanctuary_CPP/TheSanctuary_CPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheSanctuary_CPPHUD() {}
// Cross Module References
	THESANCTUARY_CPP_API UClass* Z_Construct_UClass_ATheSanctuary_CPPHUD_NoRegister();
	THESANCTUARY_CPP_API UClass* Z_Construct_UClass_ATheSanctuary_CPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TheSanctuary_CPP();
// End Cross Module References
	void ATheSanctuary_CPPHUD::StaticRegisterNativesATheSanctuary_CPPHUD()
	{
	}
	UClass* Z_Construct_UClass_ATheSanctuary_CPPHUD_NoRegister()
	{
		return ATheSanctuary_CPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSanctuary_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TheSanctuary_CPPHUD.h" },
		{ "ModuleRelativePath", "TheSanctuary_CPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheSanctuary_CPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::ClassParams = {
		&ATheSanctuary_CPPHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheSanctuary_CPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheSanctuary_CPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheSanctuary_CPPHUD, 472118880);
	template<> THESANCTUARY_CPP_API UClass* StaticClass<ATheSanctuary_CPPHUD>()
	{
		return ATheSanctuary_CPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheSanctuary_CPPHUD(Z_Construct_UClass_ATheSanctuary_CPPHUD, &ATheSanctuary_CPPHUD::StaticClass, TEXT("/Script/TheSanctuary_CPP"), TEXT("ATheSanctuary_CPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheSanctuary_CPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
