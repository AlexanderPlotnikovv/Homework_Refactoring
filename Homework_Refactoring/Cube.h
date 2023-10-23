#pragma once
#include "Shape.h"
class Cube : public Shape
{
public:
	int first_side, second_side, third_side;
	std::vector<std::tuple<int, int, int>> cube_coordinates;
	Cube(std::vector<std::tuple<int, int, int>> cube_coordinates);
	void shift(int k, int l, int m);
	void scale(int xyz);
	void scaleX(int x);
	void scaleY(int y);
	void scaleZ(int z);
};

