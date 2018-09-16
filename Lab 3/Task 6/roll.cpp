#include "roll.h"

Roll::Roll() : width(1.0), length(10.0)
{
}

Roll::Roll(double width, double length)
{
	this->width = width;
	this->length = length;
}

double Roll::getSquare() const
{
	return width * length;
}
