#include "Cylinder.h"
Cylinder::Cylinder(std::tuple<int, int, int> circle_center, int Radius, int Height)
{
	type = 4;
	this->base_center = base_center;
	this->Radius = Radius;
	this->Height = Height;
	square = 2 * 3.14 * Radius * (Radius + Height);
	volume = 3.14 * Radius * Radius * Height;
}

void Cylinder::shift(int r, int h)
{
	Radius += r;
	Height += h;
}

void Cylinder::scaleRadius(int k)
{
	Radius *= k;
}

void Cylinder::scaleHeight(int k)
{
	Height *= k;
}

void Cylinder::scale(int rk, int hk)
{
	Radius *= rk;
	Height *= hk;
}