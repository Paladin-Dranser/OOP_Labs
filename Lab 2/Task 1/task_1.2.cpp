/* Задание 1.
 * Модифицировать программный код, полученный в результате
 * выполнения практического задания 2 по теме
 * «Структура программы на языке С/С++».
 * Написать программы на языке С++ с использование пользовательских
 * функций согласно варианту задания.
 * В задании 3 для передачи параметров в функцию использовать указатель
 * (первый параметр) и ссылку (второй параметр).
*/

// Два отрезка на плоскости заданы координатами своих концов.
// Сравнить длины этих отрезков.
// Нахождение длины отрезка реализовать в виде функции пользователя.

#include <iostream>
#include <cmath>

inline double length(double x1, double y1, double x2, double y2)
{
	return sqrt( pow( (x2 - x1), 2) + pow( (y2 - y1), 2) );
}

int main()
{
	double a_x, a_y, b_x, b_y; // AB
	double c_x, c_y, d_x, d_y; // CD

	std::cout << "Enter coordinates of AB [A(x,y) and B(x,y): ";
	std::cin >> a_x >> a_y >> b_x >> b_y;
	std::cout << "Enter coordinates of CD [C(x,y) and D(x,y): ";
	std::cin >> c_x >> c_y >> d_x >> d_y;

	double length_ab = length(a_x, a_y, b_x, b_y);	
	double length_cd = length(c_x, c_y, d_x, d_y);	

	if (length_ab > length_cd)
		std::cout << "AB > CD\n";
	else if (length_ab < length_cd)
		std::cout << "CD > AB\n";
	else
		std::cout << "AB = CD\n";

	return 0;
}
