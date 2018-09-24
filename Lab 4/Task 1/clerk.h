#ifndef CLERK_H
#define CLERK_H 

#include "date.h"
#include "person.h"
#include <string>

using std::string;

class Clerk : public Person
{
	public:
		Clerk(const Date & birth, string f_name, string l_name, string p);
		void show() const;
		string getPosition() const;
		void setPosition(string p);
	private:
		string position;
};

#endif
