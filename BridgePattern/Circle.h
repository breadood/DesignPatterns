#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	~Circle();
	Circle(Renderer & renderer, float x, float y, float radius) :
		Shape(renderer), x{ x }, y{ y }, radius{ radius } {}

	void draw() override;
	void resize(float factor) override;
private:
	float x, y, radius;
};
