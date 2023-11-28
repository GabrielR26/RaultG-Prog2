// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraSettings();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void UCameraSettings::StaticRegisterNativesUCameraSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraSettings);
	UClass* Z_Construct_UClass_UCameraSettings_NoRegister()
	{
		return UCameraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCameraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*ABSTRACT,*/" },
		{ "IncludePath", "CameraSettings.h" },
		{ "ModuleRelativePath", "CameraSettings.h" },
		{ "ToolTip", "ABSTRACT," },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraSettings_Statics::ClassParams = {
		&UCameraSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraSettings()
	{
		if (!Z_Registration_Info_UClass_UCameraSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraSettings.OuterSingleton, Z_Construct_UClass_UCameraSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraSettings.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UCameraSettings>()
	{
		return UCameraSettings::StaticClass();
	}
	UCameraSettings::UCameraSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraSettings);
	UCameraSettings::~UCameraSettings() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraSettings, UCameraSettings::StaticClass, TEXT("UCameraSettings"), &Z_Registration_Info_UClass_UCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraSettings), 792634471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraSettings_h_3089319413(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
