#include "client.h"
#include <iostream>

Client::Client() : identifier(0), name("Nameless")
{
	address.input();
}

Client::Client(unsigned i, std::string n) : identifier(i), name(n)
{
	address.input();
}

void Client::input()
{
	std::cout << "Enter identifier: ";
	std::cin >> identifier;
	std::cin.get();
	std::cout << "Enter name: ";
	getline(std::cin, name);
	address.input();
}

void Client::show() const
{
	std::cout << "Identifier: " << identifier << std::endl;
	std::cout << "Name: " << name << std::endl;
	address.show();
}

void Client::setIdentifier(unsigned i)
{
	identifier = i;
}

void Client::setName(std::string n)
{
	name = n;
}
