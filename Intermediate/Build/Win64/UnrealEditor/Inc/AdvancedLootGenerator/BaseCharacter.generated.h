// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseItem;
#ifdef ADVANCEDLOOTGENERATOR_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define ADVANCEDLOOTGENERATOR_BaseCharacter_generated_h

#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_SPARSE_DATA
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_RPC_WRAPPERS \
	virtual void EnableDisableOutlineClient_Implementation(bool Enable, ABaseItem* ItemRef); \
	virtual void EnableDisableOutline_Implementation(bool Enable, ABaseItem* ItemRef); \
 \
	DECLARE_FUNCTION(execEnableDisableOutlineClient); \
	DECLARE_FUNCTION(execEnableDisableOutline);


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EnableDisableOutlineClient_Implementation(bool Enable, ABaseItem* ItemRef); \
	virtual void EnableDisableOutline_Implementation(bool Enable, ABaseItem* ItemRef); \
 \
	DECLARE_FUNCTION(execEnableDisableOutlineClient); \
	DECLARE_FUNCTION(execEnableDisableOutline);


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_EVENT_PARMS \
	struct BaseCharacter_eventEnableDisableOutline_Parms \
	{ \
		bool Enable; \
		ABaseItem* ItemRef; \
	}; \
	struct BaseCharacter_eventEnableDisableOutlineClient_Parms \
	{ \
		bool Enable; \
		ABaseItem* ItemRef; \
	};


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedLootGenerator"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedLootGenerator"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_10_PROLOG \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_EVENT_PARMS


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_RPC_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_INCLASS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDLOOTGENERATOR_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
