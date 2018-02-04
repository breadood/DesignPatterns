#pragma once
#include "Point.h"
class PointFactory
{
public:
	PointFactory();
	~PointFactory();
	static Point NewCartesian(float x, float y);
	static Point NewPolar(float r, float theta);
};
