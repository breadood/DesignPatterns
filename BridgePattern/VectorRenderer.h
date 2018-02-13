#pragma once
#include "Renderer.h"
#include <iostream>

class VectorRenderer :
	public Renderer
{
public:
	VectorRenderer();
	~VectorRenderer();
	void render_circle(float x, float y, float radius) override;
};

