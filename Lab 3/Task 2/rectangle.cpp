/* Задание 2.
 * Описать объект «прямоугольник» в виде класса «rectangle». Свойства:
 * длины сторон. Методы: ввод, вывод значений свойств, вычисление площади.
 * Использовать созданный класс для написания программы вычисления
 * площади по заданным длинам сторон.
*/

#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() : length(0.0), width(0.0)
{

}

Rectangle::~Rectangle()
{

}

double Rectangle::square() const
{
	return length * width;
}

void Rectangle::input()
{
	std::cout << "Enter a length: ";
	std::cin >> length;
	if (length <= 0)
	{
		std::cout << "Error: length must be more than 0.\n";
		std::cout << "Length will set '1'\n";
	}

	std::cout << "Enter a width: ";
	std::cin >> width;
	if (width <= 0)
	{
		std::cout << "Error: width must be more than 0.\n";
		std::cout << "Width will set '1'\n";
	}
}

void Rectangle::output() const
{
	std::cout << "Length is " << length << std::endl;
	std::cout << "Width is " << width << std::endl;
}
