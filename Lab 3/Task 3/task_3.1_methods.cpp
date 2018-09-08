/* Задание 3.
 * Изучить теоретический материал п 2.1 и 2.2,
 * выполнить приведенные там примеры
 * и контрольное задание 9 к п. 2.1
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
