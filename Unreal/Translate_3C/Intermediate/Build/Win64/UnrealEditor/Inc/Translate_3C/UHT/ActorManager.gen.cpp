// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/ActorManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UActorManagedComponent_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UActorManager();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UActorManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void UActorManager::StaticRegisterNativesUActorManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorManager);
	UClass* Z_Construct_UClass_UActorManager_NoRegister()
	{
		return UActorManager::StaticClass();
	}
	struct Z_Construct_UClass_UActorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorManager_Statics::NewProp_actors_ValueProp = { "actors", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UActorManagedComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorManager_Statics::NewProp_actors_Key_KeyProp = { "actors_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorManager_Statics::NewProp_actors_MetaData[] = {
		{ "Category", "ActorManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActorManager_Statics::NewProp_actors = { "actors", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorManager, actors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorManager_Statics::NewProp_actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorManager_Statics::NewProp_actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorManager_Statics::NewProp_actors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorManager_Statics::NewProp_actors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorManager_Statics::NewProp_actors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorManager_Statics::ClassParams = {
		&UActorManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorManager()
	{
		if (!Z_Registration_Info_UClass_UActorManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorManager.OuterSingleton, Z_Construct_UClass_UActorManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorManager.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UActorManager>()
	{
		return UActorManager::StaticClass();
	}
	UActorManager::UActorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorManager);
	UActorManager::~UActorManager() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorManager, UActorManager::StaticClass, TEXT("UActorManager"), &Z_Registration_Info_UClass_UActorManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorManager), 3407351428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManager_h_1813280225(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
