/* Задание 3.
 * Написать на языке С++ программы для решения следующих задач.
 * В задаче 1 использовать оператор цикла с постусловием (do while),
 * в задаче 2 – оператор цикла с предусловием (while),
 * в задаче 3 – оператор цикла с известным числом повторений (for).
*/

// Составить таблицу значений функции y=(x-2)/(x^2+4)
// на отрезке [a; b] с шагом h.

#include <iostream>

int main()
{
	double a, b, h;
	std::cout << "Enter 'a': ";
	std::cin >> a;
	std::cout << "Enter 'b': ";
	std::cin >> b;
	std::cout << "Enter 'h': ";
	std::cin >> h;

	if (a > b)
		std::cout << "Error: 'a' > 'b.\n";
	else
	{
		std::cout << "x\t\ty\n";
		double x = a;
		double y;
		do
		{
			y = (x - 2.0) / (x * x + 4.0);
			std::cout << x << "\t\t" << y << std::endl;
			
			x += h;
		} while (x <= b);
	}

	return 0;
}
