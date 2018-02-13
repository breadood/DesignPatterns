#pragma once
class Rectangle
{
public:
	Rectangle();
	virtual ~Rectangle();
	virtual int width() const = 0;
	virtual int height() const = 0;

	int area() const;
};

