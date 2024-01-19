// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/FSM/FSMComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSMComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSM_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSMComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSMComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UFSMComponent::StaticRegisterNativesUFSMComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFSMComponent);
	UClass* Z_Construct_UClass_UFSMComponent_NoRegister()
	{
		return UFSMComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFSMComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSMRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FSMRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_currentFSM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSMComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFSMComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSMComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FSM/FSMComponent.h" },
		{ "ModuleRelativePath", "Public/FSM/FSMComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSMComponent_Statics::NewProp_FSMRef_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/FSMComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFSMComponent_Statics::NewProp_FSMRef = { "FSMRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFSMComponent, FSMRef), Z_Construct_UClass_UClass, Z_Construct_UClass_UFSM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSMComponent_Statics::NewProp_FSMRef_MetaData), Z_Construct_UClass_UFSMComponent_Statics::NewProp_FSMRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSMComponent_Statics::NewProp_currentFSM_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/FSM/FSMComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFSMComponent_Statics::NewProp_currentFSM = { "currentFSM", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFSMComponent, currentFSM), Z_Construct_UClass_UFSM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSMComponent_Statics::NewProp_currentFSM_MetaData), Z_Construct_UClass_UFSMComponent_Statics::NewProp_currentFSM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSMComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSMComponent_Statics::NewProp_FSMRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSMComponent_Statics::NewProp_currentFSM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSMComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSMComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFSMComponent_Statics::ClassParams = {
		&UFSMComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSMComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSMComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSMComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFSMComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFSMComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFSMComponent()
	{
		if (!Z_Registration_Info_UClass_UFSMComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFSMComponent.OuterSingleton, Z_Construct_UClass_UFSMComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFSMComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UFSMComponent>()
	{
		return UFSMComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSMComponent);
	UFSMComponent::~UFSMComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_FSMComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_FSMComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFSMComponent, UFSMComponent::StaticClass, TEXT("UFSMComponent"), &Z_Registration_Info_UClass_UFSMComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFSMComponent), 3965818825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_FSMComponent_h_703502486(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_FSMComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_FSM_FSMComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
