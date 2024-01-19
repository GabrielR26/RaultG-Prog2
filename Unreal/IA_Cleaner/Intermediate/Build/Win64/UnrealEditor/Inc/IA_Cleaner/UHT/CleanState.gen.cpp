// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/FSM/State/CleanState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanState() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseState();
	IA_CLEANER_API UClass* Z_Construct_UClass_UCleanState();
	IA_CLEANER_API UClass* Z_Construct_UClass_UCleanState_NoRegister();
	IA_CLEANER_API UFunction* Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSM/State/CleanState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanState, nullptr, "OnFinishClean__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCleanState::FOnFinishClean_DelegateWrapper(const FMulticastScriptDelegate& OnFinishClean)
{
	OnFinishClean.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCleanState::execBeginClean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginClean();
		P_NATIVE_END;
	}
	void UCleanState::StaticRegisterNativesUCleanState()
	{
		UClass* Class = UCleanState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginClean", &UCleanState::execBeginClean },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCleanState_BeginClean_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCleanState_BeginClean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSM/State/CleanState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanState_BeginClean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanState, nullptr, "BeginClean", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanState_BeginClean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCleanState_BeginClean_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCleanState_BeginClean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanState_BeginClean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanState);
	UClass* Z_Construct_UClass_UCleanState_NoRegister()
	{
		return UCleanState::StaticClass();
	}
	struct Z_Construct_UClass_UCleanState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeToClean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeToClean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCleanState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCleanState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCleanState_BeginClean, "BeginClean" }, // 2470839893
		{ &Z_Construct_UDelegateFunction_UCleanState_OnFinishClean__DelegateSignature, "OnFinishClean__DelegateSignature" }, // 2848459830
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FSM/State/CleanState.h" },
		{ "ModuleRelativePath", "Public/FSM/State/CleanState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanState_Statics::NewProp_timeToClean_MetaData[] = {
		{ "Category", "CleanState" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/FSM/State/CleanState.h" },
		{ "UMax", "5" },
		{ "UMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCleanState_Statics::NewProp_timeToClean = { "timeToClean", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCleanState, timeToClean), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanState_Statics::NewProp_timeToClean_MetaData), Z_Construct_UClass_UCleanState_Statics::NewProp_timeToClean_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCleanState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanState_Statics::NewProp_timeToClean,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCleanState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanState_Statics::ClassParams = {
		&UCleanState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCleanState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCleanState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanState_Statics::Class_MetaDataParams), Z_Construct_UClass_UCleanState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCleanState()
	{
		if (!Z_Registration_Info_UClass_UCleanState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanState.OuterSingleton, Z_Construct_UClass_UCleanState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCleanState.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UCleanState>()
	{
		return UCleanState::StaticClass();
	}
	UCleanState::UCleanState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanState);
	UCleanState::~UCleanState() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_CleanState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_CleanState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCleanState, UCleanState::StaticClass, TEXT("UCleanState"), &Z_Registration_Info_UClass_UCleanState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanState), 962779247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_CleanState_h_4014902819(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_CleanState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_CleanState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
