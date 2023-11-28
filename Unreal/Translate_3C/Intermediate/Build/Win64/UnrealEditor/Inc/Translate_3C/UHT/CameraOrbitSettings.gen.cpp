// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraOrbitSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraOrbitSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraOrbitSettings();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraOrbitSettings_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraSettings();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void UCameraOrbitSettings::StaticRegisterNativesUCameraOrbitSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraOrbitSettings);
	UClass* Z_Construct_UClass_UCameraOrbitSettings_NoRegister()
	{
		return UCameraOrbitSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCameraOrbitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_expression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraOrbitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraOrbitSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CameraOrbitSettings.h" },
		{ "ModuleRelativePath", "CameraOrbitSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "CameraOrbitSettings.h" },
		{ "Umax", "1000" },
		{ "UMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraOrbitSettings, radius), METADATA_PARAMS(Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_expression_MetaData[] = {
		{ "Category", "CameraOrbitSettings" },
		{ "ModuleRelativePath", "CameraOrbitSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_expression = { "expression", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraOrbitSettings, expression), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_expression_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraOrbitSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraOrbitSettings_Statics::NewProp_expression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraOrbitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraOrbitSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraOrbitSettings_Statics::ClassParams = {
		&UCameraOrbitSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraOrbitSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraOrbitSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraOrbitSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraOrbitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraOrbitSettings()
	{
		if (!Z_Registration_Info_UClass_UCameraOrbitSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraOrbitSettings.OuterSingleton, Z_Construct_UClass_UCameraOrbitSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraOrbitSettings.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UCameraOrbitSettings>()
	{
		return UCameraOrbitSettings::StaticClass();
	}
	UCameraOrbitSettings::UCameraOrbitSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraOrbitSettings);
	UCameraOrbitSettings::~UCameraOrbitSettings() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbitSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbitSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraOrbitSettings, UCameraOrbitSettings::StaticClass, TEXT("UCameraOrbitSettings"), &Z_Registration_Info_UClass_UCameraOrbitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraOrbitSettings), 4042122292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbitSettings_h_4266890450(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbitSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbitSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
