#pragma once
#include <string>
#include "Database.h"

class ConfigurableNameLookup
{
public:
	ConfigurableNameLookup() = delete;
	~ConfigurableNameLookup();
	ConfigurableNameLookup(Database &db);

	std::string database_name();
private:
	Database & db;
};
