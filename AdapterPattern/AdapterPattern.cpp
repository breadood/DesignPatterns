// AdapterPattern.cpp : Defines the entry point for the console application.
//
// Adapter: A construct which adapts an
// existing interface X to conform to the
// required system Y
#include "stdafx.h"
#include "Rectangle.h"
#include "Square.h"
#include "SquareToRectangleAdapter.h"

#include <iostream>
using namespace std;

int main()
{
	Square square{ 3 };
	SquareToRectangleAdapter rectangle{ square };
	cout << rectangle.area() << endl;
	system("pause");
    return 0;
}

