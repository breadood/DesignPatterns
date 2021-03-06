// TemplateMethod.cpp : Defines the entry point for the console application.
//

// Template Method
// Allows us to define the skeleton of the algorithm,
// with concrete implementations defined in subclass
#include "stdafx.h"
#include <sstream>
#include <memory>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Game
{
public:
	Game(int number_of_players) : number_of_players(number_of_players) {}

	void run()
	{
		start();

		while (!have_winner())
			take_turn();
		cout << "Player " << get_winner() << " won" << endl;
	}

protected:
	virtual void start() = 0;
	virtual bool have_winner() = 0;
	virtual void take_turn() = 0;
	virtual int get_winner() = 0;
	int number_of_players;
};

class Draft : public Game
{
public:
	Draft() : Game(6) {}

protected:
	void start() 
	{
		cout << "start drafting\n";
	}

	bool have_winner()
	{
		return current_number >= 6;
	}

	void take_turn()
	{
		cout << "next player drafts\n";
		current_number++;
	}

	int get_winner()
	{
		return 6;
	}

	int current_number{ 0 };
};

int main()
{
	Game* game = new Draft();
	game->run();
	delete game;


	system("pause");
    return 0;
}

