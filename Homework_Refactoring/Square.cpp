#include "Square.h"
Square::Square(std::vector<std::pair<int, int>> square_coordinates)
{
	type = 1;
	this->square_coordinates.resize(4);
	for (int i = 0; i < 4; ++i)
	{
		std::get<0>(this->square_coordinates[i]) = std::get<0>(square_coordinates[i]);
		std::get<1>(this->square_coordinates[i]) = std::get<1>(square_coordinates[i]);
	}
	first_size = abs(std::get<0>(square_coordinates[0]) - std::get<0>(square_coordinates[1]));
	second_size = abs(std::get<1>(square_coordinates[0]) - std::get<1>(square_coordinates[1]));
	square = first_size * second_size;
}

void Square::shift(int k, int l)
{
	for (auto c : square_coordinates)
	{
		std::get<0>(c) += k;
		std::get<1>(c) += l;
	}
}

void Square::scale(int xyz)
{
	for (auto c : square_coordinates)
	{
		std::get<0>(c) *= xyz;
		std::get<1>(c) *= xyz;
	}
}

void Square::scaleX(int x)
{
	for (auto c : square_coordinates)
	{
		std::get<0>(c) *= x;
	}
}

void Square::scaleY(int y)
{
	for (auto c : square_coordinates)
	{
		std::get<1>(c) *= y;
	}
}