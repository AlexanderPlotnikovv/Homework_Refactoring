#include "Circle.h"
Circle::Circle(std::pair<int, int> circle_center, int Radius)
{
	type = 2;
	this->circle_center = circle_center;
	this->Radius = Radius;
	square = 3.14 * Radius * Radius;
}

void Circle::shift(int r)
{
	Radius += r;
}

void Circle::scale(int k)
{
	Radius *= k;
}
