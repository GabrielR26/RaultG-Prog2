// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Drone/Transition/EnemySpottedTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpottedTransition() {}
// Cross Module References
	IA_CLEANER_API UClass* Z_Construct_UClass_UBaseTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UEnemySpottedTransition();
	IA_CLEANER_API UClass* Z_Construct_UClass_UEnemySpottedTransition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UEnemySpottedTransition::StaticRegisterNativesUEnemySpottedTransition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemySpottedTransition);
	UClass* Z_Construct_UClass_UEnemySpottedTransition_NoRegister()
	{
		return UEnemySpottedTransition::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySpottedTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySpottedTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTransition,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpottedTransition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpottedTransition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Drone/Transition/EnemySpottedTransition.h" },
		{ "ModuleRelativePath", "Public/Drone/Transition/EnemySpottedTransition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySpottedTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySpottedTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemySpottedTransition_Statics::ClassParams = {
		&UEnemySpottedTransition::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpottedTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemySpottedTransition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemySpottedTransition()
	{
		if (!Z_Registration_Info_UClass_UEnemySpottedTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemySpottedTransition.OuterSingleton, Z_Construct_UClass_UEnemySpottedTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemySpottedTransition.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UEnemySpottedTransition>()
	{
		return UEnemySpottedTransition::StaticClass();
	}
	UEnemySpottedTransition::UEnemySpottedTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySpottedTransition);
	UEnemySpottedTransition::~UEnemySpottedTransition() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Transition_EnemySpottedTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Transition_EnemySpottedTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemySpottedTransition, UEnemySpottedTransition::StaticClass, TEXT("UEnemySpottedTransition"), &Z_Registration_Info_UClass_UEnemySpottedTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemySpottedTransition), 4146656381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Transition_EnemySpottedTransition_h_1569213276(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Transition_EnemySpottedTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_Transition_EnemySpottedTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
