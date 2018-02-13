#include "stdafx.h"
#include "SquareToRectangleAdapter.h"

SquareToRectangleAdapter::SquareToRectangleAdapter(const Square & square)
{
	side = square.get_side();
}

SquareToRectangleAdapter::~SquareToRectangleAdapter()
{
}

int SquareToRectangleAdapter::width() const
{
	return side;
}

int SquareToRectangleAdapter::height() const
{
	return side;
}
