#pragma once
#include <string>
#include <iostream>
#include "Database.h"

using namespace std;

class SingletonDatabase : public Database
{
private:
	SingletonDatabase();
	SingletonDatabase(string database_name);
	
	string db_name = "singleton database";
public:
	SingletonDatabase(SingletonDatabase const&) = delete;
	void operator=(SingletonDatabase const&) = delete;
	~SingletonDatabase();

	static SingletonDatabase& get();
	string get_name() override;
};

