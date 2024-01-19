// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IA_CLEANER_MoveComponent_generated_h
#error "MoveComponent.generated.h already included, missing '#pragma once' in MoveComponent.h"
#endif
#define IA_CLEANER_MoveComponent_generated_h

#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_15_DELEGATE \
static void FOnReachedDestination_DelegateWrapper(const FMulticastScriptDelegate& OnReachedDestination);


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_17_DELEGATE \
static void FOnMove_DelegateWrapper(const FMulticastScriptDelegate& OnMove, float _speed);


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_SPARSE_DATA
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_ACCESSORS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveComponent(); \
	friend struct Z_Construct_UClass_UMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UMoveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IA_Cleaner"), NO_API) \
	DECLARE_SERIALIZER(UMoveComponent)


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveComponent(UMoveComponent&&); \
	NO_API UMoveComponent(const UMoveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoveComponent) \
	NO_API virtual ~UMoveComponent();


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_10_PROLOG
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_SPARSE_DATA \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_ACCESSORS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IA_CLEANER_API UClass* StaticClass<class UMoveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IA_Cleaner_Source_IA_Cleaner_Public_MoveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
