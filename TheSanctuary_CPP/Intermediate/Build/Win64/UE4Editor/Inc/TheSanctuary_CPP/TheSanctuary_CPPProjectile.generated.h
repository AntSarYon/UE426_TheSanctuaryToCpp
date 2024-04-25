// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THESANCTUARY_CPP_TheSanctuary_CPPProjectile_generated_h
#error "TheSanctuary_CPPProjectile.generated.h already included, missing '#pragma once' in TheSanctuary_CPPProjectile.h"
#endif
#define THESANCTUARY_CPP_TheSanctuary_CPPProjectile_generated_h

#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_SPARSE_DATA
#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheSanctuary_CPPProjectile(); \
	friend struct Z_Construct_UClass_ATheSanctuary_CPPProjectile_Statics; \
public: \
	DECLARE_CLASS(ATheSanctuary_CPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSanctuary_CPP"), NO_API) \
	DECLARE_SERIALIZER(ATheSanctuary_CPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATheSanctuary_CPPProjectile(); \
	friend struct Z_Construct_UClass_ATheSanctuary_CPPProjectile_Statics; \
public: \
	DECLARE_CLASS(ATheSanctuary_CPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSanctuary_CPP"), NO_API) \
	DECLARE_SERIALIZER(ATheSanctuary_CPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheSanctuary_CPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheSanctuary_CPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheSanctuary_CPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheSanctuary_CPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheSanctuary_CPPProjectile(ATheSanctuary_CPPProjectile&&); \
	NO_API ATheSanctuary_CPPProjectile(const ATheSanctuary_CPPProjectile&); \
public:


#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheSanctuary_CPPProjectile(ATheSanctuary_CPPProjectile&&); \
	NO_API ATheSanctuary_CPPProjectile(const ATheSanctuary_CPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheSanctuary_CPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheSanctuary_CPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheSanctuary_CPPProjectile)


#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATheSanctuary_CPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATheSanctuary_CPPProjectile, ProjectileMovement); }


#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_12_PROLOG
#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_SPARSE_DATA \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_RPC_WRAPPERS \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_INCLASS \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_SPARSE_DATA \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
	TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THESANCTUARY_CPP_API UClass* StaticClass<class ATheSanctuary_CPPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheSanctuary_CPP_Source_TheSanctuary_CPP_TheSanctuary_CPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
