// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Guard/Transition/PlayerInSightTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInSightTransition() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_AGuard_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPlayerInSightTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UPlayerInSightTransition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInSightTransition::execPlayerInSight)
	{
		P_GET_UBOOL(Z_Param__isPlayerInSight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerInSight(Z_Param__isPlayerInSight);
		P_NATIVE_END;
	}
	void UPlayerInSightTransition::StaticRegisterNativesUPlayerInSightTransition()
	{
		UClass* Class = UPlayerInSightTransition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerInSight", &UPlayerInSightTransition::execPlayerInSight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics
	{
		struct PlayerInSightTransition_eventPlayerInSight_Parms
		{
			bool _isPlayerInSight;
		};
		static void NewProp__isPlayerInSight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__isPlayerInSight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::NewProp__isPlayerInSight_SetBit(void* Obj)
	{
		((PlayerInSightTransition_eventPlayerInSight_Parms*)Obj)->_isPlayerInSight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::NewProp__isPlayerInSight = { "_isPlayerInSight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerInSightTransition_eventPlayerInSight_Parms), &Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::NewProp__isPlayerInSight_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::NewProp__isPlayerInSight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Guard/Transition/PlayerInSightTransition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInSightTransition, nullptr, "PlayerInSight", nullptr, nullptr, Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::PlayerInSightTransition_eventPlayerInSight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::PlayerInSightTransition_eventPlayerInSight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInSightTransition);
	UClass* Z_Construct_UClass_UPlayerInSightTransition_NoRegister()
	{
		return UPlayerInSightTransition::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInSightTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_guard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInSightTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTransition,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInSightTransition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInSightTransition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInSightTransition_PlayerInSight, "PlayerInSight" }, // 1070793438
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInSightTransition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInSightTransition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Guard/Transition/PlayerInSightTransition.h" },
		{ "ModuleRelativePath", "Public/Guard/Transition/PlayerInSightTransition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInSightTransition_Statics::NewProp_guard_MetaData[] = {
		{ "Category", "PlayerInSightTransition" },
		{ "ModuleRelativePath", "Public/Guard/Transition/PlayerInSightTransition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerInSightTransition_Statics::NewProp_guard = { "guard", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInSightTransition, guard), Z_Construct_UClass_AGuard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInSightTransition_Statics::NewProp_guard_MetaData), Z_Construct_UClass_UPlayerInSightTransition_Statics::NewProp_guard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInSightTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInSightTransition_Statics::NewProp_guard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInSightTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInSightTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInSightTransition_Statics::ClassParams = {
		&UPlayerInSightTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInSightTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInSightTransition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInSightTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInSightTransition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInSightTransition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerInSightTransition()
	{
		if (!Z_Registration_Info_UClass_UPlayerInSightTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInSightTransition.OuterSingleton, Z_Construct_UClass_UPlayerInSightTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInSightTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UPlayerInSightTransition>()
	{
		return UPlayerInSightTransition::StaticClass();
	}
	UPlayerInSightTransition::UPlayerInSightTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInSightTransition);
	UPlayerInSightTransition::~UPlayerInSightTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_PlayerInSightTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_PlayerInSightTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInSightTransition, UPlayerInSightTransition::StaticClass, TEXT("UPlayerInSightTransition"), &Z_Registration_Info_UClass_UPlayerInSightTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInSightTransition), 4258109233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_PlayerInSightTransition_h_763395494(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_PlayerInSightTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_Transition_PlayerInSightTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
