// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Spy_CleanerBot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpy_CleanerBot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACleanerBot_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_USpy_CleanerBot();
	IA_CLEANER_API UClass* Z_Construct_UClass_USpy_CleanerBot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(USpy_CleanerBot::execAddTrashFind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTrashFind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpy_CleanerBot::execAddAttemptToFindTrash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttemptToFindTrash();
		P_NATIVE_END;
	}
	void USpy_CleanerBot::StaticRegisterNativesUSpy_CleanerBot()
	{
		UClass* Class = USpy_CleanerBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttemptToFindTrash", &USpy_CleanerBot::execAddAttemptToFindTrash },
			{ "AddTrashFind", &USpy_CleanerBot::execAddTrashFind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spy_CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpy_CleanerBot, nullptr, "AddAttemptToFindTrash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spy_CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpy_CleanerBot, nullptr, "AddTrashFind", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpy_CleanerBot);
	UClass* Z_Construct_UClass_USpy_CleanerBot_NoRegister()
	{
		return USpy_CleanerBot::StaticClass();
	}
	struct Z_Construct_UClass_USpy_CleanerBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cleanerBot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cleanerBot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minEfficiency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minEfficiency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpy_CleanerBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpy_CleanerBot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpy_CleanerBot_AddAttemptToFindTrash, "AddAttemptToFindTrash" }, // 1644886443
		{ &Z_Construct_UFunction_USpy_CleanerBot_AddTrashFind, "AddTrashFind" }, // 3040810351
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpy_CleanerBot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Spy_CleanerBot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Spy_CleanerBot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_cleanerBot_MetaData[] = {
		{ "Category", "Spy_CleanerBot" },
		{ "ModuleRelativePath", "Public/Spy_CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_cleanerBot = { "cleanerBot", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpy_CleanerBot, cleanerBot), Z_Construct_UClass_ACleanerBot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_cleanerBot_MetaData), Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_cleanerBot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_minEfficiency_MetaData[] = {
		{ "Category", "Spy_CleanerBot" },
		{ "ModuleRelativePath", "Public/Spy_CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_minEfficiency = { "minEfficiency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpy_CleanerBot, minEfficiency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_minEfficiency_MetaData), Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_minEfficiency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpy_CleanerBot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_cleanerBot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpy_CleanerBot_Statics::NewProp_minEfficiency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpy_CleanerBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpy_CleanerBot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpy_CleanerBot_Statics::ClassParams = {
		&USpy_CleanerBot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpy_CleanerBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::Class_MetaDataParams), Z_Construct_UClass_USpy_CleanerBot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpy_CleanerBot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpy_CleanerBot()
	{
		if (!Z_Registration_Info_UClass_USpy_CleanerBot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpy_CleanerBot.OuterSingleton, Z_Construct_UClass_USpy_CleanerBot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpy_CleanerBot.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<USpy_CleanerBot>()
	{
		return USpy_CleanerBot::StaticClass();
	}
	USpy_CleanerBot::USpy_CleanerBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpy_CleanerBot);
	USpy_CleanerBot::~USpy_CleanerBot() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Spy_CleanerBot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Spy_CleanerBot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpy_CleanerBot, USpy_CleanerBot::StaticClass, TEXT("USpy_CleanerBot"), &Z_Registration_Info_UClass_USpy_CleanerBot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpy_CleanerBot), 2680616847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Spy_CleanerBot_h_2009573046(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Spy_CleanerBot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Spy_CleanerBot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
