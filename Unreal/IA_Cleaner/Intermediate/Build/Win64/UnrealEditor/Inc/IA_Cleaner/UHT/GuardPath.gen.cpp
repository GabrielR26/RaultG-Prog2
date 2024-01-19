// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/GuardPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuardPath() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardPath();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardPath_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuardWaypoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void AGuardPath::StaticRegisterNativesAGuardPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGuardPath);
	UClass* Z_Construct_UClass_AGuardPath_NoRegister()
	{
		return AGuardPath::StaticClass();
	}
	struct Z_Construct_UClass_AGuardPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pathColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_waypoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waypoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_waypoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentWaypoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_currentWaypoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGuardPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Guard/GuardPath.h" },
		{ "ModuleRelativePath", "Public/Guard/GuardPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardPath_Statics::NewProp_pathColor_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Guard/GuardPath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGuardPath_Statics::NewProp_pathColor = { "pathColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuardPath, pathColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::NewProp_pathColor_MetaData), Z_Construct_UClass_AGuardPath_Statics::NewProp_pathColor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints_Inner = { "waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGuardWaypoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Guard/GuardPath.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints = { "waypoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuardPath, waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints_MetaData), Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuardPath_Statics::NewProp_currentWaypoint_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Guard/GuardPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGuardPath_Statics::NewProp_currentWaypoint = { "currentWaypoint", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGuardPath, currentWaypoint), Z_Construct_UClass_AGuardWaypoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::NewProp_currentWaypoint_MetaData), Z_Construct_UClass_AGuardPath_Statics::NewProp_currentWaypoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGuardPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuardPath_Statics::NewProp_pathColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuardPath_Statics::NewProp_waypoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuardPath_Statics::NewProp_currentWaypoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGuardPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGuardPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGuardPath_Statics::ClassParams = {
		&AGuardPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGuardPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::Class_MetaDataParams), Z_Construct_UClass_AGuardPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGuardPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGuardPath()
	{
		if (!Z_Registration_Info_UClass_AGuardPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGuardPath.OuterSingleton, Z_Construct_UClass_AGuardPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGuardPath.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<AGuardPath>()
	{
		return AGuardPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGuardPath);
	AGuardPath::~AGuardPath() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGuardPath, AGuardPath::StaticClass, TEXT("AGuardPath"), &Z_Registration_Info_UClass_AGuardPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGuardPath), 2343989366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardPath_h_509914529(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_GuardPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
