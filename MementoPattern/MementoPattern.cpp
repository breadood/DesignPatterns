// MementoPattern.cpp : Defines the entry point for the console application.
//
// Memento:
// A token representing the system state
// Allowing user roll back to the state when 
// the token was generated. May (not) 
// directly expose state information (SNAPSHOTS)

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <memory>

using namespace std;

class Memento
{
	int balance;
public:
	Memento(int balance) : balance(balance) {}

	friend class BankAccount;
};

class BankAccount
{
	int balance{ 0 };
	vector<shared_ptr<Memento>> history;
	int current; // current state

	shared_ptr<Memento> add_history()
	{
		auto m = make_shared<Memento>(balance);
		history.emplace_back(m);
		return m;
	}
public:
	BankAccount(int balance) : balance(balance) {
		add_history();
		current = 0;
	}

	shared_ptr<Memento> deposit(int amount)
	{
		balance += amount;
		current++;
		return add_history();
	}

	void restore(const shared_ptr<Memento>& m)
	{
		if (m)
		{
			balance = m->balance;
			add_history();
			current = history.size() - 1;
		}
	}
	
	void undo()
	{
		if (current > 0)
		{
			current--;
			balance = history[current]->balance;
		}
	}

	void redo()
	{
		if (current < (history.size() - 1))
		{
			current++;
			balance = history[current]->balance;
		}
	}

	string str() const
	{
		ostringstream oss;
		oss << "balance: " << balance;
		return oss.str();
	}
};



int main()
{
	BankAccount ba{ 100 };
	auto m1 = ba.deposit(50);
	auto m2 = ba.deposit(25);
	cout << ba.str() << endl;

	ba.restore(m1);
	cout << ba.str() << endl;

	ba.undo();
	cout << ba.str() << endl;

	ba.undo();
	cout << ba.str() << endl;

	ba.redo();
	cout << ba.str() << endl;
	system("pause");
    return 0;
}

