// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/ResearchComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResearchComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	IA_CLEANER_API UClass* Z_Construct_UClass_ATrash_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UResearchComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UResearchComponent_NoRegister();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResearchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResearchComponent, nullptr, "OnFindTrash__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UResearchComponent::FOnFindTrash_DelegateWrapper(const FMulticastScriptDelegate& OnFindTrash)
{
	OnFindTrash.ProcessMulticastDelegate<UObject>(NULL);
}
	void UResearchComponent::StaticRegisterNativesUResearchComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResearchComponent);
	UClass* Z_Construct_UClass_UResearchComponent_NoRegister()
	{
		return UResearchComponent::StaticClass();
	}
	struct Z_Construct_UClass_UResearchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_viewDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_viewAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_layersObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_layersObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_layersObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentTrash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_currentTrash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResearchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UResearchComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UResearchComponent_OnFindTrash__DelegateSignature, "OnFindTrash__DelegateSignature" }, // 505897495
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResearchComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ResearchComponent.h" },
		{ "ModuleRelativePath", "Public/ResearchComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewDistance_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/ResearchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewDistance = { "viewDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResearchComponent, viewDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewDistance_MetaData), Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewAngle_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/ResearchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewAngle = { "viewAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResearchComponent, viewAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewAngle_MetaData), Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewAngle_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects_Inner = { "layersObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/ResearchComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects = { "layersObjects", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResearchComponent, layersObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects_MetaData), Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResearchComponent_Statics::NewProp_currentTrash_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/ResearchComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UResearchComponent_Statics::NewProp_currentTrash = { "currentTrash", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResearchComponent, currentTrash), Z_Construct_UClass_ATrash_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::NewProp_currentTrash_MetaData), Z_Construct_UClass_UResearchComponent_Statics::NewProp_currentTrash_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResearchComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResearchComponent_Statics::NewProp_viewAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResearchComponent_Statics::NewProp_layersObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResearchComponent_Statics::NewProp_currentTrash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResearchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResearchComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResearchComponent_Statics::ClassParams = {
		&UResearchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UResearchComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UResearchComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResearchComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UResearchComponent()
	{
		if (!Z_Registration_Info_UClass_UResearchComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResearchComponent.OuterSingleton, Z_Construct_UClass_UResearchComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResearchComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UResearchComponent>()
	{
		return UResearchComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResearchComponent);
	UResearchComponent::~UResearchComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_ResearchComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_ResearchComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResearchComponent, UResearchComponent::StaticClass, TEXT("UResearchComponent"), &Z_Registration_Info_UClass_UResearchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResearchComponent), 1201980561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_ResearchComponent_h_622531926(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_ResearchComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_ResearchComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
