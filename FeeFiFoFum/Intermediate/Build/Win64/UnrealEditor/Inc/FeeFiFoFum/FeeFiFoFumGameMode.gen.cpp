// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeeFiFoFum/FeeFiFoFumGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeeFiFoFumGameMode() {}
// Cross Module References
	FEEFIFOFUM_API UClass* Z_Construct_UClass_AFeeFiFoFumGameMode_NoRegister();
	FEEFIFOFUM_API UClass* Z_Construct_UClass_AFeeFiFoFumGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FeeFiFoFum();
// End Cross Module References
	void AFeeFiFoFumGameMode::StaticRegisterNativesAFeeFiFoFumGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFeeFiFoFumGameMode);
	UClass* Z_Construct_UClass_AFeeFiFoFumGameMode_NoRegister()
	{
		return AFeeFiFoFumGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFeeFiFoFumGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FeeFiFoFum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FeeFiFoFumGameMode.h" },
		{ "ModuleRelativePath", "FeeFiFoFumGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFeeFiFoFumGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::ClassParams = {
		&AFeeFiFoFumGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFeeFiFoFumGameMode()
	{
		if (!Z_Registration_Info_UClass_AFeeFiFoFumGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFeeFiFoFumGameMode.OuterSingleton, Z_Construct_UClass_AFeeFiFoFumGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFeeFiFoFumGameMode.OuterSingleton;
	}
	template<> FEEFIFOFUM_API UClass* StaticClass<AFeeFiFoFumGameMode>()
	{
		return AFeeFiFoFumGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFeeFiFoFumGameMode);
	struct Z_CompiledInDeferFile_FID_FeeFiFoFum_Source_FeeFiFoFum_FeeFiFoFumGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FeeFiFoFum_Source_FeeFiFoFum_FeeFiFoFumGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFeeFiFoFumGameMode, AFeeFiFoFumGameMode::StaticClass, TEXT("AFeeFiFoFumGameMode"), &Z_Registration_Info_UClass_AFeeFiFoFumGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFeeFiFoFumGameMode), 1729233819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FeeFiFoFum_Source_FeeFiFoFum_FeeFiFoFumGameMode_h_2583695803(TEXT("/Script/FeeFiFoFum"),
		Z_CompiledInDeferFile_FID_FeeFiFoFum_Source_FeeFiFoFum_FeeFiFoFumGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FeeFiFoFum_Source_FeeFiFoFum_FeeFiFoFumGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
