#ifndef PERSON_H
#define PERSON_H

#include "date.h"
#include <string>

using std::string;

class Person
{
	public:
		Person(const Date & birthday, string first_name, string last_name);
		void show() const;

		Date getBirthDay() const;
		string getFirstName() const;
		string getLastName() const;

		void setBirthDay(Date date);
		void setFirstName(string fname);
		void setLastName(string lname);
	private:
		Date birthday;
		string first_name;
		string last_name;
};

#endif
