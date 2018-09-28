#include "address.h"
#include <iostream>

Address::Address() :
	city("No"), street("No"), number_of_house(0), number_of_flat(0)
{
}

Address::Address(std::string c, std::string s, unsigned house, unsigned flat) :
	city(c), street(s), number_of_house(house), number_of_flat(flat)
{
}

void Address::input()
{
	std::cout << "Enter a city: ";
	std::cin >> city;
	std::cout << "Enter a street: ";
	std::cin >> street;
	std::cout << "Enter a number of house: ";
	std::cin >> number_of_house;
	std::cout << "Enter a number of flat: ";
	std::cin >> number_of_flat;
}

void Address::show() const
{
	std::cout << "City: " << city << std::endl;
	std::cout << "Street: " << street << std::endl;
	std::cout << "House: " << number_of_house << std::endl;
	std::cout << "Flat: " << number_of_flat << std::endl;
}

void Address::setCity(std::string c)
{
	city = c;
}

void Address::setStreet(std::string s)
{
	street = s;
}

void Address::setHouse(unsigned h)
{
	number_of_house = h;
}

void Address::setFlat(unsigned f)
{
	number_of_flat = f;
}
