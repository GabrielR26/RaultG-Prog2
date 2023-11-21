// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translate_3C/CameraManagedComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraManagedComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_ACameraMovements_NoRegister();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraManagedComponent();
	TRANSLATE_3C_API UClass* Z_Construct_UClass_UCameraManagedComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Translate_3C();
// End Cross Module References
	DEFINE_FUNCTION(UCameraManagedComponent::execRemoveCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraManagedComponent::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraManagedComponent::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UCameraManagedComponent::StaticRegisterNativesUCameraManagedComponent()
	{
		UClass* Class = UCameraManagedComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UCameraManagedComponent::execDisable },
			{ "Enable", &UCameraManagedComponent::execEnable },
			{ "RemoveCamera", &UCameraManagedComponent::execRemoveCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraManagedComponent_Disable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraManagedComponent_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraManagedComponent_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraManagedComponent, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraManagedComponent_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraManagedComponent_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraManagedComponent_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraManagedComponent_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraManagedComponent_Enable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraManagedComponent_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraManagedComponent_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraManagedComponent, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraManagedComponent_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraManagedComponent_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraManagedComponent_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraManagedComponent_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraManagedComponent, nullptr, "RemoveCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraManagedComponent);
	UClass* Z_Construct_UClass_UCameraManagedComponent_NoRegister()
	{
		return UCameraManagedComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraManagedComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cameraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isManaged_MetaData[];
#endif
		static void NewProp_isManaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isManaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraManagedComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Translate_3C,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraManagedComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraManagedComponent_Disable, "Disable" }, // 4286949986
		{ &Z_Construct_UFunction_UCameraManagedComponent_Enable, "Enable" }, // 3906223681
		{ &Z_Construct_UFunction_UCameraManagedComponent_RemoveCamera, "RemoveCamera" }, // 702528466
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraManagedComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CameraManagedComponent.h" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_id_MetaData[] = {
		{ "Category", "CameraManagedComponent" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraManagedComponent, id), METADATA_PARAMS(Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_cameraSystem_MetaData[] = {
		{ "Category", "CameraManagedComponent" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_cameraSystem = { "cameraSystem", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraManagedComponent, cameraSystem), Z_Construct_UClass_ACameraMovements_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_cameraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_cameraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CameraManagedComponent" },
		{ "ModuleRelativePath", "CameraManagedComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged_SetBit(void* Obj)
	{
		((UCameraManagedComponent*)Obj)->isManaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged = { "isManaged", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraManagedComponent), &Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraManagedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_cameraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManagedComponent_Statics::NewProp_isManaged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraManagedComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraManagedComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraManagedComponent_Statics::ClassParams = {
		&UCameraManagedComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraManagedComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagedComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraManagedComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagedComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraManagedComponent()
	{
		if (!Z_Registration_Info_UClass_UCameraManagedComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraManagedComponent.OuterSingleton, Z_Construct_UClass_UCameraManagedComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraManagedComponent.OuterSingleton;
	}
	template<> TRANSLATE_3C_API UClass* StaticClass<UCameraManagedComponent>()
	{
		return UCameraManagedComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraManagedComponent);
	UCameraManagedComponent::~UCameraManagedComponent() {}
	struct Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraManagedComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraManagedComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraManagedComponent, UCameraManagedComponent::StaticClass, TEXT("UCameraManagedComponent"), &Z_Registration_Info_UClass_UCameraManagedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraManagedComponent), 218690081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraManagedComponent_h_3628755491(TEXT("/Script/Translate_3C"),
		Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraManagedComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Translate_3C_Source_Translate_3C_CameraManagedComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
