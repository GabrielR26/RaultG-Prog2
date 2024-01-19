// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/CleanerBot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanerBot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACleanerBot();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACleanerBot_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSMComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UResearchComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_USpy_CleanerBot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void ACleanerBot::StaticRegisterNativesACleanerBot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACleanerBot);
	UClass* Z_Construct_UClass_ACleanerBot_NoRegister()
	{
		return ACleanerBot::StaticClass();
	}
	struct Z_Construct_UClass_ACleanerBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSMComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FSMComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_moveComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_researchComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_researchComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spyRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_spyRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_spy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACleanerBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CleanerBot.h" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACleanerBot_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACleanerBot, mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_ACleanerBot_Statics::NewProp_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::NewProp_FSMComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACleanerBot_Statics::NewProp_FSMComponent = { "FSMComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACleanerBot, FSMComponent), Z_Construct_UClass_UFSMComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::NewProp_FSMComponent_MetaData), Z_Construct_UClass_ACleanerBot_Statics::NewProp_FSMComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::NewProp_moveComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACleanerBot_Statics::NewProp_moveComponent = { "moveComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACleanerBot, moveComponent), Z_Construct_UClass_UMoveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::NewProp_moveComponent_MetaData), Z_Construct_UClass_ACleanerBot_Statics::NewProp_moveComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::NewProp_researchComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACleanerBot_Statics::NewProp_researchComponent = { "researchComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACleanerBot, researchComponent), Z_Construct_UClass_UResearchComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::NewProp_researchComponent_MetaData), Z_Construct_UClass_ACleanerBot_Statics::NewProp_researchComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::NewProp_spyRef_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACleanerBot_Statics::NewProp_spyRef = { "spyRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACleanerBot, spyRef), Z_Construct_UClass_UClass, Z_Construct_UClass_USpy_CleanerBot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::NewProp_spyRef_MetaData), Z_Construct_UClass_ACleanerBot_Statics::NewProp_spyRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanerBot_Statics::NewProp_spy_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/CleanerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACleanerBot_Statics::NewProp_spy = { "spy", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACleanerBot, spy), Z_Construct_UClass_USpy_CleanerBot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::NewProp_spy_MetaData), Z_Construct_UClass_ACleanerBot_Statics::NewProp_spy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACleanerBot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanerBot_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanerBot_Statics::NewProp_FSMComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanerBot_Statics::NewProp_moveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanerBot_Statics::NewProp_researchComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanerBot_Statics::NewProp_spyRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanerBot_Statics::NewProp_spy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACleanerBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACleanerBot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACleanerBot_Statics::ClassParams = {
		&ACleanerBot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACleanerBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::Class_MetaDataParams), Z_Construct_UClass_ACleanerBot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACleanerBot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACleanerBot()
	{
		if (!Z_Registration_Info_UClass_ACleanerBot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACleanerBot.OuterSingleton, Z_Construct_UClass_ACleanerBot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACleanerBot.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<ACleanerBot>()
	{
		return ACleanerBot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACleanerBot);
	ACleanerBot::~ACleanerBot() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACleanerBot, ACleanerBot::StaticClass, TEXT("ACleanerBot"), &Z_Registration_Info_UClass_ACleanerBot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACleanerBot), 3113552639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBot_h_128674874(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
