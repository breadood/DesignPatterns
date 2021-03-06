// BuilderPattern.cpp : Defines the entry point for the console application.
//
// Object Creatuional Pattern:
// When piecewise object construction 
// is complicated provide an API for 
// doing it succinctly
// 
#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include "HtmlBuilder.h"
using namespace std;

int main()
{
	// instead of directly create HtmlElement
	// we use HtmlBuilder

	HtmlBuilder builder{ "ul" };
	builder.add_child("li", "stuff");
	builder.add_child("li", "other stuff");
	cout << builder.str() << endl;
	system("pause");
    return 0;
}

