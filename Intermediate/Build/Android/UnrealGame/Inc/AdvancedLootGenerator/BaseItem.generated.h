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
struct FHitResult;
#ifdef ADVANCEDLOOTGENERATOR_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define ADVANCEDLOOTGENERATOR_BaseItem_generated_h

#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_SPARSE_DATA
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_RPC_WRAPPERS \
	virtual void FindFloorServerMultiplayer_Implementation(); \
 \
	DECLARE_FUNCTION(execActorEndOverlapSinglePlayer); \
	DECLARE_FUNCTION(execActorBeginOverlapSinglePlayer); \
	DECLARE_FUNCTION(execFindFloorServerSingleplayer); \
	DECLARE_FUNCTION(execFindFloorServerMultiplayer);


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FindFloorServerMultiplayer_Implementation(); \
 \
	DECLARE_FUNCTION(execActorEndOverlapSinglePlayer); \
	DECLARE_FUNCTION(execActorBeginOverlapSinglePlayer); \
	DECLARE_FUNCTION(execFindFloorServerSingleplayer); \
	DECLARE_FUNCTION(execFindFloorServerMultiplayer);


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_EVENT_PARMS
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedLootGenerator"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedLootGenerator"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public:


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_10_PROLOG \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_EVENT_PARMS


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_RPC_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_INCLASS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDLOOTGENERATOR_API UClass* StaticClass<class ABaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
