// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Trash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrash() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_ATrash();
	IA_CLEANER_API UClass* Z_Construct_UClass_ATrash_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void ATrash::StaticRegisterNativesATrash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrash);
	UClass* Z_Construct_UClass_ATrash_NoRegister()
	{
		return ATrash::StaticClass();
	}
	struct Z_Construct_UClass_ATrash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_plane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_plane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrash_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrash_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Trash.h" },
		{ "ModuleRelativePath", "Public/Trash.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrash_Statics::NewProp_cube_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Trash.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATrash_Statics::NewProp_cube = { "cube", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrash, cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrash_Statics::NewProp_cube_MetaData), Z_Construct_UClass_ATrash_Statics::NewProp_cube_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrash_Statics::NewProp_plane_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Trash.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATrash_Statics::NewProp_plane = { "plane", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrash, plane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrash_Statics::NewProp_plane_MetaData), Z_Construct_UClass_ATrash_Statics::NewProp_plane_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrash_Statics::NewProp_cube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrash_Statics::NewProp_plane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrash_Statics::ClassParams = {
		&ATrash::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrash_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrash_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrash_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrash_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrash_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATrash()
	{
		if (!Z_Registration_Info_UClass_ATrash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrash.OuterSingleton, Z_Construct_UClass_ATrash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrash.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<ATrash>()
	{
		return ATrash::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrash);
	ATrash::~ATrash() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Trash_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Trash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrash, ATrash::StaticClass, TEXT("ATrash"), &Z_Registration_Info_UClass_ATrash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrash), 1948459170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Trash_h_142845804(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Trash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Trash_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
