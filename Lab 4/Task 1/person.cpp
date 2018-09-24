#include "person.h"
#include <iostream>

using std::string;

Person::Person(const Date & birthday, string first_name, string last_name)
{
	this->birthday = birthday;
	this->first_name = first_name;
	this->last_name = last_name;
}

Date Person::getBirthDay() const
{
	return birthday;
}

string Person::getFirstName() const
{
	return first_name;
}

string Person::getLastName() const
{
	return last_name;
}

void Person::show() const
{
	birthday.show();
	std::cout << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
}

void Person::setBirthDay(Date date)
{
	birthday = date;
}

void Person::setFirstName(string fname)
{
	first_name = fname;
}

void Person::setLastName(string lname)
{
	last_name = lname;
}
