#pragma once
class Point
{
	friend class PointFactory;
public:
	Point();
	~Point();
	// Factory Method
	static Point NewCartesian(float x, float y);
	static Point NewPolar(float r, float theta);
	Point(float x, float y);

	// can also put PointFactory as an inner class
	// 1) put the inner class as private and uses as singleton/static
	// 2) put the inner class as public
private:
	float x, y;
};
