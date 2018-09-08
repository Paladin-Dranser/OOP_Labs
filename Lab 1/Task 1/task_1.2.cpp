/*
 * Задание 1.
 * Написать на языке С++ программы для решения следующих задач.
*/

// В треугольнике АВС известны длины сторон a, b, c.
// Вычислить длину высоты, проведенной из вершины А.
// h = 2 * sqrt( p(p-a)(p-b)(p-c) ) / a;
// p = (a + b + c) / 2;

#include <iostream>
#include <cmath>

int main()
{
	double a, b, c;
	std::cout << "Enter sides: ";
	std::cin >> a >> b >> c;

	// Is a triangle?
	if ( (a + b > c) && (a + c > b) && (b + c > a) )  
	{
		double p = (a + b + c) / 2.0;
		
		double h = 2.0 / a * sqrt( p * (p-a) * (p-b) * (p-c) );
		std::cout << "Height is " << h << std::endl;
	}
	else
		std::cout << "It's not a triangle\n";

	return 0;
}
