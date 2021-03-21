// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YinYangProject : ModuleRules
{
	public YinYangProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
