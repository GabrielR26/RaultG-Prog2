// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Guard/CustomPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IA_CLEANER_CustomPlayer_generated_h
#error "CustomPlayer.generated.h already included, missing '#pragma once' in CustomPlayer.h"
#endif
#define IA_CLEANER_CustomPlayer_generated_h

#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_15_DELEGATE \
static void FOnMoveVertical_DelegateWrapper(const FMulticastScriptDelegate& OnMoveVertical, float _speed);


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_17_DELEGATE \
static void FOnMoveHorizontal_DelegateWrapper(const FMulticastScriptDelegate& OnMoveHorizontal, float _speed);


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_SPARSE_DATA
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_ACCESSORS
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPlayer(); \
	friend struct Z_Construct_UClass_ACustomPlayer_Statics; \
public: \
	DECLARE_CLASS(ACustomPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IA_Cleaner"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayer)


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayer(ACustomPlayer&&); \
	NO_API ACustomPlayer(const ACustomPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomPlayer) \
	NO_API virtual ~ACustomPlayer();


#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_10_PROLOG
#define FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_SPARSE_DATA \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_ACCESSORS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_INCLASS_NO_PURE_DECLS \
	FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IA_CLEANER_API UClass* StaticClass<class ACustomPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IA_Cleaner_Source_IA_Cleaner_Public_Guard_CustomPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
