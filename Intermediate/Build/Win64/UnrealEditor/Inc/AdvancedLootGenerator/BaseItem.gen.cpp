// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedLootGenerator/Public/BaseItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem() {}
// Cross Module References
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ABaseItem_NoRegister();
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ABaseItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvancedLootGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseItem::execActorEndOverlapSinglePlayer)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorEndOverlapSinglePlayer(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseItem::execActorBeginOverlapSinglePlayer)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorBeginOverlapSinglePlayer(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseItem::execFindFloorServerSingleplayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindFloorServerSingleplayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseItem::execFindFloorServerMultiplayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindFloorServerMultiplayer_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABaseItem_FindFloorServerMultiplayer = FName(TEXT("FindFloorServerMultiplayer"));
	void ABaseItem::FindFloorServerMultiplayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseItem_FindFloorServerMultiplayer),NULL);
	}
	void ABaseItem::StaticRegisterNativesABaseItem()
	{
		UClass* Class = ABaseItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorBeginOverlapSinglePlayer", &ABaseItem::execActorBeginOverlapSinglePlayer },
			{ "ActorEndOverlapSinglePlayer", &ABaseItem::execActorEndOverlapSinglePlayer },
			{ "FindFloorServerMultiplayer", &ABaseItem::execFindFloorServerMultiplayer },
			{ "FindFloorServerSingleplayer", &ABaseItem::execFindFloorServerSingleplayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics
	{
		struct BaseItem_eventActorBeginOverlapSinglePlayer_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorBeginOverlapSinglePlayer_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorBeginOverlapSinglePlayer_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorBeginOverlapSinglePlayer_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorBeginOverlapSinglePlayer_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseItem_eventActorBeginOverlapSinglePlayer_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseItem_eventActorBeginOverlapSinglePlayer_Parms), &Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorBeginOverlapSinglePlayer_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "ActorBeginOverlapSinglePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::BaseItem_eventActorBeginOverlapSinglePlayer_Parms), Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics
	{
		struct BaseItem_eventActorEndOverlapSinglePlayer_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorEndOverlapSinglePlayer_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorEndOverlapSinglePlayer_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorEndOverlapSinglePlayer_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventActorEndOverlapSinglePlayer_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "ActorEndOverlapSinglePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::BaseItem_eventActorEndOverlapSinglePlayer_Parms), Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "FindFloorServerMultiplayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "FindFloorServerSingleplayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseItem);
	UClass* Z_Construct_UClass_ABaseItem_NoRegister()
	{
		return ABaseItem::StaticClass();
	}
	struct Z_Construct_UClass_ABaseItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseNearbyItem_MetaData[];
#endif
		static void NewProp_UseNearbyItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNearbyItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPossibilityForNearbyItems_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnPossibilityForNearbyItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSpawnNearbyItem_MetaData[];
#endif
		static void NewProp_bAlwaysSpawnNearbyItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSpawnNearbyItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiplayerGame_MetaData[];
#endif
		static void NewProp_bMultiplayerGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiplayerGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAboveGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAboveGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyItem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NearbyItem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannelProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannelProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceChannelProperty;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedLootGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseItem_ActorBeginOverlapSinglePlayer, "ActorBeginOverlapSinglePlayer" }, // 2218912034
		{ &Z_Construct_UFunction_ABaseItem_ActorEndOverlapSinglePlayer, "ActorEndOverlapSinglePlayer" }, // 2768883495
		{ &Z_Construct_UFunction_ABaseItem_FindFloorServerMultiplayer, "FindFloorServerMultiplayer" }, // 1274389087
		{ &Z_Construct_UFunction_ABaseItem_FindFloorServerSingleplayer, "FindFloorServerSingleplayer" }, // 2971671727
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseItem.h" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Should the items spawn required items like ammo near the item. For More Info, check the documentation\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Should the items spawn required items like ammo near the item. For More Info, check the documentation" },
	};
#endif
	void Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem_SetBit(void* Obj)
	{
		((ABaseItem*)Obj)->UseNearbyItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem = { "UseNearbyItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseItem), &Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_SpawnPossibilityForNearbyItems_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Should the items spawn required items like ammo near the item. For More Info, check the documentation\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Should the items spawn required items like ammo near the item. For More Info, check the documentation" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_SpawnPossibilityForNearbyItems = { "SpawnPossibilityForNearbyItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, SpawnPossibilityForNearbyItems), METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_SpawnPossibilityForNearbyItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_SpawnPossibilityForNearbyItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Should the required items always spawn near the item. For More Info, check the documentation\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Should the required items always spawn near the item. For More Info, check the documentation" },
	};
#endif
	void Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem_SetBit(void* Obj)
	{
		((ABaseItem*)Obj)->bAlwaysSpawnNearbyItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem = { "bAlwaysSpawnNearbyItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseItem), &Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Is the game Multiplayer\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Is the game Multiplayer" },
	};
#endif
	void Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame_SetBit(void* Obj)
	{
		((ABaseItem*)Obj)->bMultiplayerGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame = { "bMultiplayerGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseItem), &Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_DistanceAboveGround_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//Item above ground\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Item above ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_DistanceAboveGround = { "DistanceAboveGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, DistanceAboveGround), METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_DistanceAboveGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_DistanceAboveGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_NearbyItem_MetaData[] = {
		{ "Category", "Loot Settings" },
		{ "Comment", "//The nearby items to spawn near this weapon like Ammo for a weapon.\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "The nearby items to spawn near this weapon like Ammo for a weapon." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_NearbyItem = { "NearbyItem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, NearbyItem), Z_Construct_UClass_ABaseItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_NearbyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_NearbyItem_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty_Inner = { "TraceChannelProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//Trace Channel Property for hiting ground\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Trace Channel Property for hiting ground" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty = { "TraceChannelProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, TraceChannelProperty), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//Actos To Ignore for hiting ground\n" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ToolTip", "Actos To Ignore for hiting ground" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseItem, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_UseNearbyItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_SpawnPossibilityForNearbyItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_bAlwaysSpawnNearbyItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_bMultiplayerGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_DistanceAboveGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_NearbyItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_TraceChannelProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseItem_Statics::ClassParams = {
		&ABaseItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseItem()
	{
		if (!Z_Registration_Info_UClass_ABaseItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseItem.OuterSingleton, Z_Construct_UClass_ABaseItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseItem.OuterSingleton;
	}
	template<> ADVANCEDLOOTGENERATOR_API UClass* StaticClass<ABaseItem>()
	{
		return ABaseItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseItem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseItem, ABaseItem::StaticClass, TEXT("ABaseItem"), &Z_Registration_Info_UClass_ABaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseItem), 2154130726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_19338189(TEXT("/Script/AdvancedLootGenerator"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
