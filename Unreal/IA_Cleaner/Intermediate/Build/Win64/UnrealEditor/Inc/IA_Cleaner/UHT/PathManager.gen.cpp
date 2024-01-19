// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/PathManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardPath_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPathManager();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPathManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UPathManager::StaticRegisterNativesUPathManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathManager);
	UClass* Z_Construct_UClass_UPathManager_NoRegister()
	{
		return UPathManager::StaticClass();
	}
	struct Z_Construct_UClass_UPathManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_paths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_paths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/PathManager.h" },
		{ "ModuleRelativePath", "Public/Guard/PathManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathManager_Statics::NewProp_paths_Inner = { "paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGuardPath_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathManager_Statics::NewProp_paths_MetaData[] = {
		{ "Category", "PathManager" },
		{ "ModuleRelativePath", "Public/Guard/PathManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathManager_Statics::NewProp_paths = { "paths", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathManager, paths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathManager_Statics::NewProp_paths_MetaData), Z_Construct_UClass_UPathManager_Statics::NewProp_paths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathManager_Statics::NewProp_paths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathManager_Statics::NewProp_paths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathManager_Statics::ClassParams = {
		&UPathManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPathManager()
	{
		if (!Z_Registration_Info_UClass_UPathManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathManager.OuterSingleton, Z_Construct_UClass_UPathManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathManager.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UPathManager>()
	{
		return UPathManager::StaticClass();
	}
	UPathManager::UPathManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathManager);
	UPathManager::~UPathManager() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PathManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PathManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPathManager, UPathManager::StaticClass, TEXT("UPathManager"), &Z_Registration_Info_UClass_UPathManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathManager), 1252494082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PathManager_h_53677470(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PathManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PathManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
