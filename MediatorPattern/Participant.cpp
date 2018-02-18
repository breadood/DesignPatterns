#include "stdafx.h"
#include "Participant.h"

void Participant::public_message(const string & message) const
{
	room->broadcast(name, message);
}

void Participant::private_message(const string & message, const string & who) const
{
	room->private_message(this, who, message);
}

void Participant::receive(const string & origin, const string & message) const
{
	string s{ origin + ": " + message };
	cout << "[" << name << "] " << s << endl;
}

bool Participant::operator==(const Participant & other)
{
	return other.name == name;
}

bool Participant::operator!=(const Participant & other)
{
	return other.name != name;
}
