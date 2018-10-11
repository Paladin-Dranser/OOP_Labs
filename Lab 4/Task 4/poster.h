#ifndef POSTER_H
#define POSTER_H

#include <string>

class Poster
{
	public:
		Poster(std::string advText, double area_cost, double letter_cost);
		virtual double getArea() const = 0;
		virtual double getPerimeter() const = 0;
		void print() const;
		double getAreaCost() const;
		double getLetterCost() const;
		double getCost() const;
	protected:
		std::string advText;
		double area_cost;
		double letter_cost;
};

#endif
