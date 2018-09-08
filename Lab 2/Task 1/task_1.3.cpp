/* Задание 1.
 * Модифицировать программный код, полученный в результате
 * выполнения практического задания 2 по теме
 * «Структура программы на языке С/С++».
 * Написать программы на языке С++ с использование пользовательских
 * функций согласно варианту задания.
 * В задании 3 для передачи параметров в функцию использовать указатель
 * (первый параметр) и ссылку (второй параметр).
*/


// Даны два целых числа. С помощью функции пользователя каждое из
// чисел заменить на его последнюю цифру.

#include <iostream>

void last_figure(int * number1, int & number2)
{
	*number1 %= 10;
	number2 %= 10;
}

int main()
{
	int number1, number2;
	std::cout << "Enter the first number: ";
	std::cin >> number1;
	std::cout << "Enter a second number: ";
	std::cin >> number2;

	last_figure(&number1, number2);

	std::cout << "number 1 = " << number1 << std::endl;
	std::cout << "number 2 = " << number2 << std::endl;
	return 0;
}
