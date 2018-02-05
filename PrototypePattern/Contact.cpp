#include "stdafx.h"
#include "Contact.h"


Contact::Contact()
{
}


Contact::~Contact()
{
	delete address;
}

Contact::Contact(const string & name, const Address * address) :
	name(name), address(new Address(*address)) {}

Contact::Contact(const Contact & other) :
	name(other.name), address(new Address(*other.address)) {}

void Contact::change_name(const string & new_name)
{
	name = new_name;
}

ostream & operator<<(ostream & os, const Contact & contact)
{
	os << contact.name << " is at "<< *contact.address;
	return os;
}
