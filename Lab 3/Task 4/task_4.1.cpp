/*
 * Создать класс (включая UML-диаграмму), описывающий объект
 * «банковский счет». С использованием данного класса разработать
 * программное обеспечение, позволяющие открыть счет клиенту, выполнять
 * операции пополнения и снятия, а также просматривать баланс.
*/
// UML
/*
	   BankAccount
	- name
	- money
	+ addMoney
	+ RemoveMoney
	+ display
*/

#include "task_4.1.h"
#include <iostream>

BankAccount::BankAccount() : name(0), money(0)
{
}

BankAccount::BankAccount(unsigned int name, double money) : name(name), money(money)
{
}

void BankAccount::addMoney(double sum)
{
	money += sum;
}

void BankAccount::removeMoney(double sum)
{
	if (money - sum >= 0.0)
		money -= sum;
	else
		std::cout << "You don't have enough money\n";
}

void BankAccount::display() const
{
	std::cout << "The name of bank account - " << name << std::endl;
	std::cout << "There is " << money << " on the account.\n";
}
