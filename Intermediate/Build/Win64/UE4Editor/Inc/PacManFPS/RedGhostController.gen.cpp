// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RedGhostController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedGhostController() {}
// Cross Module References
	PACMANFPS_API UClass* Z_Construct_UClass_ARedGhostController_NoRegister();
	PACMANFPS_API UClass* Z_Construct_UClass_ARedGhostController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PacManFPS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARedGhostController::StaticRegisterNativesARedGhostController()
	{
	}
	UClass* Z_Construct_UClass_ARedGhostController_NoRegister()
	{
		return ARedGhostController::StaticClass();
	}
	UClass* Z_Construct_UClass_ARedGhostController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_PacManFPS();
			OuterClass = ARedGhostController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(enteringIntersection, ARedGhostController);
				UProperty* NewProp_enteringIntersection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("enteringIntersection"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(enteringIntersection, ARedGhostController), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(enteringIntersection, ARedGhostController), sizeof(bool), true);
				UProperty* NewProp_speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(speed, ARedGhostController), 0x0010000000000001);
				UProperty* NewProp_nextTile = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("nextTile"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(nextTile, ARedGhostController), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_currentLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("currentLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(currentLocation, ARedGhostController), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_RedGhostMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RedGhostMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RedGhostMesh, ARedGhostController), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ARedGhostController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(NewProp_enteringIntersection, TEXT("Category"), TEXT("RedGhostController"));
				MetaData->SetValue(NewProp_enteringIntersection, TEXT("ModuleRelativePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(NewProp_speed, TEXT("Category"), TEXT("RedGhostController"));
				MetaData->SetValue(NewProp_speed, TEXT("ModuleRelativePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(NewProp_nextTile, TEXT("Category"), TEXT("RedGhostController"));
				MetaData->SetValue(NewProp_nextTile, TEXT("ModuleRelativePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(NewProp_currentLocation, TEXT("Category"), TEXT("RedGhostController"));
				MetaData->SetValue(NewProp_currentLocation, TEXT("ModuleRelativePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("Category"), TEXT("RedGhostController"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("ModuleRelativePath"), TEXT("RedGhostController.h"));
				MetaData->SetValue(NewProp_RedGhostMesh, TEXT("ToolTip"), TEXT("The Static Mesh for the RedGhost"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedGhostController, 4266603833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedGhostController(Z_Construct_UClass_ARedGhostController, &ARedGhostController::StaticClass, TEXT("/Script/PacManFPS"), TEXT("ARedGhostController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedGhostController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
