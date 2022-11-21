// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedLootGenerator/Public/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ABaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AdvancedLootGenerator();
	ADVANCEDLOOTGENERATOR_API UClass* Z_Construct_UClass_ABaseItem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseCharacter::execEnableDisableOutlineClient)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_GET_OBJECT(ABaseItem,Z_Param_ItemRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableDisableOutlineClient_Implementation(Z_Param_Enable,Z_Param_ItemRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execEnableDisableOutline)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_GET_OBJECT(ABaseItem,Z_Param_ItemRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableDisableOutline_Implementation(Z_Param_Enable,Z_Param_ItemRef);
		P_NATIVE_END;
	}
	static FName NAME_ABaseCharacter_EnableDisableOutline = FName(TEXT("EnableDisableOutline"));
	void ABaseCharacter::EnableDisableOutline(bool Enable, ABaseItem* ItemRef)
	{
		BaseCharacter_eventEnableDisableOutline_Parms Parms;
		Parms.Enable=Enable ? true : false;
		Parms.ItemRef=ItemRef;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_EnableDisableOutline),&Parms);
	}
	static FName NAME_ABaseCharacter_EnableDisableOutlineClient = FName(TEXT("EnableDisableOutlineClient"));
	void ABaseCharacter::EnableDisableOutlineClient(bool Enable, ABaseItem* ItemRef)
	{
		BaseCharacter_eventEnableDisableOutlineClient_Parms Parms;
		Parms.Enable=Enable ? true : false;
		Parms.ItemRef=ItemRef;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_EnableDisableOutlineClient),&Parms);
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableDisableOutline", &ABaseCharacter::execEnableDisableOutline },
			{ "EnableDisableOutlineClient", &ABaseCharacter::execEnableDisableOutlineClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((BaseCharacter_eventEnableDisableOutline_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseCharacter_eventEnableDisableOutline_Parms), &Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::NewProp_ItemRef = { "ItemRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacter_eventEnableDisableOutline_Parms, ItemRef), Z_Construct_UClass_ABaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::NewProp_Enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::NewProp_ItemRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function to Enable_DisableOutLine From Server\n" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Function to Enable_DisableOutLine From Server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "EnableDisableOutline", nullptr, nullptr, sizeof(BaseCharacter_eventEnableDisableOutline_Parms), Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((BaseCharacter_eventEnableDisableOutlineClient_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseCharacter_eventEnableDisableOutlineClient_Parms), &Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::NewProp_ItemRef = { "ItemRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacter_eventEnableDisableOutlineClient_Parms, ItemRef), Z_Construct_UClass_ABaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::NewProp_Enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::NewProp_ItemRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function to Enable_DisableOutLine From Client\n" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Function to Enable_DisableOutLine From Client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "EnableDisableOutlineClient", nullptr, nullptr, sizeof(BaseCharacter_eventEnableDisableOutlineClient_Parms), Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedLootGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_EnableDisableOutline, "EnableDisableOutline" }, // 1814845747
		{ &Z_Construct_UFunction_ABaseCharacter_EnableDisableOutlineClient, "EnableDisableOutlineClient" }, // 205353238
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
	}
	template<> ADVANCEDLOOTGENERATOR_API UClass* StaticClass<ABaseCharacter>()
	{
		return ABaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 4259835944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_1963779512(TEXT("/Script/AdvancedLootGenerator"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AdvancedLootGenerator_Source_AdvancedLootGenerator_Public_BaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
