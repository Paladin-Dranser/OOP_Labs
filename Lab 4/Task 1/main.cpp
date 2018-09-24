/* Задание 1
 * Построить иерархию классов в виде UML-диаграммы,
 * определив необходимые свойства и методы (конструкторы, присваивание и
 * получение значений свойств объектов, вывод значений свойств объектов).
 * Реализовать программу на ЯП С++, согласно построенной диаграмме.
*/

// 2 Служащий, персона, рабочий, инженер

#include "date.h"
#include "person.h"
#include "engineer.h"
#include "worker.h"
#include "clerk.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Engineer engineer(Date(12,4,1995), "Antoś", "Bućko", "Communication");
	Worker worker(Date(1,1,1990), "Kiryl", "Kaminski", 80);
	Clerk clerk(Date(12,3,2000), "Mikaso", "Yuri", "Slaver");

	cout << "Show:\n";
    engineer.show();
	worker.show();
	clerk.show();

	cout << endl;	
	cout << "Engineer's \"get\":\n";

	engineer.getBirthDay().show();
	cout << endl;
	cout << engineer.getFirstName() << endl;
	cout << engineer.getLastName() << endl;
	cout << engineer.getDepartment() << endl;

	cout << "Worker's \"get\":\n";

	worker.getBirthDay().show();
	cout << endl;
	cout << worker.getFirstName() << endl;
	cout << worker.getLastName() << endl;
	cout << worker.getHours() << endl;

	cout << "Clerk's \"get\":\n";

	clerk.getBirthDay().show();
	cout << endl;
	cout << clerk.getFirstName() << endl;
	cout << clerk.getLastName() << endl;
	cout << clerk.getPosition() << endl;

	cout << "\nSet:\n";

	engineer.setFirstName("Anton");
	worker.setLastName("KK");
	clerk.setBirthDay(Date(12,12,12));

	cout << "Engineer's first name: " << engineer.getFirstName() << endl;
	cout << "Worker's last name: " << worker.getLastName() << endl;
	cout << "Clerk's birthday: ";
	clerk.getBirthDay().show();
	cout << endl;

	return 0;
}
