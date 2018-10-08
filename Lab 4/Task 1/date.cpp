#include "date.h"
#include <iostream>

Date::Date() : day(1), month(1), year(1)
{
}

Date::Date(unsigned d, unsigned m, unsigned y) : day(d), month(m), year(y)
{
}

void Date::show() const
{
	std::cout << day << '.' << month << '.' << year;
}
