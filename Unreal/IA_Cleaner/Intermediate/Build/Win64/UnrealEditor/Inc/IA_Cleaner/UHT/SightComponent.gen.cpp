// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/SightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	IA_CLEANER_API UClass* Z_Construct_UClass_USightComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_USightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void USightComponent::StaticRegisterNativesUSightComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USightComponent);
	UClass* Z_Construct_UClass_USightComponent_NoRegister()
	{
		return USightComponent::StaticClass();
	}
	struct Z_Construct_UClass_USightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rangeSight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rangeSight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_angleSight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_angleSight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightSight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heightSight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_targetLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_targetLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetSight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_targetSight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SightComponent.h" },
		{ "ModuleRelativePath", "Public/SightComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightComponent_Statics::NewProp_rangeSight_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/SightComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USightComponent_Statics::NewProp_rangeSight = { "rangeSight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightComponent, rangeSight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::NewProp_rangeSight_MetaData), Z_Construct_UClass_USightComponent_Statics::NewProp_rangeSight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightComponent_Statics::NewProp_angleSight_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/SightComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USightComponent_Statics::NewProp_angleSight = { "angleSight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightComponent, angleSight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::NewProp_angleSight_MetaData), Z_Construct_UClass_USightComponent_Statics::NewProp_angleSight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightComponent_Statics::NewProp_heightSight_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/SightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightComponent_Statics::NewProp_heightSight = { "heightSight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightComponent, heightSight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::NewProp_heightSight_MetaData), Z_Construct_UClass_USightComponent_Statics::NewProp_heightSight_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers_Inner = { "targetLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/SightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers = { "targetLayers", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightComponent, targetLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers_MetaData), Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightComponent_Statics::NewProp_targetSight_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/SightComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USightComponent_Statics::NewProp_targetSight = { "targetSight", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightComponent, targetSight), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::NewProp_targetSight_MetaData), Z_Construct_UClass_USightComponent_Statics::NewProp_targetSight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightComponent_Statics::NewProp_rangeSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightComponent_Statics::NewProp_angleSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightComponent_Statics::NewProp_heightSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightComponent_Statics::NewProp_targetLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightComponent_Statics::NewProp_targetSight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USightComponent_Statics::ClassParams = {
		&USightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USightComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USightComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USightComponent()
	{
		if (!Z_Registration_Info_UClass_USightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USightComponent.OuterSingleton, Z_Construct_UClass_USightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USightComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<USightComponent>()
	{
		return USightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USightComponent);
	USightComponent::~USightComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_SightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_SightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USightComponent, USightComponent::StaticClass, TEXT("USightComponent"), &Z_Registration_Info_UClass_USightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USightComponent), 2786939785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_SightComponent_h_32181092(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_SightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_SightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
