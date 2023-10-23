#pragma once
#include <vector>
#include <tuple>
class Shape
{
public:
	Shape() = default;
	int getType() { return type; }
	int type;
	double volume;
	double square;
};