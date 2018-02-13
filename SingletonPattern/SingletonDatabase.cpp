#include "stdafx.h"
#include "SingletonDatabase.h"


SingletonDatabase::SingletonDatabase()
{
}

SingletonDatabase::~SingletonDatabase()
{
}

SingletonDatabase::SingletonDatabase(string database_name)
{
	cout << "initializing " << database_name << endl;
	db_name = database_name;
}

SingletonDatabase & SingletonDatabase::get()
{
	static SingletonDatabase db("my database");
	return db;
}

string SingletonDatabase::get_name()
{
	return db_name;
}

