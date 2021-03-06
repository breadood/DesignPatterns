// ChainOfResponsibility.cpp : Defines the entry point for the console application.
//
// Chain of Responsibility:
// A chain of componentes who all get a chance to
// process a command or a query, optionally having
// default processing implementation and ability
// to terminate the processing chain

#include "stdafx.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
// pointer chain
struct Creature
{
	string name;
	int attack, defense;

	Creature(const string& name, int attack, int defense) :
		name(name), attack(attack), defense(defense) {}

	string str() const
	{
		ostringstream oss;
		oss << "name: " << name 
			<< ", attack: " << attack  
			<< ", defense: " << defense;
		return oss.str();
	}
};

class CreatureModifier
{
	CreatureModifier* next{ nullptr };
protected:
	Creature & creature;
public:
	CreatureModifier(Creature& c) : creature(c) {}

	void add(CreatureModifier* cm)
	{
		if (next)
			next->add(cm);
		else
			next = cm;
	}

	virtual void handle()
	{
		if (next)
			next->handle();
	}
};

class DoubleAttackModifier : public CreatureModifier
{
public:
	DoubleAttackModifier(Creature& c) : CreatureModifier(c) {}

	void handle() override
	{
		cout << "Double Attack!" << endl;
		creature.attack *= 2;
		CreatureModifier::handle();
	}
};


class IncreaseDefenseModifier : public CreatureModifier
{
public: 
	IncreaseDefenseModifier(Creature& c) : CreatureModifier(c) {}

	void handle() override
	{
		cout << "Defense Boosted!" << endl;
		creature.defense++;
		CreatureModifier::handle();
	}
};

class NoBonusModifier : public CreatureModifier
{
public:
	NoBonusModifier(Creature& c) : CreatureModifier(c) {}

	void handle() override
	{
		cout << "That's it" << endl;
	}
};

int main()
{
	Creature goblin{ "Goblin", 2, 3 };
	CreatureModifier root{ goblin };
	DoubleAttackModifier dam{ goblin };
	IncreaseDefenseModifier idm{ goblin };
	NoBonusModifier nbm{ goblin };
	
	root.add(&dam);
	root.add(&nbm);
	root.add(&idm);

	root.handle();

	cout << goblin.str() << endl;
	system("pause");
    return 0;
}

