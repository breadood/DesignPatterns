#include "stdafx.h"
#include "Address.h"


Address::Address()
{
}

Address::Address(const string & street, const string & city, int suite) :
	street(street), city(city), suite(suite) 
{}


Address::Address(const Address & other) :
	street(other.street), city(other.city), suite(other.suite) 
{}

void Address::change_suite(int new_suite)
{
	suite = new_suite;
}

Address::~Address()
{
}

ostream& operator<<(ostream& os, const Address& address) {
	os << address.street << ", " << address.city << ", " << address.suite;
	return os;
}