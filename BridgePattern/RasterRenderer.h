#pragma once
#include "Renderer.h"
#include <iostream>
class RasterRenderer :
	public Renderer
{
public:
	RasterRenderer();
	~RasterRenderer();
	void render_circle(float x, float y, float radius) override;
};

