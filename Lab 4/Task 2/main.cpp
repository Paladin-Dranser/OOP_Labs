/* Задание 2
 * Спроектировать иерархию классов и реализовать программу
 * согласно задания 6 к пункту 3.1
*/

#include "client.h"
#include "physical.h"
#include "juridical.h"

#include <iostream>

int main()
{
	Physical ph1;
	Physical ph2(12345, "Antoś", 2019577, "MP");
	Juridical ju1;
	Juridical ju2(12345, "IKEA", "OOO", 345, 345);

	std::cout << "\nShow:\n";

	ph1.show();
	std::cout << std::endl;
	ph2.show();
	std::cout << std::endl;
	ju1.show();
	std::cout << std::endl;
	ju2.show();
	std::cout << std::endl;

	std::cout << "\nEdit:\n";
	
	ph1.input();
	ph2.setNumberOfPassport(11111);
	ju1.input();
	ju2.setForm("ЗАО");

	std::cout << "\nShow:\n";

	ph1.show();
	std::cout << std::endl;
	ph2.show();
	std::cout << std::endl;
	ju1.show();
	std::cout << std::endl;
	ju2.show();
	std::cout << std::endl;

	return 0;
}
