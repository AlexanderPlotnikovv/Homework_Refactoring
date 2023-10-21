#include "Shape.h"
#define _USE_MATH_DEFINES
#include<cmath>

Shape::Shape(int _type, std::vector<std::tuple<int, int, int>> coordinates)
{
	int a = abs(std::get<0>(coordinates[0]) - std::get<0>(coordinates[1]));
	int b = abs(std::get<1>(coordinates[0]) - std::get<2>(coordinates[1]));
	int c = abs(std::get<2>(coordinates[0]) - std::get<2>(coordinates[1]));
	type = _type;
	switch (type)
	{
	case line:
		for (int i = 0; i < 2; ++i)
		{
			std::get<0>(this->coordinates[i]) = std::get<0>(coordinates[i]);
			std::get<1>(this->coordinates[i]) = std::get<1>(coordinates[i]);
		}
		square = 0;
		volume = 0;
		break;
	case sqr:
		for (int i = 0; i < 4; ++i)
		{
			std::get<0>(this->coordinates[i]) = std::get<0>(coordinates[i]);
			std::get<1>(this->coordinates[i]) = std::get<1>(coordinates[i]);
		}
		square = a * b;
		volume = 0;
		break;
	case cube:
		for (int i = 0; i < 8; ++i)
		{
			std::get<0>(this->coordinates[i]) = std::get<0>(coordinates[i]);
			std::get<1>(this->coordinates[i]) = std::get<1>(coordinates[i]);
			std::get<2>(this->coordinates[i]) = std::get<2>(coordinates[i]);
		}
		square = 2 * a * b + 2 * a * c + 2 * b * c;
		volume = a * b * c;
		break;
	default:
		break;
	}
}

Shape::Shape(int type, int _x1, int _y1, double R, double H)
{
	std::get<0>(coordinates[0]) = _x1;
	std::get<1>(coordinates[0]) = _y1;
	radius = R;
	switch (type)
	{
	case circle:
		square = 3.14 * R * R;
		volume = 0;
		break;
	case cylinder:
		height = H;
		square = 2 * 3.14 * R * R + 2 * 3.14 * R * height;
		volume = 3.14 * R * R * height;
		break;
	default:
		break;
	}
}