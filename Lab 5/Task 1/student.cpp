#include "student.h"

Student::Student()
{
}

Student::Student(std::string & birthday, std::string & last_name) :
	birthday_(birthday), last_name_(last_name)
{
}

std::string Student::getLastName() const
{
	return last_name_;
}

std::string Student::getBirthDay() const
{
	return birthday_;
}

std::istream & operator>>(std::istream & is, Student & s)
{
	std::cout << "Enter a last name: ";
	is >> s.last_name_;
	std::cout << "Enter a date of birthday: ";
	is >> s.birthday_;

	return is;
}

std::ostream & operator<<(std::ostream & os, const Student & s)
{
	os << "Last name: " << s.last_name_ << std::endl;
	os << "Birthday: " << s.birthday_ << std::endl;

	return os;
}
