// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/Guard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuard();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuard_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSMComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UGuardMovementComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UGuardSightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void AGuard::StaticRegisterNativesAGuard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGuard);
	UClass* Z_Construct_UClass_AGuard_NoRegister()
	{
		return AGuard::StaticClass();
	}
	struct Z_Construct_UClass_AGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_moveComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_sightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSMComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FSMComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Guard/Guard.h" },
		{ "ModuleRelativePath", "Public/Guard/Guard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuard_Statics::NewProp_moveComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Guard/Guard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGuard_Statics::NewProp_moveComponent = { "moveComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuard, moveComponent), Z_Construct_UClass_UGuardMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::NewProp_moveComponent_MetaData), Z_Construct_UClass_AGuard_Statics::NewProp_moveComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuard_Statics::NewProp_sightComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Guard/Guard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGuard_Statics::NewProp_sightComponent = { "sightComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuard, sightComponent), Z_Construct_UClass_UGuardSightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::NewProp_sightComponent_MetaData), Z_Construct_UClass_AGuard_Statics::NewProp_sightComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuard_Statics::NewProp_FSMComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Guard/Guard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGuard_Statics::NewProp_FSMComponent = { "FSMComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuard, FSMComponent), Z_Construct_UClass_UFSMComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::NewProp_FSMComponent_MetaData), Z_Construct_UClass_AGuard_Statics::NewProp_FSMComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGuard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuard_Statics::NewProp_moveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuard_Statics::NewProp_sightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuard_Statics::NewProp_FSMComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGuard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGuard_Statics::ClassParams = {
		&AGuard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGuard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::Class_MetaDataParams), Z_Construct_UClass_AGuard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGuard()
	{
		if (!Z_Registration_Info_UClass_AGuard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGuard.OuterSingleton, Z_Construct_UClass_AGuard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGuard.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<AGuard>()
	{
		return AGuard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGuard);
	AGuard::~AGuard() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Guard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Guard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGuard, AGuard::StaticClass, TEXT("AGuard"), &Z_Registration_Info_UClass_AGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGuard), 2468850043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Guard_h_2087948178(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Guard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Guard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
