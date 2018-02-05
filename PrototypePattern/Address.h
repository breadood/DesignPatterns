#pragma once
#include <string>
#include <iostream>
using namespace std;
class Address
{
public:
	Address();
	Address(const string& street, const string& city, int suite);
	Address(const Address& other);
	void change_suite(int new_suite);

	friend ostream& operator<<(ostream& os, const Address& address);
	~Address();
private:
	string street, city;
	int suite;
};
