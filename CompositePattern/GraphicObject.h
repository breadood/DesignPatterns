#pragma once
class GraphicObject
{
public:
	GraphicObject();
	virtual ~GraphicObject();
	virtual void draw() = 0;
};
