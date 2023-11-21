// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManagerCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TRANSLATE_3C_ManagerCamera_generated_h
#error "ManagerCamera.generated.h already included, missing '#pragma once' in ManagerCamera.h"
#endif
#define TRANSLATE_3C_ManagerCamera_generated_h

#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_SPARSE_DATA
#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnCameraOrbit); \
	DECLARE_FUNCTION(execSpawnCameraFollow); \
	DECLARE_FUNCTION(execDisableCamera); \
	DECLARE_FUNCTION(execEnableCamera);


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnCameraOrbit); \
	DECLARE_FUNCTION(execSpawnCameraFollow); \
	DECLARE_FUNCTION(execDisableCamera); \
	DECLARE_FUNCTION(execEnableCamera);


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_ACCESSORS
#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManagerCamera(); \
	friend struct Z_Construct_UClass_UManagerCamera_Statics; \
public: \
	DECLARE_CLASS(UManagerCamera, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Translate_3C"), NO_API) \
	DECLARE_SERIALIZER(UManagerCamera)


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUManagerCamera(); \
	friend struct Z_Construct_UClass_UManagerCamera_Statics; \
public: \
	DECLARE_CLASS(UManagerCamera, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Translate_3C"), NO_API) \
	DECLARE_SERIALIZER(UManagerCamera)


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManagerCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManagerCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManagerCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManagerCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManagerCamera(UManagerCamera&&); \
	NO_API UManagerCamera(const UManagerCamera&); \
public: \
	NO_API virtual ~UManagerCamera();


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManagerCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManagerCamera(UManagerCamera&&); \
	NO_API UManagerCamera(const UManagerCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManagerCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManagerCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManagerCamera) \
	NO_API virtual ~UManagerCamera();


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_10_PROLOG
#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_SPARSE_DATA \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_RPC_WRAPPERS \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_ACCESSORS \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_INCLASS \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_SPARSE_DATA \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_ACCESSORS \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_INCLASS_NO_PURE_DECLS \
	FID_Translate_3C_Source_Translate_3C_ManagerCamera_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRANSLATE_3C_API UClass* StaticClass<class UManagerCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Translate_3C_Source_Translate_3C_ManagerCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
