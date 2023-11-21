// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/ActorManagedComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorManagedComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UActorManagedComponent();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UActorManagedComponent_NoRegister();
	TRANSLATE_3C_API UEnum* Z_Construct_UEnum_Translate_3C_ETypeCamera();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeCamera;
	static UEnum* ETypeCamera_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypeCamera.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypeCamera.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Translate_3C_ETypeCamera, (UObject*)Z_Construct_UPackage__Script_Translate_3C(), TEXT("ETypeCamera"));
		}
		return Z_Registration_Info_UEnum_ETypeCamera.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UEnum* StaticEnum<ETypeCamera>()
	{
		return ETypeCamera_StaticEnum();
	}
	struct Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::Enumerators[] = {
		{ "CameraFollow", (int64)CameraFollow },
		{ "CameraOrbit", (int64)CameraOrbit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::Enum_MetaDataParams[] = {
		{ "CameraFollow.Name", "CameraFollow" },
		{ "CameraOrbit.Name", "CameraOrbit" },
		{ "ModuleRelativePath", "ActorManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Translate_3C,
		nullptr,
		"ETypeCamera",
		"ETypeCamera",
		Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Translate_3C_ETypeCamera()
	{
		if (!Z_Registration_Info_UEnum_ETypeCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeCamera.InnerSingleton, Z_Construct_UEnum_Translate_3C_ETypeCamera_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypeCamera.InnerSingleton;
	}
	void UActorManagedComponent::StaticRegisterNativesUActorManagedComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorManagedComponent);
	UClass* Z_Construct_UClass_UActorManagedComponent_NoRegister()
	{
		return UActorManagedComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorManagedComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_cameraType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isManaged_MetaData[];
#endif
		static void NewProp_isManaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isManaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorManagedComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorManagedComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorManagedComponent.h" },
		{ "ModuleRelativePath", "ActorManagedComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_id_MetaData[] = {
		{ "Category", "ActorManagedComponent" },
		{ "ModuleRelativePath", "ActorManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorManagedComponent, id), METADATA_PARAMS(Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_cameraType_MetaData[] = {
		{ "Category", "ActorManagedComponent" },
		{ "ModuleRelativePath", "ActorManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_cameraType = { "cameraType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorManagedComponent, cameraType), Z_Construct_UEnum_Translate_3C_ETypeCamera, METADATA_PARAMS(Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_cameraType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_cameraType_MetaData)) }; // 3553706320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged_MetaData[] = {
		{ "Category", "ActorManagedComponent" },
		{ "ModuleRelativePath", "ActorManagedComponent.h" },
	};
#endif
	void Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged_SetBit(void* Obj)
	{
		((UActorManagedComponent*)Obj)->isManaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged = { "isManaged", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorManagedComponent), &Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorManagedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_cameraType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorManagedComponent_Statics::NewProp_isManaged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorManagedComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorManagedComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorManagedComponent_Statics::ClassParams = {
		&UActorManagedComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorManagedComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorManagedComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorManagedComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorManagedComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorManagedComponent()
	{
		if (!Z_Registration_Info_UClass_UActorManagedComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorManagedComponent.OuterSingleton, Z_Construct_UClass_UActorManagedComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorManagedComponent.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UActorManagedComponent>()
	{
		return UActorManagedComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorManagedComponent);
	UActorManagedComponent::~UActorManagedComponent() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics::EnumInfo[] = {
		{ ETypeCamera_StaticEnum, TEXT("ETypeCamera"), &Z_Registration_Info_UEnum_ETypeCamera, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3553706320U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorManagedComponent, UActorManagedComponent::StaticClass, TEXT("UActorManagedComponent"), &Z_Registration_Info_UClass_UActorManagedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorManagedComponent), 2535643356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_1679341707(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
