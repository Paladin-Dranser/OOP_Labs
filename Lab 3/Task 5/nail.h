/* Задание 5
 * Произвести декомпозицию объекта. Написать программное
 * обеспечение для расчета количества материала и стоимость производства
 * объекта.
 * СТУЛ
*/

#ifndef NAIL_H
#define NAIL_H

class Nail
{
	public:
		Nail();
		double getCost() const;
	private:
		double cost_for_a_nail;
};

#endif
