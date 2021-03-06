// ProxyPattern.cpp : Defines the entry point for the console application.
//

// Proxy:
// same interface, different behavior

// A class that functions as an interface to a particular resource. 
// Example: smart_points are proxies for pointers
#include "stdafx.h"
#include <iostream>

// property proxy

using namespace std;
template <typename T>
struct Property
{
	T value;

	Property(T value)
	{
		*this = value;
	}

	// conversion operator
	operator T()
	{
		cout << "Converting property" << endl;
		return value;
	}

	T operator=(T new_value)
	{
		cout << "Assigning property" << endl;
		return value = new_value;
	}
};

struct Creature
{
	Property<int> strength{ 10 };
	Property<int> agility{ 10 };
};

int main()
{
	Creature c;
	c.agility = 15;
	cout << c.agility << endl;

	system("pause");
    return 0;
}

