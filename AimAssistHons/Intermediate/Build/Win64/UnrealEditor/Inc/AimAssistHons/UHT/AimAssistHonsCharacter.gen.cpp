// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimAssistHons/AimAssistHonsCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistHonsCharacter() {}

// Begin Cross Module References
AIMASSISTHONS_API UClass* Z_Construct_UClass_AAimAssistHonsCharacter();
AIMASSISTHONS_API UClass* Z_Construct_UClass_AAimAssistHonsCharacter_NoRegister();
AIMASSISTHONS_API UClass* Z_Construct_UClass_ATarget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_AimAssistHons();
// End Cross Module References

// Begin Class AAimAssistHonsCharacter
void AAimAssistHonsCharacter::StaticRegisterNativesAAimAssistHonsCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAimAssistHonsCharacter);
UClass* Z_Construct_UClass_AAimAssistHonsCharacter_NoRegister()
{
	return AAimAssistHonsCharacter::StaticClass();
}
struct Z_Construct_UClass_AAimAssistHonsCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AimAssistHonsCharacter.h" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetShot_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//accuracy vars\n" },
#endif
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "accuracy vars" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotGun_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accuracy_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimAssistLimit_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//aim assist vars\n" },
#endif
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "aim assist vars" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimAssistOn_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_soundCue_MetaData[] = {
		{ "Category", "AimAssistHonsCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//sound effect\n" },
#endif
		{ "ModuleRelativePath", "AimAssistHonsCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sound effect" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_shotGun;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_aimAssistLimit;
	static void NewProp_aimAssistOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_aimAssistOn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_soundCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAimAssistHonsCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAction_MetaData), NewProp_ShootAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, target), Z_Construct_UClass_ATarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_targetShot = { "targetShot", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, targetShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetShot_MetaData), NewProp_targetShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_shotGun = { "shotGun", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, shotGun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotGun_MetaData), NewProp_shotGun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_accuracy = { "accuracy", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accuracy_MetaData), NewProp_accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_aimAssistLimit = { "aimAssistLimit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, aimAssistLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimAssistLimit_MetaData), NewProp_aimAssistLimit_MetaData) };
void Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_aimAssistOn_SetBit(void* Obj)
{
	((AAimAssistHonsCharacter*)Obj)->aimAssistOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_aimAssistOn = { "aimAssistOn", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAimAssistHonsCharacter), &Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_aimAssistOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimAssistOn_MetaData), NewProp_aimAssistOn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_soundCue = { "soundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAimAssistHonsCharacter, soundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_soundCue_MetaData), NewProp_soundCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAimAssistHonsCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_ShootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_targetShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_shotGun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_aimAssistLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_aimAssistOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAimAssistHonsCharacter_Statics::NewProp_soundCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAimAssistHonsCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AimAssistHons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAimAssistHonsCharacter_Statics::ClassParams = {
	&AAimAssistHonsCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAimAssistHonsCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAimAssistHonsCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAimAssistHonsCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAimAssistHonsCharacter()
{
	if (!Z_Registration_Info_UClass_AAimAssistHonsCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAimAssistHonsCharacter.OuterSingleton, Z_Construct_UClass_AAimAssistHonsCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAimAssistHonsCharacter.OuterSingleton;
}
template<> AIMASSISTHONS_API UClass* StaticClass<AAimAssistHonsCharacter>()
{
	return AAimAssistHonsCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAimAssistHonsCharacter);
AAimAssistHonsCharacter::~AAimAssistHonsCharacter() {}
// End Class AAimAssistHonsCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAimAssistHonsCharacter, AAimAssistHonsCharacter::StaticClass, TEXT("AAimAssistHonsCharacter"), &Z_Registration_Info_UClass_AAimAssistHonsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAimAssistHonsCharacter), 2983910504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsCharacter_h_2949788512(TEXT("/Script/AimAssistHons"),
	Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hamil_OneDrive_Documents_GitHub_AimAssitanceHons_KyleH_AimAssistHons_Source_AimAssistHons_AimAssistHonsCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
