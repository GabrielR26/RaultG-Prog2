// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraMovements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraMovements() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraMovements();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraMovements_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraManagedComponent_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	void ACameraMovements::StaticRegisterNativesACameraMovements()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraMovements);
	UClass* Z_Construct_UClass_ACameraMovements_NoRegister()
	{
		return ACameraMovements::StaticClass();
	}
	struct Z_Construct_UClass_ACameraMovements_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cameraSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraManagedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cameraManagedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useDebug_MetaData[];
#endif
		static void NewProp_useDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_validDebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_validDebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noValidDebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_noValidDebugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraMovements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "CameraMovements.h" },
		{ "ModuleRelativePath", "CameraMovements.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::NewProp_target_MetaData[] = {
		{ "Category", "CameraMovements" },
		{ "ModuleRelativePath", "CameraMovements.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraMovements_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraMovements, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraSettings_MetaData[] = {
		{ "Category", "CameraMovements" },
		{ "ModuleRelativePath", "CameraMovements.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraSettings = { "cameraSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraMovements, cameraSettings), Z_Construct_UClass_UCameraSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraManagedComponent_MetaData[] = {
		{ "Category", "CameraMovements" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraMovements.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraManagedComponent = { "cameraManagedComponent", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraMovements, cameraManagedComponent), Z_Construct_UClass_UCameraManagedComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraManagedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraManagedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CameraMovements.h" },
	};
#endif
	void Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug_SetBit(void* Obj)
	{
		((ACameraMovements*)Obj)->useDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug = { "useDebug", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACameraMovements), &Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::NewProp_validDebugColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CameraMovements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraMovements_Statics::NewProp_validDebugColor = { "validDebugColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraMovements, validDebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::NewProp_validDebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::NewProp_validDebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMovements_Statics::NewProp_noValidDebugColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "CameraMovements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraMovements_Statics::NewProp_noValidDebugColor = { "noValidDebugColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraMovements, noValidDebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::NewProp_noValidDebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::NewProp_noValidDebugColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraMovements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMovements_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMovements_Statics::NewProp_cameraManagedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMovements_Statics::NewProp_useDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMovements_Statics::NewProp_validDebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMovements_Statics::NewProp_noValidDebugColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraMovements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraMovements>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraMovements_Statics::ClassParams = {
		&ACameraMovements::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraMovements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraMovements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraMovements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraMovements()
	{
		if (!Z_Registration_Info_UClass_ACameraMovements.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraMovements.OuterSingleton, Z_Construct_UClass_ACameraMovements_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraMovements.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<ACameraMovements>()
	{
		return ACameraMovements::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraMovements);
	ACameraMovements::~ACameraMovements() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraMovements_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraMovements_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraMovements, ACameraMovements::StaticClass, TEXT("ACameraMovements"), &Z_Registration_Info_UClass_ACameraMovements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraMovements), 624546593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraMovements_h_567776606(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraMovements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraMovements_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
