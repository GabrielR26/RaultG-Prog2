// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/CustomPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACustomPlayer();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACustomPlayer_NoRegister();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics
	{
		struct CustomPlayer_eventOnMoveVertical_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomPlayer_eventOnMoveVertical_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "OnMoveVertical__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::CustomPlayer_eventOnMoveVertical_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::CustomPlayer_eventOnMoveVertical_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ACustomPlayer::FOnMoveVertical_DelegateWrapper(const FMulticastScriptDelegate& OnMoveVertical, float _speed)
{
	struct CustomPlayer_eventOnMoveVertical_Parms
	{
		float _speed;
	};
	CustomPlayer_eventOnMoveVertical_Parms Parms;
	Parms._speed=_speed;
	OnMoveVertical.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics
	{
		struct CustomPlayer_eventOnMoveHorizontal_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomPlayer_eventOnMoveHorizontal_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "OnMoveHorizontal__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::CustomPlayer_eventOnMoveHorizontal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::CustomPlayer_eventOnMoveHorizontal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ACustomPlayer::FOnMoveHorizontal_DelegateWrapper(const FMulticastScriptDelegate& OnMoveHorizontal, float _speed)
{
	struct CustomPlayer_eventOnMoveHorizontal_Parms
	{
		float _speed;
	};
	CustomPlayer_eventOnMoveHorizontal_Parms Parms;
	Parms._speed=_speed;
	OnMoveHorizontal.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ACustomPlayer::StaticRegisterNativesACustomPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomPlayer);
	UClass* Z_Construct_UClass_ACustomPlayer_NoRegister()
	{
		return ACustomPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACustomPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertical_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_vertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_horizontal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_horizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveHorizontal__DelegateSignature, "OnMoveHorizontal__DelegateSignature" }, // 3548337095
		{ &Z_Construct_UDelegateFunction_ACustomPlayer_OnMoveVertical__DelegateSignature, "OnMoveVertical__DelegateSignature" }, // 4108466767
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Guard/CustomPlayer.h" },
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_context_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayer, context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_context_MetaData), Z_Construct_UClass_ACustomPlayer_Statics::NewProp_context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_vertical_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_vertical = { "vertical", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayer, vertical), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_vertical_MetaData), Z_Construct_UClass_ACustomPlayer_Statics::NewProp_vertical_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_horizontal_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_horizontal = { "horizontal", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayer, horizontal), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_horizontal_MetaData), Z_Construct_UClass_ACustomPlayer_Statics::NewProp_horizontal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Guard/CustomPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayer, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_speed_MetaData), Z_Construct_UClass_ACustomPlayer_Statics::NewProp_speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_vertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_horizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomPlayer_Statics::ClassParams = {
		&ACustomPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ACustomPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACustomPlayer()
	{
		if (!Z_Registration_Info_UClass_ACustomPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomPlayer.OuterSingleton, Z_Construct_UClass_ACustomPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACustomPlayer.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<ACustomPlayer>()
	{
		return ACustomPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPlayer);
	ACustomPlayer::~ACustomPlayer() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACustomPlayer, ACustomPlayer::StaticClass, TEXT("ACustomPlayer"), &Z_Registration_Info_UClass_ACustomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomPlayer), 3749975969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_3931023313(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
