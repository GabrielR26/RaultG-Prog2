// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/FSM/State/BaseState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseState();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseState_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UBaseState::StaticRegisterNativesUBaseState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseState);
	UClass* Z_Construct_UClass_UBaseState_NoRegister()
	{
		return UBaseState::StaticClass();
	}
	struct Z_Construct_UClass_UBaseState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_baseTransitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseTransitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_baseTransitions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_transitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_currentFSM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FSM/State/BaseState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FSM/State/BaseState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions_Inner = { "baseTransitions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTransition_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/State/BaseState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions = { "baseTransitions", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseState, baseTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions_MetaData), Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseState_Statics::NewProp_transitions_Inner = { "transitions", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseTransition_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseState_Statics::NewProp_transitions_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/State/BaseState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseState_Statics::NewProp_transitions = { "transitions", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseState, transitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::NewProp_transitions_MetaData), Z_Construct_UClass_UBaseState_Statics::NewProp_transitions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseState_Statics::NewProp_currentFSM_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/State/BaseState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseState_Statics::NewProp_currentFSM = { "currentFSM", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseState, currentFSM), Z_Construct_UClass_UFSM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::NewProp_currentFSM_MetaData), Z_Construct_UClass_UBaseState_Statics::NewProp_currentFSM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseState_Statics::NewProp_baseTransitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseState_Statics::NewProp_transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseState_Statics::NewProp_transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseState_Statics::NewProp_currentFSM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseState_Statics::ClassParams = {
		&UBaseState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseState()
	{
		if (!Z_Registration_Info_UClass_UBaseState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseState.OuterSingleton, Z_Construct_UClass_UBaseState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseState.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UBaseState>()
	{
		return UBaseState::StaticClass();
	}
	UBaseState::UBaseState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseState);
	UBaseState::~UBaseState() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_BaseState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_BaseState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseState, UBaseState::StaticClass, TEXT("UBaseState"), &Z_Registration_Info_UClass_UBaseState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseState), 2563405139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_BaseState_h_600208312(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_BaseState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_State_BaseState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
