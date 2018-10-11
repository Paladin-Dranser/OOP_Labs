#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student
{
	public:
		Student();
		Student(std::string & birthday, std::string & last_name);
		std::string getLastName() const;
		std::string getBirthDay() const;
	public:
		friend std::istream & operator>>(std::istream & is, Student & s);
		friend std::ostream & operator<<(std::ostream & os, const Student & s);
	private:
		std::string last_name_;
		std::string birthday_;
};

#endif
