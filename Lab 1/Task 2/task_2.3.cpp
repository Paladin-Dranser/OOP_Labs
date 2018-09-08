/* Задание 2.
 *
 * Написать на языке С++ программы для решения следующих задач.
 * Задачу 1 реализовать с помощью операции ?;
 * Задачи 2-3 реализовать с помощью if;
 * Задачу 4 реализовать с помощью switch;
 *
*/

// В трех магазинах один и тот же товар имеет разные цены:
// в первом магазине а руб., во втором – b руб., в третьем – с руб.
// Определить в каком магазине товар самый дешевый.

#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Enter the price 'a': ";
	std::cin >> a;
	std::cout << "Enter the price 'b': ";
	std::cin >> b;
	std::cout << "Enter the price 'c': ";
	std::cin >> c;

	if (a < b && a < c)
		std::cout << "The cheapist price in 'a' shop.\n";
	else if (b < a && b < c)
		std::cout << "The cheapist price in 'b' shop.\n";
	else if (c < a && c < b)
		std::cout << "The cheapist price in 'c' shop.\n";
	else
		std::cout << "Costs should be different.\n";

	return 0;
}
