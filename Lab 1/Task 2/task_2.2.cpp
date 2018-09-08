/* Задание 2.
 *
 * Написать на языке С++ программы для решения следующих задач.
 * Задачу 1 реализовать с помощью операции ?;
 * Задачи 2-3 реализовать с помощью if;
 * Задачу 4 реализовать с помощью switch;
 *
*/

// Вычислить значение выражения y = sqrt(7-x)

#include <iostream>
#include <cmath>

int main()
{
	double x;
	std::cout << "Etner 'x': ";
	std::cin >> x;

	double y;
	if (x <= 7)
	{
		y = sqrt(7 - x);
		std::cout << "y = " << y << std::endl;
	}
	else
	{
		y = sqrt(x - 7);
		std::cout << "y = " << y << "i\n";
	}

	return 0;
}
