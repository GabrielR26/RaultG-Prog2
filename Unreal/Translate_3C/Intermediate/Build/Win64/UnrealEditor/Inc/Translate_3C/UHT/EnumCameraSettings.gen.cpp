// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/EnumCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumCameraSettings() {}
// Cross Module References
	TRANSLATE_3C_API UEnum* Z_Construct_UEnum_Translate_3C_EMovementType();
	TRANSLATE_3C_API UEnum* Z_Construct_UEnum_Translate_3C_OffsetType();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementType;
	static UEnum* EMovementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Translate_3C_EMovementType, (UObject*)Z_Construct_UPackage__Script_Translate_3C(), TEXT("EMovementType"));
		}
		return Z_Registration_Info_UEnum_EMovementType.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UEnum* StaticEnum<EMovementType>()
	{
		return EMovementType_StaticEnum();
	}
	struct Z_Construct_UEnum_Translate_3C_EMovementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Translate_3C_EMovementType_Statics::Enumerators[] = {
		{ "Lerp", (int64)Lerp },
		{ "ConstantLerp", (int64)ConstantLerp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Translate_3C_EMovementType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ConstantLerp.Comment", "/**\n * \n */" },
		{ "ConstantLerp.Name", "ConstantLerp" },
		{ "Lerp.Comment", "/**\n * \n */" },
		{ "Lerp.Name", "Lerp" },
		{ "ModuleRelativePath", "EnumCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Translate_3C_EMovementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Translate_3C,
		nullptr,
		"EMovementType",
		"EMovementType",
		Z_Construct_UEnum_Translate_3C_EMovementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Translate_3C_EMovementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Translate_3C_EMovementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Translate_3C_EMovementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Translate_3C_EMovementType()
	{
		if (!Z_Registration_Info_UEnum_EMovementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementType.InnerSingleton, Z_Construct_UEnum_Translate_3C_EMovementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_OffsetType;
	static UEnum* OffsetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_OffsetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_OffsetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Translate_3C_OffsetType, (UObject*)Z_Construct_UPackage__Script_Translate_3C(), TEXT("OffsetType"));
		}
		return Z_Registration_Info_UEnum_OffsetType.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UEnum* StaticEnum<OffsetType>()
	{
		return OffsetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Translate_3C_OffsetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Translate_3C_OffsetType_Statics::Enumerators[] = {
		{ "World", (int64)World },
		{ "Local", (int64)Local },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Translate_3C_OffsetType_Statics::Enum_MetaDataParams[] = {
		{ "Local.Name", "Local" },
		{ "ModuleRelativePath", "EnumCameraSettings.h" },
		{ "World.Name", "World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Translate_3C_OffsetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Translate_3C,
		nullptr,
		"OffsetType",
		"OffsetType",
		Z_Construct_UEnum_Translate_3C_OffsetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Translate_3C_OffsetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Translate_3C_OffsetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Translate_3C_OffsetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Translate_3C_OffsetType()
	{
		if (!Z_Registration_Info_UEnum_OffsetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OffsetType.InnerSingleton, Z_Construct_UEnum_Translate_3C_OffsetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_OffsetType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_EnumCameraSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_EnumCameraSettings_h_Statics::EnumInfo[] = {
		{ EMovementType_StaticEnum, TEXT("EMovementType"), &Z_Registration_Info_UEnum_EMovementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1297685056U) },
		{ OffsetType_StaticEnum, TEXT("OffsetType"), &Z_Registration_Info_UEnum_OffsetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1883559593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_EnumCameraSettings_h_1027491691(TEXT("/Script/Translate_3C"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_EnumCameraSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_EnumCameraSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
