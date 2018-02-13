#include "stdafx.h"
#include "ConfigurableNameLookup.h"

ConfigurableNameLookup::~ConfigurableNameLookup()
{
}

ConfigurableNameLookup::ConfigurableNameLookup(Database & db)
	: db(db) {}

std::string ConfigurableNameLookup::database_name()
{
	return db.get_name();
	// this allows proper unit testing. No more integration
	// no dependency on SingletonDatabase
}
