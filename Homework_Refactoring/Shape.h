#pragma once
#include <vector>
#include <tuple>
class Shape
{
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;
	Shape() = default;
	Shape(int type,std::vector<std::tuple<int,int,int>> coordinates);
	Shape(int type, int _x1, int _y1, double R, double H);
	int getType() { return type; }

	int type;
	std::vector<std::tuple<int, int, int>> coordinates;
	double volume;
	double square;
	double height;
	double radius;
};

