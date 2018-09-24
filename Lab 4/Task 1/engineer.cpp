#include "engineer.h"
#include <iostream>

using std::string;

Engineer::Engineer(const Date & birth, string f_name, string l_name, string d) :
	Person(birth, f_name, l_name), department(d)
{
}

void Engineer::show() const
{
	Person::show();
	std::cout << "Department: " << department << std::endl;
}

string Engineer::getDepartment() const
{
	return department;
}

void Engineer::setDepartment(string d)
{
	department = d;
}
