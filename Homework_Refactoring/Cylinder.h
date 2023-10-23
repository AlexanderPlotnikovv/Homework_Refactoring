#pragma once
#include "Shape.h"
class Cylinder : public Shape
{
	std::tuple<int, int, int> base_center;
	int Radius;
	int Height;
	Cylinder(std::tuple<int, int, int> base_center, int Radius, int Height);
	void shift(int r, int h);
	void scaleRadius(int k);
	void scaleHeight(int k);
	void scale(int rk, int hk);
};

