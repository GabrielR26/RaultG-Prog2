// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/ManagerCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagerCamera() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraFollow_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraOrbit_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraManagedComponent_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UManagerCamera();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UManagerCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	DEFINE_FUNCTION(UManagerCamera::execSpawnCameraOrbit)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__id);
		P_GET_OBJECT(AActor,Z_Param__target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCameraOrbit(Z_Param__id,Z_Param__target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManagerCamera::execSpawnCameraFollow)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__id);
		P_GET_OBJECT(AActor,Z_Param__target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCameraFollow(Z_Param__id,Z_Param__target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManagerCamera::execDisableCamera)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCamera(Z_Param__id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManagerCamera::execEnableCamera)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCamera(Z_Param__id);
		P_NATIVE_END;
	}
	void UManagerCamera::StaticRegisterNativesUManagerCamera()
	{
		UClass* Class = UManagerCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableCamera", &UManagerCamera::execDisableCamera },
			{ "EnableCamera", &UManagerCamera::execEnableCamera },
			{ "SpawnCameraFollow", &UManagerCamera::execSpawnCameraFollow },
			{ "SpawnCameraOrbit", &UManagerCamera::execSpawnCameraOrbit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics
	{
		struct ManagerCamera_eventDisableCamera_Parms
		{
			FString _id;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManagerCamera_eventDisableCamera_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::NewProp__id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManagerCamera, nullptr, "DisableCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::ManagerCamera_eventDisableCamera_Parms), Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManagerCamera_DisableCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerCamera_DisableCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics
	{
		struct ManagerCamera_eventEnableCamera_Parms
		{
			FString _id;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManagerCamera_eventEnableCamera_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::NewProp__id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManagerCamera, nullptr, "EnableCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::ManagerCamera_eventEnableCamera_Parms), Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManagerCamera_EnableCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerCamera_EnableCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics
	{
		struct ManagerCamera_eventSpawnCameraFollow_Parms
		{
			FString _id;
			AActor* _target;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__id;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManagerCamera_eventSpawnCameraFollow_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManagerCamera_eventSpawnCameraFollow_Parms, _target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::NewProp__id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::NewProp__target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManagerCamera, nullptr, "SpawnCameraFollow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::ManagerCamera_eventSpawnCameraFollow_Parms), Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics
	{
		struct ManagerCamera_eventSpawnCameraOrbit_Parms
		{
			FString _id;
			AActor* _target;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__id;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManagerCamera_eventSpawnCameraOrbit_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManagerCamera_eventSpawnCameraOrbit_Parms, _target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::NewProp__id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::NewProp__target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManagerCamera, nullptr, "SpawnCameraOrbit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::ManagerCamera_eventSpawnCameraOrbit_Parms), Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManagerCamera);
	UClass* Z_Construct_UClass_UManagerCamera_NoRegister()
	{
		return UManagerCamera::StaticClass();
	}
	struct Z_Construct_UClass_UManagerCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameras_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_cameras_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameras_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_cameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraFollowRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraFollowRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraOrbitRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraOrbitRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManagerCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManagerCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManagerCamera_DisableCamera, "DisableCamera" }, // 3643357736
		{ &Z_Construct_UFunction_UManagerCamera_EnableCamera, "EnableCamera" }, // 2913997955
		{ &Z_Construct_UFunction_UManagerCamera_SpawnCameraFollow, "SpawnCameraFollow" }, // 3923024514
		{ &Z_Construct_UFunction_UManagerCamera_SpawnCameraOrbit, "SpawnCameraOrbit" }, // 3896647025
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManagerCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManagerCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_ValueProp = { "cameras", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCameraManagedComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_Key_KeyProp = { "cameras_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_MetaData[] = {
		{ "Category", "ManagerCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras = { "cameras", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManagerCamera, cameras), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraFollowRef_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraFollowRef = { "cameraFollowRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManagerCamera, cameraFollowRef), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraFollow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraFollowRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraFollowRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraOrbitRef_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "ManagerCamera.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraOrbitRef = { "cameraOrbitRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManagerCamera, cameraOrbitRef), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraOrbit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraOrbitRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraOrbitRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManagerCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraFollowRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerCamera_Statics::NewProp_cameraOrbitRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManagerCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManagerCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManagerCamera_Statics::ClassParams = {
		&UManagerCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManagerCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManagerCamera_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManagerCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManagerCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManagerCamera()
	{
		if (!Z_Registration_Info_UClass_UManagerCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManagerCamera.OuterSingleton, Z_Construct_UClass_UManagerCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManagerCamera.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UManagerCamera>()
	{
		return UManagerCamera::StaticClass();
	}
	UManagerCamera::UManagerCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManagerCamera);
	UManagerCamera::~UManagerCamera() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManagerCamera, UManagerCamera::StaticClass, TEXT("UManagerCamera"), &Z_Registration_Info_UClass_UManagerCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManagerCamera), 1228344934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_300164510(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
