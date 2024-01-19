// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/GuardSightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuardSightComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	IA_CLEANER_API UClass* Z_Construct_UClass_UGuardSightComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UGuardSightComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_USightComponent();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics
	{
		struct GuardSightComponent_eventOnPlayerInSight_Parms
		{
			bool _isPlayerInSight;
		};
		static void NewProp__isPlayerInSight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__isPlayerInSight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::NewProp__isPlayerInSight_SetBit(void* Obj)
	{
		((GuardSightComponent_eventOnPlayerInSight_Parms*)Obj)->_isPlayerInSight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::NewProp__isPlayerInSight = { "_isPlayerInSight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GuardSightComponent_eventOnPlayerInSight_Parms), &Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::NewProp__isPlayerInSight_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::NewProp__isPlayerInSight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/GuardSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardSightComponent, nullptr, "OnPlayerInSight__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::GuardSightComponent_eventOnPlayerInSight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::GuardSightComponent_eventOnPlayerInSight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGuardSightComponent::FOnPlayerInSight_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInSight, bool _isPlayerInSight)
{
	struct GuardSightComponent_eventOnPlayerInSight_Parms
	{
		bool _isPlayerInSight;
	};
	GuardSightComponent_eventOnPlayerInSight_Parms Parms;
	Parms._isPlayerInSight=_isPlayerInSight ? true : false;
	OnPlayerInSight.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UGuardSightComponent::StaticRegisterNativesUGuardSightComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGuardSightComponent);
	UClass* Z_Construct_UClass_UGuardSightComponent_NoRegister()
	{
		return UGuardSightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGuardSightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_blockLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blockLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_blockLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGuardSightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardSightComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGuardSightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGuardSightComponent_OnPlayerInSight__DelegateSignature, "OnPlayerInSight__DelegateSignature" }, // 3952779078
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardSightComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGuardSightComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/GuardSightComponent.h" },
		{ "ModuleRelativePath", "Public/Guard/GuardSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers_Inner = { "blockLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Guard/GuardSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers = { "blockLayers", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGuardSightComponent, blockLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers_MetaData), Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers_MetaData) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGuardSightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuardSightComponent_Statics::NewProp_blockLayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGuardSightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGuardSightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGuardSightComponent_Statics::ClassParams = {
		&UGuardSightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UGuardSightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGuardSightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardSightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGuardSightComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardSightComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGuardSightComponent()
	{
		if (!Z_Registration_Info_UClass_UGuardSightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGuardSightComponent.OuterSingleton, Z_Construct_UClass_UGuardSightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGuardSightComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UGuardSightComponent>()
	{
		return UGuardSightComponent::StaticClass();
	}
	UGuardSightComponent::UGuardSightComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGuardSightComponent);
	UGuardSightComponent::~UGuardSightComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardSightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardSightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGuardSightComponent, UGuardSightComponent::StaticClass, TEXT("UGuardSightComponent"), &Z_Registration_Info_UClass_UGuardSightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGuardSightComponent), 2403788114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardSightComponent_h_342174123(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardSightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardSightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
