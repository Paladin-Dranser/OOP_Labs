/* Задание 2.
 * Описать объект «прямоугольник» в виде класса «rectangle». Свойства:
 * длины сторон. Методы: ввод, вывод значений свойств, вычисление площади.
 * Использовать созданный класс для написания программы вычисления
 * площади по заданным длинам сторон.
*/

// compile with rectangle.cpp

#include "rectangle.h"
#include <iostream>

int main()
{
	Rectangle rect;
	rect.input();
	rect.output();

	double square = rect.square();

	std::cout << "Square is " << square << std::endl;

	return 0;
}
