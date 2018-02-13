#pragma once
#include <string>

class Database
{
public:
	virtual std::string get_name() = 0;
	virtual ~Database();
};

