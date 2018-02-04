#include "stdafx.h"
#include "Point.h"
#include <cmath>

Point::Point()
{
}


Point::~Point()
{
}

Point Point::NewCartesian(float x, float y)
{
	return { x, y };
}

Point Point::NewPolar(float r, float theta)
{
	return { r * cos(theta), r*sin(theta) };
}

Point::Point(float x, float y)
	: x(x), y(y)
{}