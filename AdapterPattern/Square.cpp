#include "stdafx.h"
#include "Square.h"


Square::Square(const int side)
{
	this->side = side;
}

Square::~Square()
{
}

int Square::get_side() const
{
	return side;
}
