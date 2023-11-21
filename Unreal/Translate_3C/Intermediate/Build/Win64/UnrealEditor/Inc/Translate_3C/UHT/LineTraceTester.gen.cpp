// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/LineTraceTester.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineTraceTester() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ALineTraceTester();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ALineTraceTester_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void ALineTraceTester::StaticRegisterNativesALineTraceTester()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALineTraceTester);
	UClass* Z_Construct_UClass_ALineTraceTester_NoRegister()
	{
		return ALineTraceTester::StaticClass();
	}
	struct Z_Construct_UClass_ALineTraceTester_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_objectlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objectlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineTraceTester_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTraceTester_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LineTraceTester.h" },
		{ "ModuleRelativePath", "LineTraceTester.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers_Inner = { "objectlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers_MetaData[] = {
		{ "Category", "Linetrace" },
		{ "ModuleRelativePath", "LineTraceTester.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers = { "objectlayers", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALineTraceTester, objectlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineTraceTester_Statics::NewProp_range_MetaData[] = {
		{ "Category", "Linetrace" },
		{ "ModuleRelativePath", "LineTraceTester.h" },
		{ "UClamp", "100" },
		{ "UMin", "100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALineTraceTester_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALineTraceTester, range), METADATA_PARAMS(Z_Construct_UClass_ALineTraceTester_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTraceTester_Statics::NewProp_range_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineTraceTester_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTraceTester_Statics::NewProp_objectlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineTraceTester_Statics::NewProp_range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineTraceTester_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineTraceTester>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALineTraceTester_Statics::ClassParams = {
		&ALineTraceTester::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALineTraceTester_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALineTraceTester_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALineTraceTester_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineTraceTester_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineTraceTester()
	{
		if (!Z_Registration_Info_UClass_ALineTraceTester.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALineTraceTester.OuterSingleton, Z_Construct_UClass_ALineTraceTester_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALineTraceTester.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<ALineTraceTester>()
	{
		return ALineTraceTester::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineTraceTester);
	ALineTraceTester::~ALineTraceTester() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_LineTraceTester_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_LineTraceTester_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALineTraceTester, ALineTraceTester::StaticClass, TEXT("ALineTraceTester"), &Z_Registration_Info_UClass_ALineTraceTester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALineTraceTester), 3507392931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_LineTraceTester_h_2606344620(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_LineTraceTester_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_LineTraceTester_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
