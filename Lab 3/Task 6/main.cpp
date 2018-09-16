/* Задание 6
 * Написать программу для определения количества катушек,
 * необходимых для оклейки стен обоев.
*/
/*
	UML
	Roll
	-width
	-length
	+Roll(double width, double length)
	+getSquare() const
	
	Wall
	-width
	-height
	+Wall(double width, double height)
	+getSquare() const
*/

// compile with roll.cpp wall.cpp

#include <iostream>
#include "wall.h"
#include "roll.h"

int main()
{
		double * width = new double;
		double * length = new double;
		std::cout << "Enter width: ";
		std::cin >> *width;
		std::cout << "Enter length: ";
		std::cin >> *length;
		Roll roll(*width, *length);
		delete length;

		double * height = new double;
		std::cout << "Enter width: ";
		std::cin >> *width;
		std::cout << "Enter height: ";
		std::cin >> *height;
		Wall wall(*width, *height);
		delete width;
		delete height;

		std::cout << "You need "
		          << static_cast<int>(wall.getSquare() / roll.getSquare() + 0.5)
				  << " roll(s) to paper.\n";

	return 0;
}
