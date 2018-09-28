#ifndef CLIENT_H
#define CLIENT_H

#include "address.h"
#include <string>

class Client
{
	public:
		Client();
		Client(unsigned i, std::string n);
		void input();
		void show() const;
		void setIdentifier(unsigned i);
		void setName(std::string n);
	private:
		unsigned identifier;
		std::string name;
		Address address;
};

#endif
