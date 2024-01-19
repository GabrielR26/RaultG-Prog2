// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Corr_Guard/Corr_Path.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorr_Path() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACorr_Path();
	IA_CLEANER_API UClass* Z_Construct_UClass_ACorr_Path_NoRegister();
	IA_CLEANER_API UScriptStruct* Z_Construct_UScriptStruct_FLine();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Line;
class UScriptStruct* FLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Line.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Line.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLine, (UObject*)Z_Construct_UPackage__Script_IA_Cleaner(), TEXT("Line"));
	}
	return Z_Registration_Info_UScriptStruct_Line.OuterSingleton;
}
template<> IA_CLEANER_API UScriptStruct* StaticStruct<FLine>()
{
	return FLine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Corr_Guard/Corr_Path.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLine>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
		nullptr,
		&NewStructOps,
		"Line",
		nullptr,
		0,
		sizeof(FLine),
		alignof(FLine),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLine_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLine()
	{
		if (!Z_Registration_Info_UScriptStruct_Line.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Line.InnerSingleton, Z_Construct_UScriptStruct_FLine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Line.InnerSingleton;
	}
	void ACorr_Path::StaticRegisterNativesACorr_Path()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACorr_Path);
	UClass* Z_Construct_UClass_ACorr_Path_NoRegister()
	{
		return ACorr_Path::StaticClass();
	}
	struct Z_Construct_UClass_ACorr_Path_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACorr_Path_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorr_Path_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorr_Path_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Corr_Guard/Corr_Path.h" },
		{ "ModuleRelativePath", "Public/Corr_Guard/Corr_Path.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorr_Path_Statics::NewProp_spline_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Corr_Guard/Corr_Path.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACorr_Path_Statics::NewProp_spline = { "spline", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorr_Path, spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorr_Path_Statics::NewProp_spline_MetaData), Z_Construct_UClass_ACorr_Path_Statics::NewProp_spline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorr_Path_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Corr_Guard/Corr_Path.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACorr_Path_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorr_Path, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorr_Path_Statics::NewProp_target_MetaData), Z_Construct_UClass_ACorr_Path_Statics::NewProp_target_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorr_Path_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorr_Path_Statics::NewProp_spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorr_Path_Statics::NewProp_target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorr_Path_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorr_Path>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACorr_Path_Statics::ClassParams = {
		&ACorr_Path::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACorr_Path_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACorr_Path_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorr_Path_Statics::Class_MetaDataParams), Z_Construct_UClass_ACorr_Path_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorr_Path_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACorr_Path()
	{
		if (!Z_Registration_Info_UClass_ACorr_Path.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACorr_Path.OuterSingleton, Z_Construct_UClass_ACorr_Path_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACorr_Path.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<ACorr_Path>()
	{
		return ACorr_Path::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorr_Path);
	ACorr_Path::~ACorr_Path() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics::ScriptStructInfo[] = {
		{ FLine::StaticStruct, Z_Construct_UScriptStruct_FLine_Statics::NewStructOps, TEXT("Line"), &Z_Registration_Info_UScriptStruct_Line, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLine), 27201959U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACorr_Path, ACorr_Path::StaticClass, TEXT("ACorr_Path"), &Z_Registration_Info_UClass_ACorr_Path, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACorr_Path), 3652823638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_4158634983(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Corr_Guard_Corr_Path_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
