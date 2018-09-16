#include "wall.h"

Wall::Wall() : width(20.0), height(5.0)
{
}

Wall::Wall(double width, double height)
{
	this->width = width;
	this->height = height;
}

double Wall::getSquare() const
{
	return width * height;
}
