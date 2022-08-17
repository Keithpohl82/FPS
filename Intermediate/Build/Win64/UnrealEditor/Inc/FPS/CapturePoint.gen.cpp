// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/CaptureTheFlag/CapturePoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapturePoint() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ACapturePoint_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ACapturePoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_ANewFlag_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
// End Cross Module References
	DEFINE_FUNCTION(ACapturePoint::execServerSpawnFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSpawnFlag_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACapturePoint_ServerSpawnFlag = FName(TEXT("ServerSpawnFlag"));
	void ACapturePoint::ServerSpawnFlag()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACapturePoint_ServerSpawnFlag),NULL);
	}
	void ACapturePoint::StaticRegisterNativesACapturePoint()
	{
		UClass* Class = ACapturePoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerSpawnFlag", &ACapturePoint::execServerSpawnFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePoint, nullptr, "ServerSpawnFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACapturePoint);
	UClass* Z_Construct_UClass_ACapturePoint_NoRegister()
	{
		return ACapturePoint::StaticClass();
	}
	struct Z_Construct_UClass_ACapturePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlagInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlagClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FlagClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapturePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACapturePoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACapturePoint_ServerSpawnFlag, "ServerSpawnFlag" }, // 1479137846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureTheFlag/CapturePoint.h" },
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagInstance_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagInstance = { "FlagInstance", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapturePoint, FlagInstance), Z_Construct_UClass_ANewFlag_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagClass_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagClass = { "FlagClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapturePoint, FlagClass), Z_Construct_UClass_ANewFlag_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapturePoint, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapturePoint, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_BaseMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "ModuleRelativePath", "CaptureTheFlag/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapturePoint, Team), Z_Construct_UEnum_FPS_ETeam, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team_MetaData)) }; // 722182970
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapturePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_FlagClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapturePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapturePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACapturePoint_Statics::ClassParams = {
		&ACapturePoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACapturePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapturePoint()
	{
		if (!Z_Registration_Info_UClass_ACapturePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACapturePoint.OuterSingleton, Z_Construct_UClass_ACapturePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACapturePoint.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ACapturePoint>()
	{
		return ACapturePoint::StaticClass();
	}

	void ACapturePoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_FlagInstance(TEXT("FlagInstance"));

		const bool bIsValid = true
			&& Name_FlagInstance == ClassReps[(int32)ENetFields_Private::FlagInstance].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACapturePoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapturePoint);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACapturePoint, ACapturePoint::StaticClass, TEXT("ACapturePoint"), &Z_Registration_Info_UClass_ACapturePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACapturePoint), 963827081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_580037081(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
