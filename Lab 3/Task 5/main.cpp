/* Задание 5
 * Произвести декомпозицию объекта. Написать программное
 * обеспечение для расчета количества материала и стоимость производства
 * объекта.
 * СТУЛ
*/

// compile with task_5.1.cpp

#include <iostream>
#include "nail.h"
#include "wood.h"
#include "chair.h"

int main()
{
	double kg_of_wood;
	unsigned int number_of_nail;
	std::cout << "Enter the number of kilograms: ";
	std::cin >> kg_of_wood;
	std::cout << "Enter the number of nails: ";
	std::cin >> number_of_nail;
	
	Chair chair(kg_of_wood, number_of_nail);

	unsigned int number_of_chair;
	std::cout << "Enter the number of chairs: ";
	std::cin >> number_of_chair;

	std::cout << "Cost of chairs: " << number_of_chair * chair.getCost();
	std::cout << std::endl;

	return 0;
}
