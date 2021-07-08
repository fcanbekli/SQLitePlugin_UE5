// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "./SQLiteCpp/SQLiteCpp.h"
#include "UE_SQLLite/Public/SQLiteCpp/sqlite3.h"

#include "SQL_Toolset.generated.h"

/**
 * 
 */
UCLASS()
class UE_SQLLITE_API USQL_Toolset : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = Almyra)
		static void TestBlueFunction();

	UFUNCTION(BlueprintCallable, Category = Almyra)
		static void ExecuteSQLCommand(FString dbPath, FString sqlCommand);


	UFUNCTION(BlueprintCallable, Category = Almyra)
		static int SQL_GetInt(FString dbPath, FString sqlCommand);

	UFUNCTION(BlueprintCallable, Category = Almyra)
		static FString SQL_GetString(FString dbPath, FString sqlCommand);

	
};
