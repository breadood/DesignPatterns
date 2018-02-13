#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}

int Rectangle::area() const
{
	return width() * height();
}
