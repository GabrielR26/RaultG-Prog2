// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/State/AttatckPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttatckPlayerState() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuard_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UAttatckPlayerState();
	IA_CLEANER_API UClass* Z_Construct_UClass_UAttatckPlayerState_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseState();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UAttatckPlayerState::StaticRegisterNativesUAttatckPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttatckPlayerState);
	UClass* Z_Construct_UClass_UAttatckPlayerState_NoRegister()
	{
		return UAttatckPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_UAttatckPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentGuard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_currentGuard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttatckPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttatckPlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttatckPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/State/AttatckPlayerState.h" },
		{ "ModuleRelativePath", "Public/Guard/State/AttatckPlayerState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttatckPlayerState_Statics::NewProp_currentGuard_MetaData[] = {
		{ "Category", "AttatckPlayerState" },
		{ "ModuleRelativePath", "Public/Guard/State/AttatckPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttatckPlayerState_Statics::NewProp_currentGuard = { "currentGuard", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttatckPlayerState, currentGuard), Z_Construct_UClass_AGuard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttatckPlayerState_Statics::NewProp_currentGuard_MetaData), Z_Construct_UClass_UAttatckPlayerState_Statics::NewProp_currentGuard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttatckPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttatckPlayerState_Statics::NewProp_currentGuard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttatckPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttatckPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttatckPlayerState_Statics::ClassParams = {
		&UAttatckPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttatckPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttatckPlayerState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttatckPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttatckPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttatckPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttatckPlayerState()
	{
		if (!Z_Registration_Info_UClass_UAttatckPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttatckPlayerState.OuterSingleton, Z_Construct_UClass_UAttatckPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttatckPlayerState.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UAttatckPlayerState>()
	{
		return UAttatckPlayerState::StaticClass();
	}
	UAttatckPlayerState::UAttatckPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttatckPlayerState);
	UAttatckPlayerState::~UAttatckPlayerState() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_State_AttatckPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_State_AttatckPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttatckPlayerState, UAttatckPlayerState::StaticClass, TEXT("UAttatckPlayerState"), &Z_Registration_Info_UClass_UAttatckPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttatckPlayerState), 2824990988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_State_AttatckPlayerState_h_1331188452(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_State_AttatckPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_State_AttatckPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
