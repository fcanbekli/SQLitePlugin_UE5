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


void USQL_Toolset::ExecuteSQLCommand(FString dbPath, FString sqlCommand)
{
	std::string dbPathStr = std::string(TCHAR_TO_UTF8(*dbPath));
	std::string sqlCommandStr = std::string(TCHAR_TO_UTF8(*sqlCommand));
	sqlite3* DB;
	int exit = 0;
	exit = sqlite3_open(dbPathStr.c_str(), &DB);

	char* messaggeError;
	exit = sqlite3_exec(DB, sqlCommandStr.c_str(), callback, 0, &messaggeError);

	if (exit != SQLITE_OK) {
		std::cerr << "Error Create Table" << std::endl;
		sqlite3_free(messaggeError);
	}
	else
		std::cout << "Table created Successfully" << std::endl;
	sqlite3_close(DB);

}
