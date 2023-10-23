#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	std::pair<int, int> circle_center;
	int Radius;
	Circle(std::pair<int, int> circle_center, int Radius);
	void shift(int r);
	void scale(int k);
};

