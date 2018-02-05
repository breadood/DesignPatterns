#pragma once
#include <memory>
#include <string>
#include "Address.h"
#include "Contact.h"

using namespace std;

class EmployeeFactory
{
public:
	EmployeeFactory();
	~EmployeeFactory();
	static unique_ptr<Contact> new_main_office_employee(const string& name, const int suite);
	
private:
	static unique_ptr<Contact> new_employee(const string& name, const int suite, const Contact& prototype);
};