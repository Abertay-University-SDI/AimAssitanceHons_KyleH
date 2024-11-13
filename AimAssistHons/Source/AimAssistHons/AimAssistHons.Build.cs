// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AimAssistHons : ModuleRules
{
	public AimAssistHons(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
