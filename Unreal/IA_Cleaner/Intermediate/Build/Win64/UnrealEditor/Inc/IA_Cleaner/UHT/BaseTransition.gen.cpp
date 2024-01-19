// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/FSM/Transition/BaseTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTransition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseState_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UBaseTransition::StaticRegisterNativesUBaseTransition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTransition);
	UClass* Z_Construct_UClass_UBaseTransition_NoRegister()
	{
		return UBaseTransition::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nextState_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_nextState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_currentFSM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTransition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTransition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "FSM/Transition/BaseTransition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FSM/Transition/BaseTransition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTransition_Statics::NewProp_nextState_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/Transition/BaseTransition.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseTransition_Statics::NewProp_nextState = { "nextState", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTransition, nextState), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTransition_Statics::NewProp_nextState_MetaData), Z_Construct_UClass_UBaseTransition_Statics::NewProp_nextState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTransition_Statics::NewProp_currentFSM_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/Transition/BaseTransition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseTransition_Statics::NewProp_currentFSM = { "currentFSM", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseTransition, currentFSM), Z_Construct_UClass_UFSM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTransition_Statics::NewProp_currentFSM_MetaData), Z_Construct_UClass_UBaseTransition_Statics::NewProp_currentFSM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTransition_Statics::NewProp_nextState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTransition_Statics::NewProp_currentFSM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTransition_Statics::ClassParams = {
		&UBaseTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTransition_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseTransition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTransition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseTransition()
	{
		if (!Z_Registration_Info_UClass_UBaseTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTransition.OuterSingleton, Z_Construct_UClass_UBaseTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UBaseTransition>()
	{
		return UBaseTransition::StaticClass();
	}
	UBaseTransition::UBaseTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTransition);
	UBaseTransition::~UBaseTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_BaseTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_BaseTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTransition, UBaseTransition::StaticClass, TEXT("UBaseTransition"), &Z_Registration_Info_UClass_UBaseTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTransition), 1746251039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_BaseTransition_h_1087992772(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_BaseTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_Transition_BaseTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
