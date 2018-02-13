#pragma once
#include "GraphicObject.h"
#include <iostream>
class CircleGO :
	public GraphicObject
{
public:
	CircleGO();
	~CircleGO();
	void draw() override;
};
