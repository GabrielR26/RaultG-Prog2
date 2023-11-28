// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraFollowSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraFollowSettings() {}
// Cross Module References
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraFollowSettings();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraFollowSettings_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraSettings();
	TRANSLATE_3C_API UEnum* Z_Construct_UEnum_Translate_3C_EMovementType();
	TRANSLATE_3C_API UEnum* Z_Construct_UEnum_Translate_3C_OffsetType();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void UCameraFollowSettings::StaticRegisterNativesUCameraFollowSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraFollowSettings);
	UClass* Z_Construct_UClass_UCameraFollowSettings_NoRegister()
	{
		return UCameraFollowSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCameraFollowSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_movementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offsetType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_offsetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offsetX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offsetX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offsetY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraFollowSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CameraFollowSettings.h" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_movementType_MetaData[] = {
		{ "Category", "settings" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_movementType = { "movementType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraFollowSettings, movementType), Z_Construct_UEnum_Translate_3C_EMovementType, METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_movementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_movementType_MetaData)) }; // 1297685056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetType_MetaData[] = {
		{ "Category", "settings" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetType = { "offsetType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraFollowSettings, offsetType), Z_Construct_UEnum_Translate_3C_OffsetType, METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetType_MetaData)) }; // 1883559593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetX_MetaData[] = {
		{ "Category", "settings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-2000" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
		{ "Umax", "2000" },
		{ "UMin", "-2000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetX = { "offsetX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraFollowSettings, offsetX), METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetY_MetaData[] = {
		{ "Category", "settings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-2000" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
		{ "Umax", "2000" },
		{ "UMin", "-2000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetY = { "offsetY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraFollowSettings, offsetY), METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetZ_MetaData[] = {
		{ "Category", "settings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-2000" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
		{ "Umax", "2000" },
		{ "UMin", "-2000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetZ = { "offsetZ", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraFollowSettings, offsetZ), METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_cameraSpeed_MetaData[] = {
		{ "Category", "settings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-2000" },
		{ "ModuleRelativePath", "CameraFollowSettings.h" },
		{ "Umax", "2000" },
		{ "UMin", "-2000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_cameraSpeed = { "cameraSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraFollowSettings, cameraSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_cameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_cameraSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraFollowSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_movementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_offsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraFollowSettings_Statics::NewProp_cameraSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraFollowSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraFollowSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraFollowSettings_Statics::ClassParams = {
		&UCameraFollowSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraFollowSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraFollowSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraFollowSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraFollowSettings()
	{
		if (!Z_Registration_Info_UClass_UCameraFollowSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraFollowSettings.OuterSingleton, Z_Construct_UClass_UCameraFollowSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraFollowSettings.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UCameraFollowSettings>()
	{
		return UCameraFollowSettings::StaticClass();
	}
	UCameraFollowSettings::UCameraFollowSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraFollowSettings);
	UCameraFollowSettings::~UCameraFollowSettings() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollowSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollowSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraFollowSettings, UCameraFollowSettings::StaticClass, TEXT("UCameraFollowSettings"), &Z_Registration_Info_UClass_UCameraFollowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraFollowSettings), 1743300512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollowSettings_h_3018109184(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollowSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollowSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
