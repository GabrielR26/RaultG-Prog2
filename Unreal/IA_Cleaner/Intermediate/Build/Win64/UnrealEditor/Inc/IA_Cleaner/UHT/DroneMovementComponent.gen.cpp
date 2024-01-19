// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IA_Cleaner/Public/Drone/DroneMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UDroneMovementComponent();
	IA_CLEANER_API UClass* Z_Construct_UClass_UDroneMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IA_Cleaner();
// End Cross Module References
	void UDroneMovementComponent::StaticRegisterNativesUDroneMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneMovementComponent);
	UClass* Z_Construct_UClass_UDroneMovementComponent_NoRegister()
	{
		return UDroneMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDroneMovementComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_droneDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_droneDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_droneHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_droneHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_droneSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_droneSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IA_Cleaner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Drone/DroneMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Drone/DroneMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Drone/DroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneMovementComponent, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_target_MetaData), Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneDistance_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Drone/DroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneDistance = { "droneDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneMovementComponent, droneDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneDistance_MetaData), Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneHeight_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Drone/DroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneHeight = { "droneHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneMovementComponent, droneHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneHeight_MetaData), Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneSpeed_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Drone/DroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneSpeed = { "droneSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneMovementComponent, droneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneSpeed_MetaData), Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDroneMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneMovementComponent_Statics::NewProp_droneSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneMovementComponent_Statics::ClassParams = {
		&UDroneMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDroneMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroneMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDroneMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UDroneMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneMovementComponent.OuterSingleton, Z_Construct_UClass_UDroneMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneMovementComponent.OuterSingleton;
	}
	template<> IA_CLEANER_API UClass* StaticClass<UDroneMovementComponent>()
	{
		return UDroneMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneMovementComponent);
	UDroneMovementComponent::~UDroneMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_DroneMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_DroneMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneMovementComponent, UDroneMovementComponent::StaticClass, TEXT("UDroneMovementComponent"), &Z_Registration_Info_UClass_UDroneMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneMovementComponent), 764366424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_DroneMovementComponent_h_3200321737(TEXT("/Script/IA_Cleaner"),
		Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_DroneMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IA_Cleaner_Source_IA_Cleaner_Public_Drone_DroneMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
