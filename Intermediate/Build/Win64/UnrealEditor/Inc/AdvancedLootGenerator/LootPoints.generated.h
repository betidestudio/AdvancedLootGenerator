// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDLOOTGENERATOR_LootPoints_generated_h
#error "LootPoints.generated.h already included, missing '#pragma once' in LootPoints.h"
#endif
#define ADVANCEDLOOTGENERATOR_LootPoints_generated_h

#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_RPC_WRAPPERS \
	virtual void SpawnActorReplicated_Implementation(); \
 \
	DECLARE_FUNCTION(execSpawnActorSinglePlayer); \
	DECLARE_FUNCTION(execSpawnActorReplicated);


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnActorReplicated_Implementation(); \
 \
	DECLARE_FUNCTION(execSpawnActorSinglePlayer); \
	DECLARE_FUNCTION(execSpawnActorReplicated);


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_EVENT_PARMS
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootPoints(); \
	friend struct Z_Construct_UClass_ALootPoints_Statics; \
public: \
	DECLARE_CLASS(ALootPoints, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedLootGenerator"), NO_API) \
	DECLARE_SERIALIZER(ALootPoints) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnedItemReference=NETFIELD_REP_START, \
		SpawnedReqItemReference, \
		NETFIELD_REP_END=SpawnedReqItemReference	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALootPoints(); \
	friend struct Z_Construct_UClass_ALootPoints_Statics; \
public: \
	DECLARE_CLASS(ALootPoints, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedLootGenerator"), NO_API) \
	DECLARE_SERIALIZER(ALootPoints) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnedItemReference=NETFIELD_REP_START, \
		SpawnedReqItemReference, \
		NETFIELD_REP_END=SpawnedReqItemReference	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALootPoints(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALootPoints) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootPoints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootPoints); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootPoints(ALootPoints&&); \
	NO_API ALootPoints(const ALootPoints&); \
public:


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootPoints(ALootPoints&&); \
	NO_API ALootPoints(const ALootPoints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootPoints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootPoints); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALootPoints)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_11_PROLOG \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_EVENT_PARMS


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_INCLASS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDLOOTGENERATOR_API UClass* StaticClass<class ALootPoints>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
