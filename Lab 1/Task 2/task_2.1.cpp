/* Задание 2.
 *
 * Написать на языке С++ программы для решения следующих задач.
 * Задачу 1 реализовать с помощью операции ?;
 * Задачи 2-3 реализовать с помощью if;
 * Задачу 4 реализовать с помощью switch;
 *
*/

// Определить, являются ли числа х, у координатами точки,
// лежащей в первой координатной четверти.

#include <iostream>

int main()
{
	double x, y;
	std::cout << "Enter 'x' and 'y': ";
	std::cin >> x >> y;

	const char * string = ( (x > 0) && (y > 0) ) ? "There is a point in the first quarter\n" : "There is not a point in the first quarter\n";

	std::cout << string;

	return 0;
}
