// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraActorTester.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraActorTester() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraActorTester();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraActorTester_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void ACameraActorTester::StaticRegisterNativesACameraActorTester()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraActorTester);
	UClass* Z_Construct_UClass_ACameraActorTester_NoRegister()
	{
		return ACameraActorTester::StaticClass();
	}
	struct Z_Construct_UClass_ACameraActorTester_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraActorTester_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraActorTester_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraActorTester.h" },
		{ "ModuleRelativePath", "CameraActorTester.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraActorTester_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraActorTester>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraActorTester_Statics::ClassParams = {
		&ACameraActorTester::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACameraActorTester_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraActorTester_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraActorTester()
	{
		if (!Z_Registration_Info_UClass_ACameraActorTester.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraActorTester.OuterSingleton, Z_Construct_UClass_ACameraActorTester_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraActorTester.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<ACameraActorTester>()
	{
		return ACameraActorTester::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraActorTester);
	ACameraActorTester::~ACameraActorTester() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraActorTester_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraActorTester_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraActorTester, ACameraActorTester::StaticClass, TEXT("ACameraActorTester"), &Z_Registration_Info_UClass_ACameraActorTester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraActorTester), 2578476573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraActorTester_h_3769106126(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraActorTester_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraActorTester_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
