#pragma once
#include "Shape.h"
class Square : public Shape
{
public:
	int first_size, second_size;
	std::vector<std::pair<int, int>> square_coordinates;
	Square(std::vector<std::pair<int, int>> square_coordinates);
	void shift(int k, int l);
	void scale(int xyz);
	void scaleX(int x);
	void scaleY(int y);
};

