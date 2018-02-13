#include "stdafx.h"
#include "DummyDatabase.h"


DummyDatabase::DummyDatabase()
{
}


DummyDatabase::~DummyDatabase()
{
}

std::string DummyDatabase::get_name()
{
	return "dummy database";
}
