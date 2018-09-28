#ifndef PHYSICAL_H
#define PHYSICAL_H

#include "client.h"
#include <string>

class Physical : public Client
{
	public:
		Physical();
		Physical(unsigned id, std::string name, unsigned long number, std::string series);
		void input();
		void show() const;
		void setNumberOfPassport(unsigned long number);
		void setSeriesOfPassport(std::string series);
	private:
		unsigned long number_of_passport;
		std::string series_of_passport;
};

#endif
