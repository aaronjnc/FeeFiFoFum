// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeeFiFoFum_init() {}
	FEEFIFOFUM_API UFunction* Z_Construct_UDelegateFunction_FeeFiFoFum_OnPickUp__DelegateSignature();
	FEEFIFOFUM_API UFunction* Z_Construct_UDelegateFunction_FeeFiFoFum_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FeeFiFoFum;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FeeFiFoFum()
	{
		if (!Z_Registration_Info_UPackage__Script_FeeFiFoFum.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FeeFiFoFum_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FeeFiFoFum_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FeeFiFoFum",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x01E4B18A,
				0x7C4A6024,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FeeFiFoFum.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FeeFiFoFum.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FeeFiFoFum(Z_Construct_UPackage__Script_FeeFiFoFum, TEXT("/Script/FeeFiFoFum"), Z_Registration_Info_UPackage__Script_FeeFiFoFum, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01E4B18A, 0x7C4A6024));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
