// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/PlayerAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerAnimInstance::execSetHorizontalSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalSpeed(Z_Param__speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execSetVerticalSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalSpeed(Z_Param__speed);
		P_NATIVE_END;
	}
	void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
	{
		UClass* Class = UPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalSpeed", &UPlayerAnimInstance::execSetHorizontalSpeed },
			{ "SetVerticalSpeed", &UPlayerAnimInstance::execSetVerticalSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics
	{
		struct PlayerAnimInstance_eventSetHorizontalSpeed_Parms
		{
			float _speed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventSetHorizontalSpeed_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "SetHorizontalSpeed", nullptr, nullptr, Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::PlayerAnimInstance_eventSetHorizontalSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::PlayerAnimInstance_eventSetHorizontalSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics
	{
		struct PlayerAnimInstance_eventSetVerticalSpeed_Parms
		{
			float _speed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventSetVerticalSpeed_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "SetVerticalSpeed", nullptr, nullptr, Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::PlayerAnimInstance_eventSetVerticalSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::PlayerAnimInstance_eventSetVerticalSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
	UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verticalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_verticalSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_horizontalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_horizontalSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_SetHorizontalSpeed, "SetHorizontalSpeed" }, // 2290200583
		{ &Z_Construct_UFunction_UPlayerAnimInstance_SetVerticalSpeed, "SetVerticalSpeed" }, // 1600996331
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Guard/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Guard/PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_verticalSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Guard/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_verticalSpeed = { "verticalSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, verticalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_verticalSpeed_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_verticalSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_horizontalSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Guard/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_horizontalSpeed = { "horizontalSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, horizontalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_horizontalSpeed_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_horizontalSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_verticalSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_horizontalSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
		&UPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UPlayerAnimInstance>()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
	UPlayerAnimInstance::~UPlayerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PlayerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 3976695376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PlayerAnimInstance_h_2979911463(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
