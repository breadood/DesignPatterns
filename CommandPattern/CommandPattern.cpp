// CommandPattern.cpp : Defines the entry point for the console application.
//
// Command:
// An object that represents an operation
// An object which represents an instruction to perform
// a particular (series of) action. Contains all the 
// information necessary for the action to be taken

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

struct BankAccount
{
	int balance{ 0 };
	int overdraft_limit{ 500 };

	void deposit(int amount)
	{
		cout << "depositing..." << endl;
		balance += amount;
		cout << "balance: " << balance << endl;
	}

	bool withdraw(int amount)
	{
		cout << "withdrawing..." << endl;
		if (balance - amount >= -overdraft_limit) 
		{
			balance -= amount;
			cout << "balance: " << balance << endl;
			return true;
		} 

		cout << "withdraw fail..." << endl;
			
		return false;
	}
};

struct Command
{
	bool success;
	virtual void call() = 0;
	virtual void undo() = 0;
};

struct BankAccountCommand : Command
{
	BankAccount& account;
	enum Action {deposit, withdraw} action;
	int amount;

	BankAccountCommand(BankAccount& account, Action action, int amount) :
		account(account), action(action), amount(amount) {
		success = false;
	}

	void call() override {
		switch (action)
		{
		case deposit:
			account.deposit(amount);
			success = true;
			break;
		case withdraw:
			success = account.withdraw(amount);
			break;
		}
	}

	void undo() override
	{
		if (!success) return;
		cout << "undoing..." << endl;
		switch (action)
		{
		case deposit:
				account.withdraw(amount);
			break;
		case withdraw:
				account.deposit(amount);
			break;
		}
	}
};

int main()
{
	BankAccount ba;

	vector<BankAccountCommand> commands
	{
		BankAccountCommand{ ba, BankAccountCommand::deposit, 150 },
		BankAccountCommand{ ba, BankAccountCommand::withdraw, 2000 }
	};
	
	for (auto& c : commands)
	{
		c.call();
	}

	commands[1].undo();
	
	system("pause");
    return 0;
}

