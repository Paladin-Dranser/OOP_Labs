/*
 * Задание 1.
 * Написать на языке С++ программы для решения следующих задач.
*/

// AB = sqrt( (x2 - x1)^2 + (y2 - y1)^2 );

// Найти периметр треугольника ABC,
// у которого известны координаты его вершин A(x1,y1), B(x2,y2), C(x3,y3).

#include <iostream>
#include <cmath>

double calculate_side(double x1, double y1, double x2, double y2);

int main()
{
	double x1, y1; // A
	double x2, y2; // B
	double x3, y3; // C
	std::cout << "Enter coordinates of 'A': ";
	std::cin >> x1 >> y1;
	std::cout << "Enter coordinates of 'B': ";
	std::cin >> x2 >> y2;
	std::cout << "Enter coordinates of 'C': ";
	std::cin >> x3 >> y3;

	double side_AB = calculate_side(x1, y1, x2, y2);
	double side_AC = calculate_side(x1, y1, x3, y3);
	double side_BC = calculate_side(x2, y2, x3, y3);

	double perimeter = side_AB + side_AC + side_BC;

	std::cout << "Perimeter is " << perimeter << std::endl;

	return 0;
}

double calculate_side(double x1, double y1, double x2, double y2)
{
	return sqrt( pow( (x2 - x1), 2) + pow( (y2 - y1), 2) );
}
