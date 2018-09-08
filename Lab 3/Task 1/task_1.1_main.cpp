/* Задание 1.
 * Изучить теоретический материал п 2.1 и 2.2,
 * выполнить приведенные там примеры
 * и контрольное задание 9 к п. 2.1
*/

// compile with task_1.1_fraction_methods.cpp

#include <iostream>
#include "task_1.1.h"

int main()
{
	fraction A;
	std::cout << "Введите дробь\n";
	A.input();

	int k;
	std::cout << "Введите число, на которое нужно умножить дробь.\n";
	std::cin >> k;

	A.mult(k);

	A.output();

	std::cout << "Дробь " << A.isProper() << std::endl;

	std::cout << "\nTask_9\n";
	
	fraction B[3];

	for (int i = 0; i < 3; ++i)
		B[i].input();
	
	for (const fraction & x : B)
		x.outputWholePart();

	return 0;
}
