// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/Transition/BackToPatrolTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackToPatrolTransition() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UBackToPatrolTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBackToPatrolTransition_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(UBackToPatrolTransition::execBackToPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackToPatrol();
		P_NATIVE_END;
	}
	void UBackToPatrolTransition::StaticRegisterNativesUBackToPatrolTransition()
	{
		UClass* Class = UBackToPatrolTransition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackToPatrol", &UBackToPatrolTransition::execBackToPatrol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/Transition/BackToPatrolTransition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackToPatrolTransition, nullptr, "BackToPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackToPatrolTransition);
	UClass* Z_Construct_UClass_UBackToPatrolTransition_NoRegister()
	{
		return UBackToPatrolTransition::StaticClass();
	}
	struct Z_Construct_UClass_UBackToPatrolTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackToPatrolTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTransition,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackToPatrolTransition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackToPatrolTransition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackToPatrolTransition_BackToPatrol, "BackToPatrol" }, // 1502347477
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackToPatrolTransition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackToPatrolTransition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/Transition/BackToPatrolTransition.h" },
		{ "ModuleRelativePath", "Public/Guard/Transition/BackToPatrolTransition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackToPatrolTransition_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "BackToPatrolTransition" },
		{ "ModuleRelativePath", "Public/Guard/Transition/BackToPatrolTransition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackToPatrolTransition_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackToPatrolTransition, timer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackToPatrolTransition_Statics::NewProp_timer_MetaData), Z_Construct_UClass_UBackToPatrolTransition_Statics::NewProp_timer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackToPatrolTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackToPatrolTransition_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackToPatrolTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackToPatrolTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackToPatrolTransition_Statics::ClassParams = {
		&UBackToPatrolTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBackToPatrolTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackToPatrolTransition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackToPatrolTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackToPatrolTransition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackToPatrolTransition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBackToPatrolTransition()
	{
		if (!Z_Registration_Info_UClass_UBackToPatrolTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackToPatrolTransition.OuterSingleton, Z_Construct_UClass_UBackToPatrolTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBackToPatrolTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UBackToPatrolTransition>()
	{
		return UBackToPatrolTransition::StaticClass();
	}
	UBackToPatrolTransition::UBackToPatrolTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackToPatrolTransition);
	UBackToPatrolTransition::~UBackToPatrolTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_BackToPatrolTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_BackToPatrolTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBackToPatrolTransition, UBackToPatrolTransition::StaticClass, TEXT("UBackToPatrolTransition"), &Z_Registration_Info_UClass_UBackToPatrolTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackToPatrolTransition), 1817511654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_BackToPatrolTransition_h_3272249678(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_BackToPatrolTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_BackToPatrolTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
