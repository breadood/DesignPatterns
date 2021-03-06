// FactoryPattern.cpp : Defines the entry point for the console application.
//
// Object creation is outsourced unlike builder pattern
// Factory: A component responsible solely for the wholesale creation of objects
#include "stdafx.h"

#include "DrinkFactory.h"
using namespace std;

int main()
{
	DrinkFactory df;
	auto drink = df.make_drink("tea", 200);
	drink->drink();
	system("pause");
    return 0;
}

