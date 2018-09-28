#include "physical.h"
#include <iostream>

Physical::Physical() : Client(), number_of_passport(0), series_of_passport("KH")
{
}

Physical::Physical(unsigned id, std::string name, unsigned long number, std::string series) : Client(id, name), number_of_passport(number), series_of_passport(series)
{
}

void Physical::input()
{
	Client::input();
	std::cout << "Enter passport number: ";
	std::cin >> number_of_passport;
	std::cin.get();
	std::cout << "Enter passport series: ";
	std::cin >> series_of_passport;
}

void Physical::show() const
{
	Client::show();
	std::cout << "Passport number: " << number_of_passport << std::endl;
	std::cout << "Passport series: " << series_of_passport << std::endl;
}

void Physical::setNumberOfPassport(unsigned long number)
{
	number_of_passport = number;
}

void Physical::setSeriesOfPassport(std::string series)
{
	series_of_passport = series;
}
