// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/Transition/WaitRandomTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitRandomTransition() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UWaitRandomTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UWaitRandomTransition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(UWaitRandomTransition::execWaitEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaitRandomTransition::execWaitOnWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitOnWaypoint();
		P_NATIVE_END;
	}
	void UWaitRandomTransition::StaticRegisterNativesUWaitRandomTransition()
	{
		UClass* Class = UWaitRandomTransition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitEnd", &UWaitRandomTransition::execWaitEnd },
			{ "WaitOnWaypoint", &UWaitRandomTransition::execWaitOnWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaitRandomTransition_WaitEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitRandomTransition_WaitEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/Transition/WaitRandomTransition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitRandomTransition_WaitEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaitRandomTransition, nullptr, "WaitEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitRandomTransition_WaitEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaitRandomTransition_WaitEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWaitRandomTransition_WaitEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitRandomTransition_WaitEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/Transition/WaitRandomTransition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaitRandomTransition, nullptr, "WaitOnWaypoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaitRandomTransition);
	UClass* Z_Construct_UClass_UWaitRandomTransition_NoRegister()
	{
		return UWaitRandomTransition::StaticClass();
	}
	struct Z_Construct_UClass_UWaitRandomTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxWaitTimeOnWaypoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxWaitTimeOnWaypoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaitRandomTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTransition,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRandomTransition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaitRandomTransition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaitRandomTransition_WaitEnd, "WaitEnd" }, // 2237793762
		{ &Z_Construct_UFunction_UWaitRandomTransition_WaitOnWaypoint, "WaitOnWaypoint" }, // 2163364134
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRandomTransition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitRandomTransition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/Transition/WaitRandomTransition.h" },
		{ "ModuleRelativePath", "Public/Guard/Transition/WaitRandomTransition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitRandomTransition_Statics::NewProp_maxWaitTimeOnWaypoint_MetaData[] = {
		{ "Category", "WaitRandomTransition" },
		{ "ModuleRelativePath", "Public/Guard/Transition/WaitRandomTransition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaitRandomTransition_Statics::NewProp_maxWaitTimeOnWaypoint = { "maxWaitTimeOnWaypoint", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaitRandomTransition, maxWaitTimeOnWaypoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRandomTransition_Statics::NewProp_maxWaitTimeOnWaypoint_MetaData), Z_Construct_UClass_UWaitRandomTransition_Statics::NewProp_maxWaitTimeOnWaypoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaitRandomTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitRandomTransition_Statics::NewProp_maxWaitTimeOnWaypoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaitRandomTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitRandomTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaitRandomTransition_Statics::ClassParams = {
		&UWaitRandomTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaitRandomTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRandomTransition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRandomTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaitRandomTransition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaitRandomTransition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWaitRandomTransition()
	{
		if (!Z_Registration_Info_UClass_UWaitRandomTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaitRandomTransition.OuterSingleton, Z_Construct_UClass_UWaitRandomTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaitRandomTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UWaitRandomTransition>()
	{
		return UWaitRandomTransition::StaticClass();
	}
	UWaitRandomTransition::UWaitRandomTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaitRandomTransition);
	UWaitRandomTransition::~UWaitRandomTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRandomTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRandomTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaitRandomTransition, UWaitRandomTransition::StaticClass, TEXT("UWaitRandomTransition"), &Z_Registration_Info_UClass_UWaitRandomTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaitRandomTransition), 1126799418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRandomTransition_h_2838988103(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRandomTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_WaitRandomTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
