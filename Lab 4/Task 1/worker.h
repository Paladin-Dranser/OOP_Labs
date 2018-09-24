#ifndef WORKER_H
#define WORKER_H

#include "date.h"
#include "person.h"
#include <string>

using std::string;

class Worker : public Person
{
	public:
		Worker(const Date & birth, string f_name, string l_name, unsigned h);
		void show() const;
		unsigned getHours() const;
		void setHours(unsigned h);
	private:
		unsigned hour_of_work;
		
};

#endif
