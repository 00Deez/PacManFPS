// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMANFPS_PacManFPSCharacter_generated_h
#error "PacManFPSCharacter.generated.h already included, missing '#pragma once' in PacManFPSCharacter.h"
#endif
#define PACMANFPS_PacManFPSCharacter_generated_h

#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_RPC_WRAPPERS
#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacManFPSCharacter(); \
	friend PACMANFPS_API class UClass* Z_Construct_UClass_APacManFPSCharacter(); \
public: \
	DECLARE_CLASS(APacManFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacManFPS"), NO_API) \
	DECLARE_SERIALIZER(APacManFPSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPacManFPSCharacter(); \
	friend PACMANFPS_API class UClass* Z_Construct_UClass_APacManFPSCharacter(); \
public: \
	DECLARE_CLASS(APacManFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacManFPS"), NO_API) \
	DECLARE_SERIALIZER(APacManFPSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManFPSCharacter(APacManFPSCharacter&&); \
	NO_API APacManFPSCharacter(const APacManFPSCharacter&); \
public:


#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManFPSCharacter(APacManFPSCharacter&&); \
	NO_API APacManFPSCharacter(const APacManFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacManFPSCharacter)


#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APacManFPSCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APacManFPSCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APacManFPSCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APacManFPSCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APacManFPSCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APacManFPSCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APacManFPSCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APacManFPSCharacter, L_MotionController); }


#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_11_PROLOG
#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_RPC_WRAPPERS \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_INCLASS \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
	PacManFPS_Source_PacManFPS_PacManFPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacManFPS_Source_PacManFPS_PacManFPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
