// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_SQLLite.h"

#define LOCTEXT_NAMESPACE "FUE_SQLLiteModule"

void FUE_SQLLiteModule::StartupModule()
 {

}

void FUE_SQLLiteModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE_SQLLiteModule, UE_SQLLite)