/* Задание 5
 * Произвести декомпозицию объекта. Написать программное
 * обеспечение для расчета количества материала и стоимость производства
 * объекта.
 * СТУЛ
*/

#include "wood.h"

Wood::Wood() : cost_for_a_kilogram(5)
{
}

double Wood::getCost() const
{
	return cost_for_a_kilogram;
}
