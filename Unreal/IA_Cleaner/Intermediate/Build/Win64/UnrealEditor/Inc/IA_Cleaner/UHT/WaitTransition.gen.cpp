// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/FSM/Transition/WaitTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitTransition() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UWaitTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UWaitTransition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UWaitTransition::StaticRegisterNativesUWaitTransition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaitTransition);
	UClass* Z_Construct_UClass_UWaitTransition_NoRegister()
	{
		return UWaitTransition::StaticClass();
	}
	struct Z_Construct_UClass_UWaitTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_waitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaitTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTransition,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitTransition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitTransition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FSM/Transition/WaitTransition.h" },
		{ "ModuleRelativePath", "Public/FSM/Transition/WaitTransition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitTransition_Statics::NewProp_waitTime_MetaData[] = {
		{ "Category", "WaitTransition" },
		{ "ModuleRelativePath", "Public/FSM/Transition/WaitTransition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaitTransition_Statics::NewProp_waitTime = { "waitTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaitTransition, waitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitTransition_Statics::NewProp_waitTime_MetaData), Z_Construct_UClass_UWaitTransition_Statics::NewProp_waitTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaitTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitTransition_Statics::NewProp_waitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaitTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaitTransition_Statics::ClassParams = {
		&UWaitTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaitTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaitTransition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaitTransition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitTransition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWaitTransition()
	{
		if (!Z_Registration_Info_UClass_UWaitTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaitTransition.OuterSingleton, Z_Construct_UClass_UWaitTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaitTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UWaitTransition>()
	{
		return UWaitTransition::StaticClass();
	}
	UWaitTransition::UWaitTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaitTransition);
	UWaitTransition::~UWaitTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_WaitTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_WaitTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaitTransition, UWaitTransition::StaticClass, TEXT("UWaitTransition"), &Z_Registration_Info_UClass_UWaitTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaitTransition), 2468145847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_WaitTransition_h_3987532920(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_WaitTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_WaitTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
