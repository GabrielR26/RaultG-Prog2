// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/GuardGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuardGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardGameMode();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardGameMode_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPathManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void AGuardGameMode::StaticRegisterNativesAGuardGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGuardGameMode);
	UClass* Z_Construct_UClass_AGuardGameMode_NoRegister()
	{
		return AGuardGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGuardGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathManagerRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_pathManagerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_pathManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGuardGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Guard/GuardGameMode.h" },
		{ "ModuleRelativePath", "Public/Guard/GuardGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManagerRef_MetaData[] = {
		{ "Category", "GuardGameMode" },
		{ "ModuleRelativePath", "Public/Guard/GuardGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManagerRef = { "pathManagerRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuardGameMode, pathManagerRef), Z_Construct_UClass_UClass, Z_Construct_UClass_UPathManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManagerRef_MetaData), Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManagerRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManager_MetaData[] = {
		{ "Category", "GuardGameMode" },
		{ "ModuleRelativePath", "Public/Guard/GuardGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManager = { "pathManager", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuardGameMode, pathManager), Z_Construct_UClass_UPathManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManager_MetaData), Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGuardGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManagerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuardGameMode_Statics::NewProp_pathManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGuardGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGuardGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGuardGameMode_Statics::ClassParams = {
		&AGuardGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGuardGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGuardGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGuardGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGuardGameMode()
	{
		if (!Z_Registration_Info_UClass_AGuardGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGuardGameMode.OuterSingleton, Z_Construct_UClass_AGuardGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGuardGameMode.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<AGuardGameMode>()
	{
		return AGuardGameMode::StaticClass();
	}
	AGuardGameMode::AGuardGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGuardGameMode);
	AGuardGameMode::~AGuardGameMode() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGuardGameMode, AGuardGameMode::StaticClass, TEXT("AGuardGameMode"), &Z_Registration_Info_UClass_AGuardGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGuardGameMode), 2243833661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardGameMode_h_2970682672(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
