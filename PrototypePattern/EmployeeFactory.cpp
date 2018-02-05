#include "stdafx.h"
#include "EmployeeFactory.h"


EmployeeFactory::EmployeeFactory()
{
}


EmployeeFactory::~EmployeeFactory()
{
}

unique_ptr<Contact> EmployeeFactory::new_main_office_employee(const string & name, const int suite)
{
	static Contact p{ "", new Address{ "main office location", "City", 0 } };
	return new_employee(name, suite, p);
}

unique_ptr<Contact> EmployeeFactory::new_employee(const string & name, const int suite, const Contact & prototype)
{
	auto result = make_unique<Contact>(prototype);
	result->change_name(name);
	result->change_suite(suite);

	return result;
}
