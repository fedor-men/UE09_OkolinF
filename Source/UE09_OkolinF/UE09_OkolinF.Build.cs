// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE09_OkolinF : ModuleRules
{
	public UE09_OkolinF(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE09_OkolinF",
			"UE09_OkolinF/Variant_Platforming",
			"UE09_OkolinF/Variant_Platforming/Animation",
			"UE09_OkolinF/Variant_Combat",
			"UE09_OkolinF/Variant_Combat/AI",
			"UE09_OkolinF/Variant_Combat/Animation",
			"UE09_OkolinF/Variant_Combat/Gameplay",
			"UE09_OkolinF/Variant_Combat/Interfaces",
			"UE09_OkolinF/Variant_Combat/UI",
			"UE09_OkolinF/Variant_SideScrolling",
			"UE09_OkolinF/Variant_SideScrolling/AI",
			"UE09_OkolinF/Variant_SideScrolling/Gameplay",
			"UE09_OkolinF/Variant_SideScrolling/Interfaces",
			"UE09_OkolinF/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
