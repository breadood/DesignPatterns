#pragma once
#include <string>
#include <iostream>
#include "Address.h"

using namespace std;
class Contact
{
public:
	Contact();
	~Contact();
	Contact(const string& name, const Address* address);
	Contact(const Contact& other);

	void change_name(const string& new_name);
	void change_suite(int new_suite) {
		address->change_suite(new_suite);
	}

	friend ostream& operator<<(ostream& os, const Contact& contact);
private:
	string name;
	Address* address;
};
