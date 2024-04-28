// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheSanctuary_Cpp : ModuleRules
{
	public TheSanctuary_Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
