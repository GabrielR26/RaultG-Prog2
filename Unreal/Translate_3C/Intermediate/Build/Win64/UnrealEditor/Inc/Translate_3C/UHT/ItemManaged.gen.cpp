// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/ItemManaged.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemManaged() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UItemManaged();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UItemManaged_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void UItemManaged::StaticRegisterNativesUItemManaged()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemManaged);
	UClass* Z_Construct_UClass_UItemManaged_NoRegister()
	{
		return UItemManaged::StaticClass();
	}
	struct Z_Construct_UClass_UItemManaged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemManaged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemManaged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ItemManaged.h" },
		{ "ModuleRelativePath", "ItemManaged.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemManaged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemManaged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemManaged_Statics::ClassParams = {
		&UItemManaged::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemManaged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemManaged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemManaged()
	{
		if (!Z_Registration_Info_UClass_UItemManaged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemManaged.OuterSingleton, Z_Construct_UClass_UItemManaged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemManaged.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UItemManaged>()
	{
		return UItemManaged::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemManaged);
	UItemManaged::~UItemManaged() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ItemManaged_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ItemManaged_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemManaged, UItemManaged::StaticClass, TEXT("UItemManaged"), &Z_Registration_Info_UClass_UItemManaged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemManaged), 1563377626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ItemManaged_h_1241464517(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ItemManaged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ItemManaged_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
