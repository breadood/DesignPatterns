#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
struct Participant;
using namespace std;
struct ChatRoom
{
	vector<Participant*> people;
	void broadcast(const string& origin, const string& message);

	void join(Participant* p);

	void private_message(const Participant* origin, const string& who, const string& message);
};
