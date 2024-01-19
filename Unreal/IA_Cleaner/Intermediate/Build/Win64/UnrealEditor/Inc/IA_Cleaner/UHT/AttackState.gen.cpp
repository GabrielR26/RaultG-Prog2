// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Drone/State/AttackState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackState() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UAttackState();
	IA_CLEANER_API UClass* Z_Construct_UClass_UAttackState_NoRegister();
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseState();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UAttackState::StaticRegisterNativesUAttackState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackState);
	UClass* Z_Construct_UClass_UAttackState_NoRegister()
	{
		return UAttackState::StaticClass();
	}
	struct Z_Construct_UClass_UAttackState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Drone/State/AttackState.h" },
		{ "ModuleRelativePath", "Public/Drone/State/AttackState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackState_Statics::ClassParams = {
		&UAttackState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAttackState()
	{
		if (!Z_Registration_Info_UClass_UAttackState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackState.OuterSingleton, Z_Construct_UClass_UAttackState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackState.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UAttackState>()
	{
		return UAttackState::StaticClass();
	}
	UAttackState::UAttackState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackState);
	UAttackState::~UAttackState() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_State_AttackState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_State_AttackState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackState, UAttackState::StaticClass, TEXT("UAttackState"), &Z_Registration_Info_UClass_UAttackState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackState), 1597628861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_State_AttackState_h_3308458892(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_State_AttackState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_State_AttackState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
