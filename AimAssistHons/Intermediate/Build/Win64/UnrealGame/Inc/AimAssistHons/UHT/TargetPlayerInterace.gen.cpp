// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimAssistHons/TargetPlayerInterace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPlayerInterace() {}

// Begin Cross Module References
AIMASSISTHONS_API UClass* Z_Construct_UClass_UTargetPlayerInterace();
AIMASSISTHONS_API UClass* Z_Construct_UClass_UTargetPlayerInterace_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AimAssistHons();
// End Cross Module References

// Begin Interface UTargetPlayerInterace
void UTargetPlayerInterace::StaticRegisterNativesUTargetPlayerInterace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetPlayerInterace);
UClass* Z_Construct_UClass_UTargetPlayerInterace_NoRegister()
{
	return UTargetPlayerInterace::StaticClass();
}
struct Z_Construct_UClass_UTargetPlayerInterace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetPlayerInterace.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetPlayerInterace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetPlayerInterace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AimAssistHons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetPlayerInterace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetPlayerInterace_Statics::ClassParams = {
	&UTargetPlayerInterace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetPlayerInterace_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetPlayerInterace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetPlayerInterace()
{
	if (!Z_Registration_Info_UClass_UTargetPlayerInterace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetPlayerInterace.OuterSingleton, Z_Construct_UClass_UTargetPlayerInterace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetPlayerInterace.OuterSingleton;
}
template<> AIMASSISTHONS_API UClass* StaticClass<UTargetPlayerInterace>()
{
	return UTargetPlayerInterace::StaticClass();
}
UTargetPlayerInterace::UTargetPlayerInterace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetPlayerInterace);
UTargetPlayerInterace::~UTargetPlayerInterace() {}
// End Interface UTargetPlayerInterace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_TargetPlayerInterace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetPlayerInterace, UTargetPlayerInterace::StaticClass, TEXT("UTargetPlayerInterace"), &Z_Registration_Info_UClass_UTargetPlayerInterace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetPlayerInterace), 4218516929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_TargetPlayerInterace_h_4103015009(TEXT("/Script/AimAssistHons"),
	Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_TargetPlayerInterace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_TargetPlayerInterace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
