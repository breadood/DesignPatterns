// CompositePattern.cpp : Defines the entry point for the console application.
//
// Composite:
// A mechanism for treating individual
// objects and compositions of objects
// in a uniform manner

#include "stdafx.h"
#include "CircleGO.h"
#include "GroupGO.h"

using namespace std;

int main()
{
	GroupGO root("root");
	CircleGO c1, c2;
	root.add_object(&c1);
	GroupGO subgroup("sub");
	subgroup.add_object(&c2);
	root.add_object(&subgroup);

	root.draw();
	system("pause");
    return 0;
}

