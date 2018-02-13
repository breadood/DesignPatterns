#pragma once
class Renderer
{
public:
	Renderer();
	virtual ~Renderer();
	virtual void render_circle(float x, float y, float radius) = 0;
};
