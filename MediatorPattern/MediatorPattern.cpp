// MediatorPattern.cpp : Defines the entry point for the console application.
//
// Mediator Pattern:
// A component that facilitates communications between other components
// without them necessarity being aware of each other or having
// direct access to each other (Like participant has access game, instead of player)
#include "stdafx.h"
#include <string>
#include <vector>
#include "ChatRoom.h"
#include "Participant.h"

using namespace std;
// Chat room




int main()
{
	ChatRoom room;

	Participant p1{ "Meng" };
	Participant p2{ "Tianyi" };

	room.join(&p1);
	room.join(&p2);

	p1.public_message("Yo");
	Participant p3{ "Bruce" };
	room.join(&p3);

	p3.private_message("Hey sup", "Tianyi");
	p2.private_message("Wazzup", "Bryce");

	system("pause");
    return 0;
}

