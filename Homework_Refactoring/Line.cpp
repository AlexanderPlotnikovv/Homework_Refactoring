#include "Line.h"
Line::Line(std::vector<std::pair<int, int>> line_coordinates)
{
	type = 0;
	this->line_coordinates.resize(2);
	for (int i = 0; i < 2; ++i)
	{
		std::get<0>(this->line_coordinates[i]) = std::get<0>(line_coordinates[i]);
		std::get<1>(this->line_coordinates[i]) = std::get<1>(line_coordinates[i]);
	}
}

void Line::shift(int k)
{
	for (auto c : line_coordinates)
	{
		std::get<0>(c) += k;
		std::get<1>(c) += k;
	}
}

void Line::scale(int xyz)
{
	for (auto c : line_coordinates)
	{
		std::get<0>(c) *= xyz;
		std::get<1>(c) *= xyz;
	}
}

void Line::scaleX(int x)
{
	for (auto c : line_coordinates)
	{
		std::get<0>(c) *= x;
	}
}

void Line::scaleY(int y)
{
	for (auto c : line_coordinates)
	{
		std::get<1>(c) *= y;
	}
}
