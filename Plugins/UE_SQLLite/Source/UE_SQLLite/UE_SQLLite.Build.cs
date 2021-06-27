// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_SQLLite : ModuleRules
{
	public UE_SQLLite(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] {"C:/Users/FatihCanbekli/Desktop/Projects/SQLLitePlugin_UE5/Plugins/UE_SQLLite/Source/UE_SQLLite/Public/SQLiteCpp" });
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UMG"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);


		PublicAdditionalLibraries.AddRange(
    new string[]
    {
				"C:/Users/FatihCanbekli/Downloads/SQLiteCpp-master/SQLiteCpp-master/build/sqlite3/Release/sqlite3.lib",
				"C:/Users/FatihCanbekli/Downloads/SQLiteCpp-master/SQLiteCpp-master/build/Release/SQLiteCpp.lib",
		// ... add private dependencies that you statically link with here ...	
	}
    );

       // PublicAdditionalLibraries.Add("C:/Users/FatihCanbekli/Downloads/SQLiteCpp-master/SQLiteCpp-master/build/sqlite3/Debug/sqlite3.lib");
		//PublicAdditionalLibraries.Add("C:/Users/FatihCanbekli/Downloads/SQLiteCpp-master/SQLiteCpp-master/build/Debug/SQLiteCpp.lib");

 


    }
}
