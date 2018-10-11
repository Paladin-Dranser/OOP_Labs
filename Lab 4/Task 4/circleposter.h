#ifndef CIRCLEPOSTER_H
#define CIRCLEPOSTER_H

#include "poster.h"
#include <string>

class CirclePoster : public Poster
{
	public:
		CirclePoster(std::string advText, double area_cost, double letter_cost, double r);
		virtual double getArea() const override final;
		virtual double getPerimeter() const override final;
		void print() const;
	private:
		double radius;
};

#endif
