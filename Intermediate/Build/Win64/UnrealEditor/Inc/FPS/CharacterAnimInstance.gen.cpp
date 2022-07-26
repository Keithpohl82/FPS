// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Character/CharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETurningInPlace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAnimInstance);
	UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
	{
		return UCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponEquipped_MetaData[];
#endif
		static void NewProp_bWeaponEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TurningInPlace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurningInPlace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TurningInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocallyControlled_MetaData[];
#endif
		static void NewProp_bLocallyControlled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocallyControlled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateRootBone_MetaData[];
#endif
		static void NewProp_bRotateRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bElimmed_MetaData[];
#endif
		static void NewProp_bElimmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bElimmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFABRIK_MetaData[];
#endif
		static void NewProp_bUseFABRIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFABRIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAimOffsets_MetaData[];
#endif
		static void NewProp_bUseAimOffsets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAimOffsets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransformRightHand_MetaData[];
#endif
		static void NewProp_bTransformRightHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformRightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldingTheFlag_MetaData[];
#endif
		static void NewProp_bHoldingTheFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldingTheFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/CharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MasterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MasterCharacter = { "MasterCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, MasterCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MasterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MasterCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bWeaponEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped = { "bWeaponEquipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bIsCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, YawOffset), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_YawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_YawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, Lean), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Yaw = { "AO_Yaw", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, AO_Yaw), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Pitch = { "AO_Pitch", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, AO_Pitch), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_LeftHandTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_LeftHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_LeftHandTransform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace = { "TurningInPlace", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, TurningInPlace), Z_Construct_UEnum_FPS_ETurningInPlace, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace_MetaData)) }; // 810090595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_RightHandRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_RightHandRotation = { "RightHandRotation", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimInstance, RightHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_RightHandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_RightHandRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bLocallyControlled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled = { "bLocallyControlled", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bRotateRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone = { "bRotateRootBone", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bElimmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed = { "bElimmed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bUseFABRIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK = { "bUseFABRIK", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bUseAimOffsets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets = { "bUseAimOffsets", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bTransformRightHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand = { "bTransformRightHand", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->bHoldingTheFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag = { "bHoldingTheFlag", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MasterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bWeaponEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Lean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_AO_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_LeftHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurningInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_RightHandRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bLocallyControlled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bRotateRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bElimmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseFABRIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bUseAimOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bTransformRightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHoldingTheFlag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams = {
		&UCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UCharacterAnimInstance>()
	{
		return UCharacterAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_CharacterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_CharacterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimInstance, UCharacterAnimInstance::StaticClass, TEXT("UCharacterAnimInstance"), &Z_Registration_Info_UClass_UCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimInstance), 2315076423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_CharacterAnimInstance_h_2540164003(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_CharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_CharacterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
