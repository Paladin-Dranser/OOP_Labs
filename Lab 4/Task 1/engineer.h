#ifndef ENGINEER_H
#define ENGINEER_H 

#include "date.h"
#include "person.h"
#include <string>

using std::string;

class Engineer : public Person
{
	public:
		Engineer(const Date & birth, string f_name, string l_name, string d);
		void show() const;
		string getDepartment() const;

		void setDepartment(string d);
	private:
		string department;
};

#endif

