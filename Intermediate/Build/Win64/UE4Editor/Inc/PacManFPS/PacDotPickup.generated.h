// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMANFPS_PacDotPickup_generated_h
#error "PacDotPickup.generated.h already included, missing '#pragma once' in PacDotPickup.h"
#endif
#define PACMANFPS_PacDotPickup_generated_h

#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_RPC_WRAPPERS
#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacDotPickup(); \
	friend PACMANFPS_API class UClass* Z_Construct_UClass_APacDotPickup(); \
public: \
	DECLARE_CLASS(APacDotPickup, APickup, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacManFPS"), NO_API) \
	DECLARE_SERIALIZER(APacDotPickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPacDotPickup(); \
	friend PACMANFPS_API class UClass* Z_Construct_UClass_APacDotPickup(); \
public: \
	DECLARE_CLASS(APacDotPickup, APickup, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PacManFPS"), NO_API) \
	DECLARE_SERIALIZER(APacDotPickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacDotPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacDotPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacDotPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacDotPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacDotPickup(APacDotPickup&&); \
	NO_API APacDotPickup(const APacDotPickup&); \
public:


#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacDotPickup(APacDotPickup&&); \
	NO_API APacDotPickup(const APacDotPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacDotPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacDotPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacDotPickup)


#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OscRate() { return STRUCT_OFFSET(APacDotPickup, OscRate); } \
	FORCEINLINE static uint32 __PPO__Amplitude() { return STRUCT_OFFSET(APacDotPickup, Amplitude); } \
	FORCEINLINE static uint32 __PPO__PointValue() { return STRUCT_OFFSET(APacDotPickup, PointValue); }


#define PacManFPS_Source_PacManFPS_PacDotPickup_h_12_PROLOG
#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_RPC_WRAPPERS \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_INCLASS \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacManFPS_Source_PacManFPS_PacDotPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_INCLASS_NO_PURE_DECLS \
	PacManFPS_Source_PacManFPS_PacDotPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacManFPS_Source_PacManFPS_PacDotPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
