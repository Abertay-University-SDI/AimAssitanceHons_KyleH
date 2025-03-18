// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimAssistHons/AimAssistHonsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistHonsGameMode() {}

// Begin Cross Module References
AIMASSISTHONS_API UClass* Z_Construct_UClass_AAimAssistHonsGameMode();
AIMASSISTHONS_API UClass* Z_Construct_UClass_AAimAssistHonsGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AimAssistHons();
// End Cross Module References

// Begin Class AAimAssistHonsGameMode
void AAimAssistHonsGameMode::StaticRegisterNativesAAimAssistHonsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAimAssistHonsGameMode);
UClass* Z_Construct_UClass_AAimAssistHonsGameMode_NoRegister()
{
	return AAimAssistHonsGameMode::StaticClass();
}
struct Z_Construct_UClass_AAimAssistHonsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AimAssistHonsGameMode.h" },
		{ "ModuleRelativePath", "AimAssistHonsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAimAssistHonsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAimAssistHonsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AimAssistHons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAimAssistHonsGameMode_Statics::ClassParams = {
	&AAimAssistHonsGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAimAssistHonsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAimAssistHonsGameMode()
{
	if (!Z_Registration_Info_UClass_AAimAssistHonsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAimAssistHonsGameMode.OuterSingleton, Z_Construct_UClass_AAimAssistHonsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAimAssistHonsGameMode.OuterSingleton;
}
template<> AIMASSISTHONS_API UClass* StaticClass<AAimAssistHonsGameMode>()
{
	return AAimAssistHonsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAimAssistHonsGameMode);
AAimAssistHonsGameMode::~AAimAssistHonsGameMode() {}
// End Class AAimAssistHonsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAimAssistHonsGameMode, AAimAssistHonsGameMode::StaticClass, TEXT("AAimAssistHonsGameMode"), &Z_Registration_Info_UClass_AAimAssistHonsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAimAssistHonsGameMode), 3302286928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsGameMode_h_3210776266(TEXT("/Script/AimAssistHons"),
	Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
