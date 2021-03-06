// DecoratorPattern.cpp : Defines the entry point for the console application.
//
// Decorator: Augment an object with additional functionality
// * Do not alter existing code
// * Keep new functionality separate
// 1. Aggregate the decorated object 
// 2. Inherit from the decorated object 
#include "stdafx.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

struct Shape
{
	virtual string str() const = 0;
};

struct Circle : Shape
{
	double radius;

	Circle() {}

	Circle(double radius) : radius(radius) {}

	void resize(double factor)
	{
		radius *= factor;
	}

	string str() const override
	{
		ostringstream oss;
		oss << "A circle of radius " << radius;
		return oss.str();
	}
};

struct Square : Shape
{
	double side;

	Square() {}

	Square(double side) : side(side) {}

	string str() const override
	{
		ostringstream oss;
		oss << "A square of side " << side;
		return oss.str();
	}
};
// dynamic decorator - aggregate
struct ColoredShape : Shape
{
	Shape& shape;
	string color;

	ColoredShape(Shape& shape, const string& color) : shape(shape), color(color) {}

	string str() const override
	{
		ostringstream oss;
		oss << shape.str() << " has color " << color;
		return oss.str();
	}
};

// static decorator
template <typename T> struct ColoredShape2 : T
{
	static_assert(is_base_of<Shape, T>::value, "Needs to be a shape");

	string color;

	ColoredShape2() {}
	
	template <typename...Args>
	ColoredShape2(const string& color, Args ...args)
		: T(std::forward<Args>(args)...), color(color) {}

	string str() const override
	{
		ostringstream oss;
		oss << T::str() << " has color " << color;
		return oss.str();
	}
};
int main()
{
	Square square{ 5 };
	ColoredShape red_square{ square, "red" };

	ColoredShape2<Circle> green_circle{ "green", 5 };
	green_circle.resize(2);
	
	cout << red_square.str() << endl;
	cout << green_circle.str() << endl;

	system("pause");
    return 0;
}

