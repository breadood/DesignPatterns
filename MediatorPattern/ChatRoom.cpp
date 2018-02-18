#include "stdafx.h"
#include "ChatRoom.h"
#include "Participant.h"


void ChatRoom::broadcast(const string & origin, const string & message)
{
	for (auto p : people)
	{
		if (p->name != origin)
			p->receive(origin, message);
	}
}

void ChatRoom::join(Participant * p)
{
	string join_msg = p->name + " joins the chat";
	broadcast("Room", join_msg);
	p->room = this;
	people.emplace_back(p);
}

void ChatRoom::private_message(const Participant* origin, const string & who, const string & message)
{
	auto target = find_if(begin(people), end(people), 
		[&](const Participant* p) {
		return p->name == who;
	});

	if (target != end(people))
	{
		(*target)->receive(origin->name, message);
	}
	else 
	{
		origin->receive("Room", "Cannot send you message");
	}
}
