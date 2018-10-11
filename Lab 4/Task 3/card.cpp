#include "card.h"
#include <iostream>

Card::Card()
{
	std::cout << "Enter an id: ";
	std::cin >> id_;
	std::cin.get();
	std::cout << "Enter a full name: ";
	getline(std::cin, full_name_);
	std::cout << "Enter a phone: ";
	std::cin >> phone_;
	std::cout << "Enter an account: ";
	std::cin >> account_;
	std::cout << "Enter a term of lease:\n";
	unsigned d, m, y;
	std::cout << "Enter a day: ";
	std::cin >> d;
	std::cout << "Enter a month: ";
	std::cin >> m;
	std::cout << "Enter an year: ";
	std::cin >> y;
	term_of_lease_.setDate(d, m, y);
}


Card::Card(unsigned long id, std::string name, unsigned long ph, unsigned long acc, Date term) : id_(id), full_name_(name), phone_(ph), account_(acc), term_of_lease_(term)
{
}

void Card::annul()
{
	term_of_lease_.setDate(0, 0, 0);
}

void Card::continue_card()
{
	term_of_lease_.incYear();
}

void Card::show() const
{
	std::cout << "Id = " << id_ << std::endl;
	std::cout << "Full name is " << full_name_ << std::endl;
	std::cout << "Phone is " << phone_ << std::endl;
	std::cout << "Account is " << account_ << std::endl;
	std::cout << "Term of lease = ";
	term_of_lease_.show();
	std::cout << std::endl;
}
