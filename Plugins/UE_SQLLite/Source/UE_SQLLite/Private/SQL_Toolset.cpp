// Fill out your copyright notice in the Description page of Project Settings.


#include "SQL_Toolset.h"

void USQL_Toolset::TestBlueFunction()
{

}
 

// Create a callback function  
int callback(void* NotUsed, int argc, char** argv, char** azColName) {

	// int argc: holds the number of results
	// (array) azColName: holds each column returned
	// (array) argv: holds each value

	// Return successful
	return 0;
}

int USQL_Toolset::SQL_GetInt(FString dbPath, FString sqlCommand)
{
	std::string dbPathStr = std::string(TCHAR_TO_UTF8(*dbPath));
	std::string sqlCommandStr = std::string(TCHAR_TO_UTF8(*sqlCommand));
	const char* exception;
	try
	{
		SQLite::Database    db(dbPathStr);
		std::string value = db.execAndGet(sqlCommandStr);
		return std::stoi(value);

	}
	catch (std::exception& e)
	{
		std::cout << "exception: " << e.what() << std::endl;
		exception = e.what();
	}
	FString str(exception);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *str);
	return 0;

}

FString USQL_Toolset::SQL_GetString(FString dbPath, FString sqlCommand)
{
	std::string dbPathStr = std::string(TCHAR_TO_UTF8(*dbPath));
	std::string sqlCommandStr = std::string(TCHAR_TO_UTF8(*sqlCommand));
	const char* exception;
	try
	{
		SQLite::Database    db(dbPathStr);
		std::string value = db.execAndGet(sqlCommandStr);
		return FString(value.c_str());

	}
	catch (std::exception& e)
	{
		std::cout << "exception: " << e.what() << std::endl;
		exception = e.what();
	}
	FString str(exception);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *str);
	return FString("Error");

}
