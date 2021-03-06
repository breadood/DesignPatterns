// FlyweightPattern.cpp : Defines the entry point for the console application.
//
// Flyweight:
// - Avoid redundancy when storing data
// - A space optimization technique to use
//   less memory by storing externally the data 
//   associated with similar objects
#include "stdafx.h"
#include <iostream>
#include "TextFormatter.h"

using namespace std;

int main()
{
	TextFormatter tf{ "Text is great" };
	tf.get_range(8, 12).cap = true;

	cout << tf.str() << endl;
	system("pause");
    return 0;
}

