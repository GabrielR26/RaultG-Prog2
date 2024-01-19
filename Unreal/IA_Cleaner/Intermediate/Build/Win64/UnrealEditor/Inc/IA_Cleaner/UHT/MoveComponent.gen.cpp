// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/MoveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UMoveComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "OnReachedDestination__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMoveComponent::FOnReachedDestination_DelegateWrapper(const FMulticastScriptDelegate& OnReachedDestination)
{
	OnReachedDestination.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics
	{
		struct MoveComponent_eventOnMove_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveComponent_eventOnMove_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "OnMove__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::MoveComponent_eventOnMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::MoveComponent_eventOnMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMoveComponent::FOnMove_DelegateWrapper(const FMulticastScriptDelegate& OnMove, float _speed)
{
	struct MoveComponent_eventOnMove_Parms
	{
		float _speed;
	};
	MoveComponent_eventOnMove_Parms Parms;
	Parms._speed=_speed;
	OnMove.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMoveComponent::StaticRegisterNativesUMoveComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveComponent);
	UClass* Z_Construct_UClass_UMoveComponent_NoRegister()
	{
		return UMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoveComponent_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMoveComponent_OnMove__DelegateSignature, "OnMove__DelegateSignature" }, // 2822887535
		{ &Z_Construct_UDelegateFunction_UMoveComponent_OnReachedDestination__DelegateSignature, "OnReachedDestination__DelegateSignature" }, // 239330388
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MoveComponent.h" },
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed_MetaData), Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveComponent_Statics::ClassParams = {
		&UMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoveComponent()
	{
		if (!Z_Registration_Info_UClass_UMoveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveComponent.OuterSingleton, Z_Construct_UClass_UMoveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UMoveComponent>()
	{
		return UMoveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveComponent);
	UMoveComponent::~UMoveComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveComponent, UMoveComponent::StaticClass, TEXT("UMoveComponent"), &Z_Registration_Info_UClass_UMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveComponent), 3964604759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_1810912743(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
