#pragma once
#include "Shape.h"
class Line : public Shape
{
public:
	std::vector<std::pair<int, int>> line_coordinates;
	Line(std::vector<std::pair<int, int>> line_coordinates);
	void shift(int k);
	void scale(int xyz);
	void scaleX(int x);
	void scaleY(int y);
};

