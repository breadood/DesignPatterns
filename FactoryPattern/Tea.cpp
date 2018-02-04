#include "stdafx.h"
#include "Tea.h"
#include <iostream>
using namespace std;
Tea::Tea()
{
}


Tea::~Tea()
{
}

void Tea::prepare(int volume)
{
	cout << "Tea bag + boil water " << volume << "ml." << endl;
}

void Tea::drink()
{
	cout << "nice tea indeed!" << endl;
}
