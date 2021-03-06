// BridgePattern.cpp : Defines the entry point for the console application.
//
// Bridge pattern prevent cartesian product
// Bridge: A mechanism that decouples an interface from an implementation
#include "stdafx.h"
#include "Circle.h"
#include "RasterRenderer.h"
// Shapes - circle, square
// renderer - raster, vector

// RasterCircle, RasterSquare, VectorCircle, VectorCircle -> Scale too much

// instead of having one renderer for one shape,
// calling VectorCircleRenderer.render(circle);
// a shape takes a renderer superclass in, and work with renderer
using namespace std;

int main()
{
	RasterRenderer renderer;
	Circle c{ renderer, 2, 3, 4 };
	c.draw();
	c.resize(2);
	c.draw();

	system("pause");
    return 0;
}

