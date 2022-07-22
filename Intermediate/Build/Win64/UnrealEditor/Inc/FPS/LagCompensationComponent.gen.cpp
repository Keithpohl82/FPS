// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Components/LagCompensationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLagCompensationComponent() {}
// Cross Module References
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FFramePackage();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FShotgunServerSideRewindResult();
	FPS_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ULagCompensationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxInformation;
class UScriptStruct* FBoxInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxInformation, Z_Construct_UPackage__Script_FPS(), TEXT("BoxInformation"));
	}
	return Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FBoxInformation>()
{
	return FBoxInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"BoxInformation",
		sizeof(FBoxInformation),
		alignof(FBoxInformation),
		Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton, Z_Construct_UScriptStruct_FBoxInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FramePackage;
class UScriptStruct* FFramePackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFramePackage, Z_Construct_UPackage__Script_FPS(), TEXT("FramePackage"));
	}
	return Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FFramePackage>()
{
	return FFramePackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFramePackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxInfo_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoxInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitBoxInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFramePackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBoxInformation, METADATA_PARAMS(nullptr, 0) }; // 1821991443
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp = { "HitBoxInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, HitBoxInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData)) }; // 1821991443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, Character), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"FramePackage",
		sizeof(FFramePackage),
		alignof(FFramePackage),
		Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFramePackage()
	{
		if (!Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton, Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerSideRewindResult;
class UScriptStruct* FServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSideRewindResult, Z_Construct_UPackage__Script_FPS(), TEXT("ServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FServerSideRewindResult>()
{
	return FServerSideRewindResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitConfirmed_MetaData[];
#endif
		static void NewProp_bHitConfirmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitConfirmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeadshot_MetaData[];
#endif
		static void NewProp_bHeadshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeadshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSideRewindResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_SetBit(void* Obj)
	{
		((FServerSideRewindResult*)Obj)->bHitConfirmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed = { "bHitConfirmed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot_SetBit(void* Obj)
	{
		((FServerSideRewindResult*)Obj)->bHeadshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot = { "bHeadshot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadshot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"ServerSideRewindResult",
		sizeof(FServerSideRewindResult),
		alignof(FServerSideRewindResult),
		Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult;
class UScriptStruct* FShotgunServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult, Z_Construct_UPackage__Script_FPS(), TEXT("ShotgunServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FShotgunServerSideRewindResult>()
{
	return FShotgunServerSideRewindResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HeadShots_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadShots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadShots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HeadShots;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyShots_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyShots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyShots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BodyShots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShotgunServerSideRewindResult>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_ValueProp = { "HeadShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_Key_KeyProp = { "HeadShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots = { "HeadShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShotgunServerSideRewindResult, HeadShots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_ValueProp = { "BodyShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_Key_KeyProp = { "BodyShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots = { "BodyShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShotgunServerSideRewindResult, BodyShots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"ShotgunServerSideRewindResult",
		sizeof(FShotgunServerSideRewindResult),
		alignof(FShotgunServerSideRewindResult),
		Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShotgunServerSideRewindResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult.InnerSingleton;
	}
	DEFINE_FUNCTION(ULagCompensationComponent::execShotgunServerScoreRequest)
	{
		P_GET_TARRAY(AMasterCharacter*,Z_Param_HitCharacters);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_TARRAY(FVector_NetQuantize,Z_Param_HitLocations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShotgunServerScoreRequest_Implementation(Z_Param_HitCharacters,Z_Param_TraceStart,Z_Param_HitLocations,Z_Param_HitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULagCompensationComponent::execProjectileServerScoreRequest)
	{
		P_GET_OBJECT(AMasterCharacter,Z_Param_HitCharacter);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_InitalVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileServerScoreRequest_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_InitalVelocity,Z_Param_HitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULagCompensationComponent::execServerScoreRequest)
	{
		P_GET_OBJECT(AMasterCharacter,Z_Param_HitCharacter);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_HitLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerScoreRequest_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_HitLocation,Z_Param_HitTime);
		P_NATIVE_END;
	}
	static FName NAME_ULagCompensationComponent_ProjectileServerScoreRequest = FName(TEXT("ProjectileServerScoreRequest"));
	void ULagCompensationComponent::ProjectileServerScoreRequest(AMasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitalVelocity, float HitTime)
	{
		LagCompensationComponent_eventProjectileServerScoreRequest_Parms Parms;
		Parms.HitCharacter=HitCharacter;
		Parms.TraceStart=TraceStart;
		Parms.InitalVelocity=InitalVelocity;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagCompensationComponent_ProjectileServerScoreRequest),&Parms);
	}
	static FName NAME_ULagCompensationComponent_ServerScoreRequest = FName(TEXT("ServerScoreRequest"));
	void ULagCompensationComponent::ServerScoreRequest(AMasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime)
	{
		LagCompensationComponent_eventServerScoreRequest_Parms Parms;
		Parms.HitCharacter=HitCharacter;
		Parms.TraceStart=TraceStart;
		Parms.HitLocation=HitLocation;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagCompensationComponent_ServerScoreRequest),&Parms);
	}
	static FName NAME_ULagCompensationComponent_ShotgunServerScoreRequest = FName(TEXT("ShotgunServerScoreRequest"));
	void ULagCompensationComponent::ShotgunServerScoreRequest(TArray<AMasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime)
	{
		LagCompensationComponent_eventShotgunServerScoreRequest_Parms Parms;
		Parms.HitCharacters=HitCharacters;
		Parms.TraceStart=TraceStart;
		Parms.HitLocations=HitLocations;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagCompensationComponent_ShotgunServerScoreRequest),&Parms);
	}
	void ULagCompensationComponent::StaticRegisterNativesULagCompensationComponent()
	{
		UClass* Class = ULagCompensationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectileServerScoreRequest", &ULagCompensationComponent::execProjectileServerScoreRequest },
			{ "ServerScoreRequest", &ULagCompensationComponent::execServerScoreRequest },
			{ "ShotgunServerScoreRequest", &ULagCompensationComponent::execShotgunServerScoreRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitalVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitalVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, HitCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart_MetaData)) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitalVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitalVelocity = { "InitalVelocity", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, InitalVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitalVelocity_MetaData)) }; // 3121577039
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventProjectileServerScoreRequest_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_InitalVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ProjectileServerScoreRequest", nullptr, nullptr, sizeof(LagCompensationComponent_eventProjectileServerScoreRequest_Parms), Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData)) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData)) }; // 1408259225
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ServerScoreRequest", nullptr, nullptr, sizeof(LagCompensationComponent_eventServerScoreRequest_Parms), Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitCharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitLocations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_Inner = { "HitCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters = { "HitCharacters", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, HitCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart_MetaData)) }; // 1408259225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_Inner = { "HitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations = { "HitLocations", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, HitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_MetaData)) }; // 1408259225
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ShotgunServerScoreRequest", nullptr, nullptr, sizeof(LagCompensationComponent_eventShotgunServerScoreRequest_Parms), Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULagCompensationComponent);
	UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister()
	{
		return ULagCompensationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULagCompensationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULagCompensationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULagCompensationComponent_ProjectileServerScoreRequest, "ProjectileServerScoreRequest" }, // 2340195381
		{ &Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest, "ServerScoreRequest" }, // 3554064106
		{ &Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest, "ShotgunServerScoreRequest" }, // 1908179326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LagCompensationComponent.h" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter = { "MasterCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagCompensationComponent, MasterCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController = { "MasterController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagCompensationComponent, MasterController), Z_Construct_UClass_AMasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime_MetaData[] = {
		{ "Category", "LagCompensationComponent" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime = { "MaxRecordTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagCompensationComponent, MaxRecordTime), METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULagCompensationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULagCompensationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams = {
		&ULagCompensationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULagCompensationComponent()
	{
		if (!Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton, Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ULagCompensationComponent>()
	{
		return ULagCompensationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULagCompensationComponent);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ScriptStructInfo[] = {
		{ FBoxInformation::StaticStruct, Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps, TEXT("BoxInformation"), &Z_Registration_Info_UScriptStruct_BoxInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxInformation), 1821991443U) },
		{ FFramePackage::StaticStruct, Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps, TEXT("FramePackage"), &Z_Registration_Info_UScriptStruct_FramePackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFramePackage), 3795996379U) },
		{ FServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps, TEXT("ServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_ServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerSideRewindResult), 327433932U) },
		{ FShotgunServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewStructOps, TEXT("ShotgunServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_ShotgunServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShotgunServerSideRewindResult), 4178990358U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULagCompensationComponent, ULagCompensationComponent::StaticClass, TEXT("ULagCompensationComponent"), &Z_Registration_Info_UClass_ULagCompensationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULagCompensationComponent), 60911677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_1458124993(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
