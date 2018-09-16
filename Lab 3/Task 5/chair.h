/* Задание 5
 * Произвести декомпозицию объекта. Написать программное
 * обеспечение для расчета количества материала и стоимость производства
 * объекта.
 * СТУЛ
*/

#ifndef CHAIR_H
#define CHAIR_H

#include "wood.h"
#include "nail.h"

class Chair
{
	public:
		Chair();
		Chair(double kg, unsigned int number);
		double getCost() const;	
	private:
		Wood wood;
		Nail nail;
		double kg_of_wood;
		unsigned int number_of_nail;
};

#endif
