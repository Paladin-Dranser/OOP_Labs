/*
 * Задание 1.
 * Написать на языке С++ программы для решения следующих задач.
 * 1 пуд = 40 фунтов = 16,38 кг
*/

// 1.1. Дан вес человека x пудов. Выразить этот вес в фунтах и килограммах.

#include <iostream>

int main()
{
	const int poods_to_pounds = 40;
	const double poods_to_kilograms = 16.38;
	double poods;
	std::cout << "Enter the number of poods: ";
	std::cin >> poods;

	if (poods < 0)
	{
		std::cout << "Error: you've entered negative number\n";
		return -1;
	}

	double pounds = poods_to_pounds * poods;
	double kilograms = poods_to_kilograms * poods;

	std::cout << poods << " pood(s) is " << pounds << " pound(s) and "
			  << kilograms << " kilogram(s).\n";

	return 0;
}
