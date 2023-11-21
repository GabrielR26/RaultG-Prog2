// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraFollow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraFollow() {}
// Cross Module References
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraFollow();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraFollow_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraMovements();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void ACameraFollow::StaticRegisterNativesACameraFollow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraFollow);
	UClass* Z_Construct_UClass_ACameraFollow_NoRegister()
	{
		return ACameraFollow::StaticClass();
	}
	struct Z_Construct_UClass_ACameraFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraMovements,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraFollow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "CameraFollow.h" },
		{ "ModuleRelativePath", "CameraFollow.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraFollow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraFollow_Statics::ClassParams = {
		&ACameraFollow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACameraFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraFollow()
	{
		if (!Z_Registration_Info_UClass_ACameraFollow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraFollow.OuterSingleton, Z_Construct_UClass_ACameraFollow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraFollow.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<ACameraFollow>()
	{
		return ACameraFollow::StaticClass();
	}
	ACameraFollow::ACameraFollow() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraFollow);
	ACameraFollow::~ACameraFollow() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraFollow, ACameraFollow::StaticClass, TEXT("ACameraFollow"), &Z_Registration_Info_UClass_ACameraFollow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraFollow), 2410459176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollow_h_4238250720(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraFollow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
