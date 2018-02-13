#pragma once
#include "Renderer.h"

class Shape
{
public:
	virtual ~Shape();
	virtual void draw() = 0;
	virtual void resize(float factor) = 0;
protected:
	Renderer & renderer;
	Shape(Renderer & renderer) : renderer(renderer) {}	
};
