// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimAssistHons/Target.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}

// Begin Cross Module References
AIMASSISTHONS_API UClass* Z_Construct_UClass_ATarget();
AIMASSISTHONS_API UClass* Z_Construct_UClass_ATarget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AimAssistHons();
// End Cross Module References

// Begin Class ATarget
void ATarget::StaticRegisterNativesATarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATarget);
UClass* Z_Construct_UClass_ATarget_NoRegister()
{
	return ATarget::StaticClass();
}
struct Z_Construct_UClass_ATarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Target.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Target.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[] = {
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_collider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATarget, target), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATarget, collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_collider_MetaData), NewProp_collider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_collider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AimAssistHons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
	&ATarget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATarget()
{
	if (!Z_Registration_Info_UClass_ATarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarget.OuterSingleton, Z_Construct_UClass_ATarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATarget.OuterSingleton;
}
template<> AIMASSISTHONS_API UClass* StaticClass<ATarget>()
{
	return ATarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
ATarget::~ATarget() {}
// End Class ATarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_Target_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATarget, ATarget::StaticClass, TEXT("ATarget"), &Z_Registration_Info_UClass_ATarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarget), 2165961335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_Target_h_1388110973(TEXT("/Script/AimAssistHons"),
	Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_Target_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
