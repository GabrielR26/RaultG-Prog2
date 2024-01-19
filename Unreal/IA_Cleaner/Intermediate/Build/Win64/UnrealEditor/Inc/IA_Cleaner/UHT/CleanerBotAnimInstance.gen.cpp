// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/CleanerBotAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanerBotAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	IA_CLEANER_API UClass* Z_Construct_UClass_UCleanerBotAnimInstance();
	IA_CLEANER_API UClass* Z_Construct_UClass_UCleanerBotAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(UCleanerBotAnimInstance::execSetSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param__speed);
		P_NATIVE_END;
	}
	void UCleanerBotAnimInstance::StaticRegisterNativesUCleanerBotAnimInstance()
	{
		UClass* Class = UCleanerBotAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSpeed", &UCleanerBotAnimInstance::execSetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics
	{
		struct CleanerBotAnimInstance_eventSetSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CleanerBotAnimInstance_eventSetSpeed_Parms, _speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::NewProp__speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CleanerBotAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanerBotAnimInstance, nullptr, "SetSpeed", nullptr, nullptr, Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::CleanerBotAnimInstance_eventSetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::CleanerBotAnimInstance_eventSetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanerBotAnimInstance);
	UClass* Z_Construct_UClass_UCleanerBotAnimInstance_NoRegister()
	{
		return UCleanerBotAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCleanerBotAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCleanerBotAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerBotAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCleanerBotAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCleanerBotAnimInstance_SetSpeed, "SetSpeed" }, // 1957144850
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerBotAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanerBotAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CleanerBotAnimInstance.h" },
		{ "ModuleRelativePath", "Public/CleanerBotAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanerBotAnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CleanerBotAnimInstance" },
		{ "ModuleRelativePath", "Public/CleanerBotAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCleanerBotAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCleanerBotAnimInstance, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerBotAnimInstance_Statics::NewProp_speed_MetaData), Z_Construct_UClass_UCleanerBotAnimInstance_Statics::NewProp_speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCleanerBotAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanerBotAnimInstance_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCleanerBotAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanerBotAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanerBotAnimInstance_Statics::ClassParams = {
		&UCleanerBotAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCleanerBotAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerBotAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerBotAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCleanerBotAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerBotAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCleanerBotAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UCleanerBotAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanerBotAnimInstance.OuterSingleton, Z_Construct_UClass_UCleanerBotAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCleanerBotAnimInstance.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UCleanerBotAnimInstance>()
	{
		return UCleanerBotAnimInstance::StaticClass();
	}
	UCleanerBotAnimInstance::UCleanerBotAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanerBotAnimInstance);
	UCleanerBotAnimInstance::~UCleanerBotAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBotAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBotAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCleanerBotAnimInstance, UCleanerBotAnimInstance::StaticClass, TEXT("UCleanerBotAnimInstance"), &Z_Registration_Info_UClass_UCleanerBotAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanerBotAnimInstance), 1042135016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBotAnimInstance_h_1576759024(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBotAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_CleanerBotAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
