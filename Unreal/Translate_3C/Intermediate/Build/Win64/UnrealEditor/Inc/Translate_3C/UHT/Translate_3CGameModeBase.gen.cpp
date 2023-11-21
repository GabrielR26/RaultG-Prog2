// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/Translate_3CGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslate_3CGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ATranslate_3CGameModeBase();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ATranslate_3CGameModeBase_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UActorManager_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UManagerCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void ATranslate_3CGameModeBase::StaticRegisterNativesATranslate_3CGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATranslate_3CGameModeBase);
	UClass* Z_Construct_UClass_ATranslate_3CGameModeBase_NoRegister()
	{
		return ATranslate_3CGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATranslate_3CGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_managerCameraRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_managerCameraRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_managerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_managerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorManagerRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorManagerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_actorManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Translate_3CGameModeBase.h" },
		{ "ModuleRelativePath", "Translate_3CGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCameraRef_MetaData[] = {
		{ "Category", "Translate_3CGameModeBase" },
		{ "ModuleRelativePath", "Translate_3CGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCameraRef = { "managerCameraRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslate_3CGameModeBase, managerCameraRef), Z_Construct_UClass_UClass, Z_Construct_UClass_UManagerCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCameraRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCameraRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCamera_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Translate_3CGameModeBase" },
		{ "EditLine", "" },
		{ "ModuleRelativePath", "Translate_3CGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCamera = { "managerCamera", nullptr, (EPropertyFlags)0x0044000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslate_3CGameModeBase, managerCamera), Z_Construct_UClass_UManagerCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManagerRef_MetaData[] = {
		{ "Category", "Translate_3CGameModeBase" },
		{ "ModuleRelativePath", "Translate_3CGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManagerRef = { "actorManagerRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslate_3CGameModeBase, actorManagerRef), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManagerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManagerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManager_MetaData[] = {
		{ "Category", "Translate_3CGameModeBase" },
		{ "EditLine", "" },
		{ "ModuleRelativePath", "Translate_3CGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManager = { "actorManager", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslate_3CGameModeBase, actorManager), Z_Construct_UClass_UActorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCameraRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_managerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManagerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::NewProp_actorManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATranslate_3CGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::ClassParams = {
		&ATranslate_3CGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATranslate_3CGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATranslate_3CGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATranslate_3CGameModeBase.OuterSingleton, Z_Construct_UClass_ATranslate_3CGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATranslate_3CGameModeBase.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<ATranslate_3CGameModeBase>()
	{
		return ATranslate_3CGameModeBase::StaticClass();
	}
	ATranslate_3CGameModeBase::ATranslate_3CGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATranslate_3CGameModeBase);
	ATranslate_3CGameModeBase::~ATranslate_3CGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_Translate_3CGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_Translate_3CGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATranslate_3CGameModeBase, ATranslate_3CGameModeBase::StaticClass, TEXT("ATranslate_3CGameModeBase"), &Z_Registration_Info_UClass_ATranslate_3CGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATranslate_3CGameModeBase), 3819696159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_Translate_3CGameModeBase_h_308553797(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_Translate_3CGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_Translate_3CGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
