// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_SQLLite.h"

#define LOCTEXT_NAMESPACE "FUE_SQLLiteModule"

void FUE_SQLLiteModule::StartupModule()
 {
// 
// 	try
// 	{
// 		SQLite::Database db("C:/Users/FatihCanbekli/Desktop/Projects/SQLLitePlugin_UE5/db/example.db3", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);
// 
// 		db.exec("CREATE TABLE TestTable ( contact_id INTEGER PRIMARY KEY, first_name TEXT NOT NULL, last_name TEXT NOT NULL, email TEXT NOT NULL UNIQUE, phone TEXT NOT NULL UNIQUE );");
// 	}
// 	catch (std::exception& e)
// 	{
// 		std::cout << "exception: " << e.what() << std::endl;
// 	}



// 	sqlite3* DB;
// 	std::string sql = "CREATE TABLE PERSON("
// 		"ID INT PRIMARY KEY     NOT NULL, "
// 		"NAME           TEXT    NOT NULL, "
// 		"SURNAME          TEXT     NOT NULL, "
// 		"AGE            INT     NOT NULL, "
// 		"ADDRESS        CHAR(50), "
// 		"SALARY         REAL );";
// 	int exit = 0;
// 	exit = sqlite3_open("C:/Users/FatihCanbekli/Desktop/ewew.db", &DB);
// 
// 	char* messaggeError;
// 	exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
// 
// 	if (exit != SQLITE_OK) {
// 		std::cerr << "Error Create Table" << std::endl;
// 		sqlite3_free(messaggeError);
// 	}
// 	else
// 		std::cout << "Table created Successfully" << std::endl;
// 	sqlite3_close(DB);
}

void FUE_SQLLiteModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE_SQLLiteModule, UE_SQLLite)