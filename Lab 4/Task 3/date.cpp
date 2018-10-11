#include "date.h"
#include <iostream>

Date::Date() : day_(1), month_(1), year_(1)
{
}

Date::Date(unsigned d, unsigned m, unsigned y) : day_(d), month_(m), year_(y)
{
}

void Date::show() const
{
	std::cout << day_ << '.' << month_ << '.' << year_;
}


void Date::setDate(unsigned d, unsigned m, unsigned y)
{
	day_ = d;
	month_ = m;
	year_ = y;
}

void Date::incYear()
{
	++year_;
}
