// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraOrbit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraOrbit() {}
// Cross Module References
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraMovements();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraOrbit();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraOrbit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void ACameraOrbit::StaticRegisterNativesACameraOrbit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraOrbit);
	UClass* Z_Construct_UClass_ACameraOrbit_NoRegister()
	{
		return ACameraOrbit::StaticClass();
	}
	struct Z_Construct_UClass_ACameraOrbit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraOrbit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraMovements,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraOrbit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "CameraOrbit.h" },
		{ "ModuleRelativePath", "CameraOrbit.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraOrbit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraOrbit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraOrbit_Statics::ClassParams = {
		&ACameraOrbit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACameraOrbit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraOrbit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraOrbit()
	{
		if (!Z_Registration_Info_UClass_ACameraOrbit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraOrbit.OuterSingleton, Z_Construct_UClass_ACameraOrbit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraOrbit.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<ACameraOrbit>()
	{
		return ACameraOrbit::StaticClass();
	}
	ACameraOrbit::ACameraOrbit() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraOrbit);
	ACameraOrbit::~ACameraOrbit() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraOrbit, ACameraOrbit::StaticClass, TEXT("ACameraOrbit"), &Z_Registration_Info_UClass_ACameraOrbit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraOrbit), 237622372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbit_h_125975609(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraOrbit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
