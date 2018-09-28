#include "juridical.h"
#include <iostream>

Juridical::Juridical() :
	Client(), form("Formless"), account(0), account_number(0)
{
}

Juridical::Juridical(unsigned id, std::string name, std::string form, unsigned long account, unsigned long account_number) :
	Client(id, name), form(form), account(account), account_number(account_number)
{
}

void Juridical::input()
{
	Client::input();
	std::cout << "Enter a form: ";
	std::cin >> form;
	std::cout << "Enter an account: ";
	std::cin >> account;
	std::cout << "Enter an account number: ";
	std::cin >> account_number;
	std::cin.get();
}

void Juridical::show() const
{
	Client::show();
	std::cout << "Form: " << form << std::endl;
	std::cout << "Account: " << account << std::endl;
	std::cout << "Account number: " << account_number << std::endl;
}

void Juridical::setForm(std::string f)
{
	form = f;
}

void Juridical::setAccount(unsigned long ac)
{
	account = ac;
}

void Juridical::setAccountNumber(unsigned long acc)
{
	account_number = acc;
}
