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

#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT

class BankAccount
{
	public:
		BankAccount();
		BankAccount(unsigned int name = 0, double money = 0.0);
		void addMoney(double sum);
		void removeMoney(double sum);
		void display() const;
	private:
		unsigned int name;
		double money;
};

#endif
