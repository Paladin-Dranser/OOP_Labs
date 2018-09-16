/* Задание 5
 * Произвести декомпозицию объекта. Написать программное
 * обеспечение для расчета количества материала и стоимость производства
 * объекта.
 * СТУЛ
*/

#include "chair.h"

Chair::Chair()
{
	wood = Wood();
	nail = Nail();
	kg_of_wood = 1.0;
	number_of_nail = 10;
}

Chair::Chair(double kg, unsigned int number)
{
	wood = Wood();
	nail = Nail();
	kg_of_wood = kg;
	number_of_nail = number;
}

double Chair::getCost() const
{
	return kg_of_wood * wood.getCost() + number_of_nail * nail.getCost();
}
