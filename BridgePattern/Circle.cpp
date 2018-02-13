#include "stdafx.h"
#include "Circle.h"


Circle::~Circle()
{
}

void Circle::draw()
{
	renderer.render_circle(x, y, radius);
}

void Circle::resize(float factor)
{
	radius *= factor;
}
