/* Задание 2.
 *
 * Написать на языке С++ программы для решения следующих задач.
 * Задачу 1 реализовать с помощью операции ?;
 * Задачи 2-3 реализовать с помощью if;
 * Задачу 4 реализовать с помощью switch;
 *
*/

// Написать программу, позволяющую по последней цифре числа
// определить последнюю цифру его квадрата.

// 0 -> 0
// 1, 9 -> 1
// 2, 8 -> 4
// 3, 7 -> 9
// 4, 6 -> 6
// 5 -> 5

#include <iostream>

int main()
{
	int x;
	std::cout << "Enter 'x': ";
	std::cin >> x;

	int last_figure = x % 10;
	switch (last_figure)
	{
		case 1:
		case 9:
			std::cout << "The last figure x^2 is 1.\n";
			break;

		case 2:
		case 8:
			std::cout << "The last figure x^2 is 4.\n";
			break;
		case 3:
		case 7:
			std::cout << "The last figure x^2 is 9.\n";
			break;
		case 4:
		case 6:
			std::cout << "The last figure x^2 is 6.\n";
			break;
		case 5:
			std::cout << "The last figure x^2 is 5.\n";
			break;
		default:
			std::cout << "The last figure x^2 is 0.\n";
	}

	return 0;
}
