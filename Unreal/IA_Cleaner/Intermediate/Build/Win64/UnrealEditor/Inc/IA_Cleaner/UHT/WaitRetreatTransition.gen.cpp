// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/Transition/WaitRetreatTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitRetreatTransition() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UWaitRetreatTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UWaitRetreatTransition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(UWaitRetreatTransition::execOnRetreat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetreat();
		P_NATIVE_END;
	}
	void UWaitRetreatTransition::StaticRegisterNativesUWaitRetreatTransition()
	{
		UClass* Class = UWaitRetreatTransition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRetreat", &UWaitRetreatTransition::execOnRetreat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/Transition/WaitRetreatTransition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaitRetreatTransition, nullptr, "OnRetreat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaitRetreatTransition);
	UClass* Z_Construct_UClass_UWaitRetreatTransition_NoRegister()
	{
		return UWaitRetreatTransition::StaticClass();
	}
	struct Z_Construct_UClass_UWaitRetreatTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaitRetreatTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTransition,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRetreatTransition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaitRetreatTransition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaitRetreatTransition_OnRetreat, "OnRetreat" }, // 145675843
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRetreatTransition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitRetreatTransition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/Transition/WaitRetreatTransition.h" },
		{ "ModuleRelativePath", "Public/Guard/Transition/WaitRetreatTransition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaitRetreatTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitRetreatTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaitRetreatTransition_Statics::ClassParams = {
		&UWaitRetreatTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRetreatTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaitRetreatTransition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWaitRetreatTransition()
	{
		if (!Z_Registration_Info_UClass_UWaitRetreatTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaitRetreatTransition.OuterSingleton, Z_Construct_UClass_UWaitRetreatTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaitRetreatTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UWaitRetreatTransition>()
	{
		return UWaitRetreatTransition::StaticClass();
	}
	UWaitRetreatTransition::UWaitRetreatTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaitRetreatTransition);
	UWaitRetreatTransition::~UWaitRetreatTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRetreatTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRetreatTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaitRetreatTransition, UWaitRetreatTransition::StaticClass, TEXT("UWaitRetreatTransition"), &Z_Registration_Info_UClass_UWaitRetreatTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaitRetreatTransition), 3110915737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRetreatTransition_h_2298311303(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRetreatTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRetreatTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
