// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RedGhost.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedGhost() {}
// Cross Module References
	PACMANFPS_API UClass* Z_Construct_UClass_ARedGhost_NoRegister();
	PACMANFPS_API UClass* Z_Construct_UClass_ARedGhost();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PacManFPS();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARedGhost::StaticRegisterNativesARedGhost()
	{
	}
	UClass* Z_Construct_UClass_ARedGhost_NoRegister()
	{
		return ARedGhost::StaticClass();
	}
	UClass* Z_Construct_UClass_ARedGhost()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_PacManFPS();
			OuterClass = ARedGhost::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_RedGhostMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RedGhostMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RedGhostMesh, ARedGhost), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ARedGhost> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RedGhost.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("RedGhost.h"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("Category"), TEXT("RedGhost"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("ModuleRelativePath"), TEXT("RedGhost.h"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("ToolTip"), TEXT("The Static Mesh for the RedGhost"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedGhost, 1118776044);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedGhost(Z_Construct_UClass_ARedGhost, &ARedGhost::StaticClass, TEXT("/Script/PacManFPS"), TEXT("ARedGhost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedGhost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
