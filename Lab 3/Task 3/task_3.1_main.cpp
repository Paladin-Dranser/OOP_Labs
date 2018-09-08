/* Задание 3.
 * Добавить к программе, разработанной в задании 1 вывод на
 * экран информации об авторе и дате запуска программы в следующему виде:
 * Автор:ХХХХ
 * Дата: YY-MM-DD HH:MM:SS
*/

// compile with task_3.1_fraction_methods.cpp

#include <iostream>
#include <iomanip>
#include <ctime>
#include "task_3.1.h"

int main()
{
	std::cout << "Автор: Буцько Антось Уладзіміравіч\n";
	// Returns the current calendar time encoded as a std::time_t object,
	// and also stores it in the object pointed to by arg,
	// unless arg is a null pointer. 
	std::time_t t = std::time(nullptr);
	// Converts given time since epoch as std::time_t value
	// into calendar time, expressed in local time. 
	std::tm tm = *std::localtime(&t);

	std::cout << std::put_time(&tm, "%g-%m-%d %T%n");

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
