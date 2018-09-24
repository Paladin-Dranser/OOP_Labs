#ifndef PERSON_H
#define PERSON_H

#include "date.h"
#include <string>

using std::string;

class Person
{
	public:
		Person(const Date & birthday, string first_name, string last_name);
		virtual void show() const;

		virtual Date getBirthDay() const;
		virtual string getFirstName() const;
		virtual string getLastName() const;

		virtual void setBirthDay(Date date);
		virtual void setFirstName(string fname);
		virtual void setLastName(string lname);
	private:
		Date birthday;
		string first_name;
		string last_name;
};

#endif
