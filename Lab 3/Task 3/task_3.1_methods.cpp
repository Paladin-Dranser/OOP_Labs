/* Задание 3.
 * Добавить к программе, разработанной в задании 1 вывод на
 * экран информации об авторе и дате запуска программы в следующему виде:
 * Автор:ХХХХ
 * Дата: YY-MM-DD HH:MM:SS
*/

#include "task_3.1.h"
#include <iostream>
#include <string>

void fraction::input()
{
	std::cout << "Числитель: ";
	std::cin >> m;
	std::cout << "Знаменатель: ";
	std::cin >> n;
}

void fraction::output() const
{
	std::cout << m << "/" << n << std::endl;
}

void fraction::mult(int a)
{
	m *= a;
}

std::string fraction::isProper() const
{
	return (m < n) ? "правильная" : "неправильная";
}


void fraction::outputWholePart() const
{
	// a whole part
	int whole_part = m / n;
	int new_m = m % n;

	std::cout << whole_part << " and " << new_m << "/" << n << std::endl;
}
