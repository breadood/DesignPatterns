#pragma once
#include "Rectangle.h"
#include "Square.h"
class SquareToRectangleAdapter :
	public Rectangle
{
public:
	SquareToRectangleAdapter(const Square& square);
	~SquareToRectangleAdapter();
	int width() const;
	

	int height() const;
	
private:
	int side;
};


