// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Drone/Drone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	IA_CLEANER_API UClass* Z_Construct_UClass_ADrone();
	IA_CLEANER_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UDroneMovementComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UFSMComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void ADrone::StaticRegisterNativesADrone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone);
	UClass* Z_Construct_UClass_ADrone_NoRegister()
	{
		return ADrone::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSMComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FSMComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_moveComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Drone/Drone.h" },
		{ "ModuleRelativePath", "Public/Drone/Drone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_FSMComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drone/Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_FSMComponent = { "FSMComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, FSMComponent), Z_Construct_UClass_UFSMComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_FSMComponent_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_FSMComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_moveComponent_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drone/Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_moveComponent = { "moveComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, moveComponent), Z_Construct_UClass_UDroneMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_moveComponent_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_moveComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_FSMComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_moveComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_Statics::ClassParams = {
		&ADrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADrone()
	{
		if (!Z_Registration_Info_UClass_ADrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone.OuterSingleton, Z_Construct_UClass_ADrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<ADrone>()
	{
		return ADrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone);
	ADrone::~ADrone() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Drone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Drone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone, ADrone::StaticClass, TEXT("ADrone"), &Z_Registration_Info_UClass_ADrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone), 1970638012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Drone_h_353341753(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Drone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
