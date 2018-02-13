#pragma once
#include <string>

#include "Database.h"

class DummyDatabase : public Database
{
public:
	DummyDatabase();
	~DummyDatabase();
	std::string get_name() override;
};


