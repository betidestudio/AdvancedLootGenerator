// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedLootGenerator/Public/LootPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootPoints() {}
// Cross Module References
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ALootPoints_NoRegister();
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ALootPoints();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvancedLootGenerator();
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ABaseItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ALootPoints::execSpawnActorSinglePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorSinglePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALootPoints::execSpawnActorReplicated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorReplicated_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ALootPoints_SpawnActorReplicated = FName(TEXT("SpawnActorReplicated"));
	void ALootPoints::SpawnActorReplicated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALootPoints_SpawnActorReplicated),NULL);
	}
	void ALootPoints::StaticRegisterNativesALootPoints()
	{
		UClass* Class = ALootPoints::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActorReplicated", &ALootPoints::execSpawnActorReplicated },
			{ "SpawnActorSinglePlayer", &ALootPoints::execSpawnActorSinglePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALootPoints_SpawnActorReplicated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALootPoints_SpawnActorReplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loot Functions" },
		{ "Comment", "//Spawn Actor for Multiplayer - Calls the SinglePlayer Function from the Server\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Spawn Actor for Multiplayer - Calls the SinglePlayer Function from the Server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALootPoints_SpawnActorReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALootPoints, nullptr, "SpawnActorReplicated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALootPoints_SpawnActorReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootPoints_SpawnActorReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALootPoints_SpawnActorReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALootPoints_SpawnActorReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loot Functions" },
		{ "Comment", "//Spawn Actor for SinglePlayer\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Spawn Actor for SinglePlayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALootPoints, nullptr, "SpawnActorSinglePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALootPoints);
	UClass* Z_Construct_UClass_ALootPoints_NoRegister()
	{
		return ALootPoints::StaticClass();
	}
	struct Z_Construct_UClass_ALootPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutline_MetaData[];
#endif
		static void NewProp_bUseOutline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnRequiredItems_MetaData[];
#endif
		static void NewProp_bSpawnRequiredItems_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnRequiredItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fNearbySpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fNearbySpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fMinRadiusToItem_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fMinRadiusToItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedItemReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedItemReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedReqItemReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedReqItemReference;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMultiplayerGame_MetaData[];
#endif
		static void NewProp_bIsMultiplayerGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMultiplayerGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedLootGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALootPoints_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALootPoints_SpawnActorReplicated, "SpawnActorReplicated" }, // 1658408972
		{ &Z_Construct_UFunction_ALootPoints_SpawnActorSinglePlayer, "SpawnActorSinglePlayer" }, // 1778599802
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootPoints.h" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Should the items show outline on overlap\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Should the items show outline on overlap" },
	};
#endif
	void Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline_SetBit(void* Obj)
	{
		((ALootPoints*)Obj)->bUseOutline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline = { "bUseOutline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALootPoints), &Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Should the items spawn required items like ammo near the item. For More Info, check the documentation\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Should the items spawn required items like ammo near the item. For More Info, check the documentation" },
	};
#endif
	void Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems_SetBit(void* Obj)
	{
		((ALootPoints*)Obj)->bSpawnRequiredItems = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems = { "bSpawnRequiredItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALootPoints), &Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_fNearbySpawnRadius_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Radius in which the nearby item can spawn\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Radius in which the nearby item can spawn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_fNearbySpawnRadius = { "fNearbySpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootPoints, fNearbySpawnRadius), METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_fNearbySpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_fNearbySpawnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_fMinRadiusToItem_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Minimum Radius the Nearby Item can spawn\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Minimum Radius the Nearby Item can spawn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_fMinRadiusToItem = { "fMinRadiusToItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootPoints, fMinRadiusToItem), METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_fMinRadiusToItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_fMinRadiusToItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedItemReference_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Reference of Item spawned for this Loot Position\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Reference of Item spawned for this Loot Position" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedItemReference = { "SpawnedItemReference", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootPoints, SpawnedItemReference), Z_Construct_UClass_ABaseItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedItemReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedItemReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedReqItemReference_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Reference of Required Item spawned for this Loot Position\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Reference of Required Item spawned for this Loot Position" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedReqItemReference = { "SpawnedReqItemReference", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootPoints, SpawnedReqItemReference), Z_Construct_UClass_ABaseItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedReqItemReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedReqItemReference_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray_Inner = { "ItemArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Items to Spawn - Base class of the item should be BaseItem\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Items to Spawn - Base class of the item should be BaseItem" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray = { "ItemArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootPoints, ItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Is the Spawning Replicated or just Singleplayer\n" },
		{ "ModuleRelativePath", "Public/LootPoints.h" },
		{ "ToolTip", "Is the Spawning Replicated or just Singleplayer" },
	};
#endif
	void Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame_SetBit(void* Obj)
	{
		((ALootPoints*)Obj)->bIsMultiplayerGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame = { "bIsMultiplayerGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALootPoints), &Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_bUseOutline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_bSpawnRequiredItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_fNearbySpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_fMinRadiusToItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedItemReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_SpawnedReqItemReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_ItemArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootPoints_Statics::NewProp_bIsMultiplayerGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootPoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALootPoints_Statics::ClassParams = {
		&ALootPoints::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALootPoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALootPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALootPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootPoints()
	{
		if (!Z_Registration_Info_UClass_ALootPoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALootPoints.OuterSingleton, Z_Construct_UClass_ALootPoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALootPoints.OuterSingleton;
	}
	template<> ADVANCEDLOOTGENERATOR_API UClass* StaticClass<ALootPoints>()
	{
		return ALootPoints::StaticClass();
	}

	void ALootPoints::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SpawnedItemReference(TEXT("SpawnedItemReference"));
		static const FName Name_SpawnedReqItemReference(TEXT("SpawnedReqItemReference"));

		const bool bIsValid = true
			&& Name_SpawnedItemReference == ClassReps[(int32)ENetFields_Private::SpawnedItemReference].Property->GetFName()
			&& Name_SpawnedReqItemReference == ClassReps[(int32)ENetFields_Private::SpawnedReqItemReference].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALootPoints"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootPoints);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALootPoints, ALootPoints::StaticClass, TEXT("ALootPoints"), &Z_Registration_Info_UClass_ALootPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALootPoints), 740070885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_3360145540(TEXT("/Script/AdvancedLootGenerator"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_LootPoints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
