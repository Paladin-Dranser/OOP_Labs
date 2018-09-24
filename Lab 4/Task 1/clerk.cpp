#include "clerk.h"
#include <iostream>

using std::string;

Clerk::Clerk(const Date & birth, string f_name, string l_name, string p) :
	Person(birth, f_name, l_name), position(p)
{
}

void Clerk::show() const
{
	Person::show();
	std::cout << "Position: " << position << std::endl;
}

string Clerk::getPosition() const
{
	return position;
}

void Clerk::setPosition(string p)
{
	position = p;
}
