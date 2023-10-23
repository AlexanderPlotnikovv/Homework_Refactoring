#include "Cube.h"
Cube::Cube(std::vector<std::tuple<int, int, int>> cube_coordinates)
{
	type = 3;
	this->cube_coordinates.resize(8);
	for (int i = 0; i < 2; ++i)
	{
		std::get<0>(this->cube_coordinates[i]) = std::get<0>(cube_coordinates[i]);
		std::get<1>(this->cube_coordinates[i]) = std::get<1>(cube_coordinates[i]);
		std::get<2>(this->cube_coordinates[i]) = std::get<2>(cube_coordinates[i]);
	}
	first_side = abs(std::get<0>(cube_coordinates[0]) - std::get<0>(cube_coordinates[1]));
	second_side = abs(std::get<1>(cube_coordinates[0]) - std::get<1>(cube_coordinates[1]));
	third_side = abs(std::get<2>(cube_coordinates[0]) - std::get<2>(cube_coordinates[1]));

	square = 2 * (first_side * second_side + first_side * third_side + second_side * third_side);
	volume = first_side * second_side * third_side;
}
	void Cube::shift(int k, int l, int m)
	{
		for (auto c : cube_coordinates)
		{
			std::get<0>(c) += k;
			std::get<1>(c) += l;
			std::get<2>(c) += m;
		}
	}

	void Cube::scale(int xyz)
	{
		for (auto c : cube_coordinates)
		{
			std::get<0>(c) *= xyz;
			std::get<1>(c) *= xyz;
			std::get<2>(c) += xyz;
		}
	}

	void Cube::scaleX(int x)
	{
		for (auto c : cube_coordinates)
		{
			std::get<0>(c) *= x;
		}
	}

	void Cube::scaleY(int y)
	{
		for (auto c : cube_coordinates)
		{
			std::get<1>(c) *= y;
		}
	}

void Cube::scaleZ(int z)
{
	for (auto c : cube_coordinates)
	{
		std::get<2>(c) *= z;
	}
}
