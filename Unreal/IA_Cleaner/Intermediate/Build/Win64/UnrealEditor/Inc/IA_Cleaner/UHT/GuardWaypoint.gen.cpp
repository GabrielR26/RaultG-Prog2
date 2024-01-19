// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/GuardWaypoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuardWaypoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardWaypoint();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardWaypoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void AGuardWaypoint::StaticRegisterNativesAGuardWaypoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGuardWaypoint);
	UClass* Z_Construct_UClass_AGuardWaypoint_NoRegister()
	{
		return AGuardWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_AGuardWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGuardWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardWaypoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardWaypoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Guard/GuardWaypoint.h" },
		{ "ModuleRelativePath", "Public/Guard/GuardWaypoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGuardWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGuardWaypoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGuardWaypoint_Statics::ClassParams = {
		&AGuardWaypoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardWaypoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AGuardWaypoint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGuardWaypoint()
	{
		if (!Z_Registration_Info_UClass_AGuardWaypoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGuardWaypoint.OuterSingleton, Z_Construct_UClass_AGuardWaypoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGuardWaypoint.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<AGuardWaypoint>()
	{
		return AGuardWaypoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGuardWaypoint);
	AGuardWaypoint::~AGuardWaypoint() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardWaypoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardWaypoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGuardWaypoint, AGuardWaypoint::StaticClass, TEXT("AGuardWaypoint"), &Z_Registration_Info_UClass_AGuardWaypoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGuardWaypoint), 2657322811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardWaypoint_h_3893343179(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardWaypoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardWaypoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
