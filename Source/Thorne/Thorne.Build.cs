// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Thorne : ModuleRules
{
	public Thorne(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
