#include "poster.h"
#include <iostream>

Poster::Poster(std::string advText, double area_cost, double letter_cost) :
	advText(advText), area_cost(area_cost), letter_cost(letter_cost)
{
}

void Poster::print() const
{
	std::cout << "Text: " << advText << ". Area: " << getArea();
}

double Poster::getAreaCost() const
{
	return area_cost * getArea();
}

double Poster::getLetterCost() const
{
	return letter_cost * advText.size();
}

double Poster::getCost() const
{
	return getAreaCost() + getLetterCost();
}
