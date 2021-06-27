// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "./SQLiteCpp/SQLiteCpp.h"
#include "Modules/ModuleManager.h"

#include <iostream>

class FUE_SQLLiteModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
