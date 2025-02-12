// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistHons_init() {}
	AIMASSISTHONS_API UFunction* Z_Construct_UDelegateFunction_AimAssistHons_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AimAssistHons;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AimAssistHons()
	{
		if (!Z_Registration_Info_UPackage__Script_AimAssistHons.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AimAssistHons_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AimAssistHons",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5BE43B53,
				0x1CF9CA33,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AimAssistHons.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AimAssistHons.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AimAssistHons(Z_Construct_UPackage__Script_AimAssistHons, TEXT("/Script/AimAssistHons"), Z_Registration_Info_UPackage__Script_AimAssistHons, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5BE43B53, 0x1CF9CA33));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
