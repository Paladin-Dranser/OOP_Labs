/* Задание 5
 * Произвести декомпозицию объекта. Написать программное
 * обеспечение для расчета количества материала и стоимость производства
 * объекта.
 * СТУЛ
*/

#ifndef WOOD_H
#define WOOD_H

class Wood
{
	public:
		Wood();
		double getCost() const;
	private:
		double cost_for_a_kilogram;
};

#endif
