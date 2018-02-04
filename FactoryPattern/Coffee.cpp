#include "stdafx.h"
#include "Coffee.h"
#include <iostream>

using namespace std;
Coffee::Coffee()
{
}


Coffee::~Coffee()
{
}

void Coffee::prepare(int volume)
{
	cout << "Coffee of " << volume << "ml + suger " << endl;
}

void Coffee::drink()
{
	cout << "hmmm good coffee!" << endl;
}
