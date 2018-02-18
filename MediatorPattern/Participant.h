#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "ChatRoom.h"
using namespace std;

struct Participant
{
	string name;
	ChatRoom* room{ nullptr };
	vector<string> chats;

	Participant(const string& name)
		: name(name) {}

	void public_message(const string& message) const;
	void private_message(const string& message, const string& who) const;

	void receive(const string& origin, const string& message) const;

	bool operator==(const Participant& other);
	bool operator!=(const Participant& other);

};