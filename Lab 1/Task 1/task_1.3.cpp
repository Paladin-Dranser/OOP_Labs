/*
 * Задание 1.
 * Написать на языке С++ программы для решения следующих задач.
 * 1 пуд = 40 фунтов = 16,38 кг
*/

// Дано целое трехзначное число. Найти сумму цифр этого числа.

#include <iostream>

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	// Has number got 3 figures?
	if (number > 99 && number < 1000)
	{
		int sum = 0;
		for (int i = 0; i < 3; ++i)
		{
			sum += number % 10;
			number /= 10;
		}
		std::cout << "The sum of figures is " << sum << std::endl;
	}
	else
		std::cout << "This number hasn't got exactly 3 figures.\n";

	return 0;
}
