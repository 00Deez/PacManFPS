// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PacDotPickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacDotPickup() {}
// Cross Module References
	PACMANFPS_API UClass* Z_Construct_UClass_APacDotPickup_NoRegister();
	PACMANFPS_API UClass* Z_Construct_UClass_APacDotPickup();
	PACMANFPS_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_PacManFPS();
// End Cross Module References
	void APacDotPickup::StaticRegisterNativesAPacDotPickup()
	{
	}
	UClass* Z_Construct_UClass_APacDotPickup_NoRegister()
	{
		return APacDotPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_APacDotPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickup();
			Z_Construct_UPackage__Script_PacManFPS();
			OuterClass = APacDotPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Amplitude = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Amplitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Amplitude, APacDotPickup), 0x0040000000000001);
				UProperty* NewProp_OscRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OscRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OscRate, APacDotPickup), 0x0040000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<APacDotPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PacDotPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PacDotPickup.h"));
				MetaData->SetValue(NewProp_Amplitude, TEXT("Category"), TEXT("PacDotPickup"));
				MetaData->SetValue(NewProp_Amplitude, TEXT("ModuleRelativePath"), TEXT("PacDotPickup.h"));
				MetaData->SetValue(NewProp_OscRate, TEXT("Category"), TEXT("PacDotPickup"));
				MetaData->SetValue(NewProp_OscRate, TEXT("ModuleRelativePath"), TEXT("PacDotPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacDotPickup, 1526273809);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacDotPickup(Z_Construct_UClass_APacDotPickup, &APacDotPickup::StaticClass, TEXT("/Script/PacManFPS"), TEXT("APacDotPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacDotPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
