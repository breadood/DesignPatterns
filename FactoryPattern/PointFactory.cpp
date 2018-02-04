#include "stdafx.h"
#include "PointFactory.h"
#include <cmath>

PointFactory::PointFactory()
{
}


PointFactory::~PointFactory()
{
}

Point PointFactory::NewCartesian(float x, float y)
{
	return { x, y };
}

Point PointFactory::NewPolar(float r, float theta)
{
	return { r * cos(theta), r*sin(theta) };
}
