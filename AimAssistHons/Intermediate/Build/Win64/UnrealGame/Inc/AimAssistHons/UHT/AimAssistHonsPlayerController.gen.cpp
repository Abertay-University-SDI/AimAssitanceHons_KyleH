// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimAssistHons/AimAssistHonsPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistHonsPlayerController() {}

// Begin Cross Module References
AIMASSISTHONS_API UClass* Z_Construct_UClass_AAimAssistHonsPlayerController();
AIMASSISTHONS_API UClass* Z_Construct_UClass_AAimAssistHonsPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_AimAssistHons();
// End Cross Module References

// Begin Class AAimAssistHonsPlayerController
void AAimAssistHonsPlayerController::StaticRegisterNativesAAimAssistHonsPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAimAssistHonsPlayerController);
UClass* Z_Construct_UClass_AAimAssistHonsPlayerController_NoRegister()
{
	return AAimAssistHonsPlayerController::StaticClass();
}
struct Z_Construct_UClass_AAimAssistHonsPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AimAssistHonsPlayerController.h" },
		{ "ModuleRelativePath", "AimAssistHonsPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "AimAssistHonsPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAimAssistHonsPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AimAssistHons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::ClassParams = {
	&AAimAssistHonsPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAimAssistHonsPlayerController()
{
	if (!Z_Registration_Info_UClass_AAimAssistHonsPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAimAssistHonsPlayerController.OuterSingleton, Z_Construct_UClass_AAimAssistHonsPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAimAssistHonsPlayerController.OuterSingleton;
}
template<> AIMASSISTHONS_API UClass* StaticClass<AAimAssistHonsPlayerController>()
{
	return AAimAssistHonsPlayerController::StaticClass();
}
AAimAssistHonsPlayerController::AAimAssistHonsPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAimAssistHonsPlayerController);
AAimAssistHonsPlayerController::~AAimAssistHonsPlayerController() {}
// End Class AAimAssistHonsPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAimAssistHonsPlayerController, AAimAssistHonsPlayerController::StaticClass, TEXT("AAimAssistHonsPlayerController"), &Z_Registration_Info_UClass_AAimAssistHonsPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAimAssistHonsPlayerController), 458047678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsPlayerController_h_4127734816(TEXT("/Script/AimAssistHons"),
	Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
