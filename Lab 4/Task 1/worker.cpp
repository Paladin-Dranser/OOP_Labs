#include "worker.h"
#include <iostream>

using std::string;

Worker::Worker(const Date & birth, string f_name, string l_name, unsigned h) :
	Person(birth, f_name, l_name), hour_of_work(h)
{
}

void Worker::show() const
{
	Person::show();
	std::cout << "The number of hours of work: " << hour_of_work << std::endl;
}

unsigned Worker::getHours() const
{
	return hour_of_work;
}

void Worker::setHours(unsigned h)
{
	hour_of_work = h;
}
