/*
 * Создать класс (включая UML-диаграмму), описывающий объект
 * «банковский счет». С использованием данного класса разработать
 * программное обеспечение, позволяющие открыть счет клиенту, выполнять
 * операции пополнения и снятия, а также просматривать баланс.
*/
// compile with task_4.1.cpp
// UML
/*
	     BANK_ACCOUNT
	- account
	+ addMoney
	+ RemoveMoney
	+ display
*/

#include "task_4.1.h"

int main()
{
	BankAccount account(4532123, 100);
	account.display();
	account.addMoney(100);
	account.display();
	account.removeMoney(300);
	account.removeMoney(50);
	account.display();

	return 0;
}
