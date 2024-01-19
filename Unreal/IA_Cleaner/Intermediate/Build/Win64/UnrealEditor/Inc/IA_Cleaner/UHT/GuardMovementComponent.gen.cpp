// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/GuardMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuardMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardPath_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UGuardMovementComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UGuardMovementComponent_NoRegister();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/GuardMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardMovementComponent, nullptr, "OnReachedDestination__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGuardMovementComponent::FOnReachedDestination_DelegateWrapper(const FMulticastScriptDelegate& OnReachedDestination)
{
	OnReachedDestination.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics
	{
		struct GuardMovementComponent_eventOnMove_Parms
		{
			float _speed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardMovementComponent_eventOnMove_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/GuardMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardMovementComponent, nullptr, "OnMove__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::GuardMovementComponent_eventOnMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::GuardMovementComponent_eventOnMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGuardMovementComponent::FOnMove_DelegateWrapper(const FMulticastScriptDelegate& OnMove, float _speed)
{
	struct GuardMovementComponent_eventOnMove_Parms
	{
		float _speed;
	};
	GuardMovementComponent_eventOnMove_Parms Parms;
	Parms._speed=_speed;
	OnMove.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UGuardMovementComponent::StaticRegisterNativesUGuardMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGuardMovementComponent);
	UClass* Z_Construct_UClass_UGuardMovementComponent_NoRegister()
	{
		return UGuardMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGuardMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGuardMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGuardMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGuardMovementComponent_OnMove__DelegateSignature, "OnMove__DelegateSignature" }, // 1010662134
		{ &Z_Construct_UDelegateFunction_UGuardMovementComponent_OnReachedDestination__DelegateSignature, "OnReachedDestination__DelegateSignature" }, // 360217468
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGuardMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Guard/GuardMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Guard/GuardMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Guard/GuardMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGuardMovementComponent, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_speed_MetaData), Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_path_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Guard/GuardMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGuardMovementComponent, path), Z_Construct_UClass_AGuardPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_path_MetaData), Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGuardMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuardMovementComponent_Statics::NewProp_path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGuardMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGuardMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGuardMovementComponent_Statics::ClassParams = {
		&UGuardMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UGuardMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGuardMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGuardMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UGuardMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGuardMovementComponent.OuterSingleton, Z_Construct_UClass_UGuardMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGuardMovementComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UGuardMovementComponent>()
	{
		return UGuardMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGuardMovementComponent);
	UGuardMovementComponent::~UGuardMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGuardMovementComponent, UGuardMovementComponent::StaticClass, TEXT("UGuardMovementComponent"), &Z_Registration_Info_UClass_UGuardMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGuardMovementComponent), 2085528553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardMovementComponent_h_1785106389(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
