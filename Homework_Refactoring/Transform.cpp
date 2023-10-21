#include "Transform.h"

Transform::Transform(const Shape& sh)
{
	shape = sh;
}

Shape Transform::shift(int m, int n, int k)
{
	switch (shape.getType())
	{
	case Shape::line:
		for (int i = 0; i < 2; ++i)
		{
			std::get<0>(shape.coordinates[i]) += m;
			std::get<1>(shape.coordinates[i]) += n;
		}
		break;
	case Shape::sqr:
		for (int i = 0; i < 4; ++i)
		{
			std::get<0>(shape.coordinates[i]) += m;
			std::get<1>(shape.coordinates[i]) += n;
		}
		break;
	case Shape::cube:
		for (int i = 0; i < 8; ++i)
		{
			std::get<0>(shape.coordinates[i]) += m;
			std::get<1>(shape.coordinates[i]) += n;
			std::get<2>(shape.coordinates[i]) += k;
		}
		break;
	}
	return shape;
}

Shape Transform::scaleX(int a)
{
	switch (shape.getType())
	{
	case Shape::line:
		for (int i = 0; i < 2; ++i)
		{
			std::get<0>(shape.coordinates[i]) *= a;
		}
		break;
	case Shape::sqr:
		for (int i = 0; i < 4; ++i)
		{
			std::get<0>(shape.coordinates[i]) *= a;
		}
		break;
	case Shape::cube:
		for (int i = 0; i < 8; ++i)
		{
			std::get<0>(shape.coordinates[i]) *= a;
		}
		break;
	}
	return shape;
}

Shape Transform::scaleY(int d)
{
	switch (shape.getType())
	{
	case Shape::line:
		for (int i = 0; i < 2; ++i)
		{
			std::get<1>(shape.coordinates[i]) *= d;
		}
		break;
	case Shape::sqr:
		for (int i = 0; i < 4; ++i)
		{
			std::get<1>(shape.coordinates[i]) *= d;
		}
		break;
	case Shape::cube:
		for (int i = 0; i < 8; ++i)
		{
			std::get<1>(shape.coordinates[i]) *= d;
		}
		break;
	}
	return shape;
}

Shape Transform::scaleZ(int e)
{
	switch (shape.getType())
	{
	case Shape::line:
		for (int i = 0; i < 2; ++i)
		{
			std::get<2>(shape.coordinates[i]) *= e;
		}
		break;
	case Shape::sqr:
		for (int i = 0; i < 4; ++i)
		{
			std::get<2>(shape.coordinates[i]) *= e;
		}
		break;
	case Shape::cube:
		for (int i = 0; i < 8; ++i)
		{
			std::get<2>(shape.coordinates[i]) *= e;
		}
		break;
	}
	return shape;
}

Shape Transform::scale(int s)
{
	switch (shape.getType())
	{
	case Shape::line:
		for (int i = 0; i < 2; ++i)
		{
			std::get<0>(shape.coordinates[i]) *= s;
			std::get<1>(shape.coordinates[i]) *= s;
			std::get<2>(shape.coordinates[i]) *= s;
		}
		break;
	case Shape::sqr:
		for (int i = 0; i < 4; ++i)
		{
			std::get<0>(shape.coordinates[i]) *= s;
			std::get<1>(shape.coordinates[i]) *= s;
			std::get<2>(shape.coordinates[i]) *= s;
		}
		break;
	case Shape::cube:
		for (int i = 0; i < 8; ++i)
		{
			std::get<0>(shape.coordinates[i]) *= s;
			std::get<1>(shape.coordinates[i]) *= s;
			std::get<2>(shape.coordinates[i]) *= s;
		}
		break;
	}
	return shape;
}