// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DatabaseInstance.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FDatabaseConnection
{
	GENERATED_USTRUCT_BODY()

		FDatabaseConnection()        // this is your default constructor which is required for a USTRUCT definition
	{
		// initialize things here if desired or required
	}
public:
	UPROPERTY(BlueprintReadWrite)
		int32 myNumber;
};

USTRUCT(BlueprintType)
struct FStudent
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "Student")
		int32 Age;
	UPROPERTY(BlueprintReadWrite, Category = "Student")
		FString Name;
};



UCLASS()
class UE_SQLLITE_API UDatabaseInstance : public UObject
{
	GENERATED_BODY()
	
};
