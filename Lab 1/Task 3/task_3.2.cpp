/* Задание 3.
 * Написать на языке С++ программы для решения следующих задач.
 * В задаче 1 использовать оператор цикла с постусловием (do while),
 * в задаче 2 – оператор цикла с предусловием (while),
 * в задаче 3 – оператор цикла с известным числом повторений (for).
*/

// Спортсмен марафонец, готовясь к соревнованиям в первый день
// тренировки пробежал А км. Каждый следующий день он наращивал норму
// тренировки на В% от предыдущего дня. В какой день тренировок норма его
// пробега превысит С км?

#include <iostream>

int main()
{
	double a, b, c;
	std::cout << "Enter 'a': ";
	std::cin >> a;
	std::cout << "Enter 'b': ";
	std::cin >> b;
	std::cout << "Enter 'c': ";
	std::cin >> c;

	if (b <= 0)
	{
		std::cout << "Error: 'b' <= 0";
		return -1;
	}

	b /= 100; // percent to number;

	int day = 1;

	while (c >= a)
	{
		double percent_kilometer = a * b;
		a += percent_kilometer;
		++day;	
	}

	std::cout << "Workout distance > " << c << " on " << day << " day(s).\n";

	return 0;
}
