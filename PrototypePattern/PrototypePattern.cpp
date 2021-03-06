// PrototypePattern.cpp : Defines the entry point for the console application.
//
// Prototype: Object Copying
// A partially or fully initialized object that 
// you copy/clone and make use of
#include <iostream>
#include "stdafx.h"
#include "EmployeeFactory.h"
using namespace std;

int main()
{
	//Contact john{ "John", &Address{"street", "city", 123} };
	auto john = EmployeeFactory::new_main_office_employee("john", 123);
	auto jim = EmployeeFactory::new_main_office_employee("jane", 101);
	cout << *john << endl;
	cout << *jim << endl;

	system("pause");
    return 0;
}

