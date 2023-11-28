// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorManagedComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSLATE_3C_ActorManagedComponent_generated_h
#error "ActorManagedComponent.generated.h already included, missing '#pragma once' in ActorManagedComponent.h"
#endif
#define TRANSLATE_3C_ActorManagedComponent_generated_h

#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_SPARSE_DATA
#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_RPC_WRAPPERS
#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_ACCESSORS
#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorManagedComponent(); \
	friend struct Z_Construct_UClass_UActorManagedComponent_Statics; \
public: \
	DECLARE_CLASS(UActorManagedComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Translate_3C"), NO_API) \
	DECLARE_SERIALIZER(UActorManagedComponent)


#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUActorManagedComponent(); \
	friend struct Z_Construct_UClass_UActorManagedComponent_Statics; \
public: \
	DECLARE_CLASS(UActorManagedComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Translate_3C"), NO_API) \
	DECLARE_SERIALIZER(UActorManagedComponent)


#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorManagedComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorManagedComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorManagedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorManagedComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorManagedComponent(UActorManagedComponent&&); \
	NO_API UActorManagedComponent(const UActorManagedComponent&); \
public: \
	NO_API virtual ~UActorManagedComponent();


#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorManagedComponent(UActorManagedComponent&&); \
	NO_API UActorManagedComponent(const UActorManagedComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorManagedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorManagedComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorManagedComponent) \
	NO_API virtual ~UActorManagedComponent();


#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_17_PROLOG
#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_SPARSE_DATA \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_RPC_WRAPPERS \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_ACCESSORS \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_INCLASS \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_SPARSE_DATA \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_ACCESSORS \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRANSLATE_3C_API UClass* StaticClass<class UActorManagedComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Translate_3C_Source_Translate_3C_ActorManagedComponent_h


#define FOREACH_ENUM_ETYPECAMERA(op) \
	op(CameraFollow) \
	op(CameraOrbit) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
