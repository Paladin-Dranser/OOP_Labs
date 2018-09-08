/* Задание 2.
 * Описать объект «прямоугольник» в виде класса «rectangle». Свойства:
 * длины сторон. Методы: ввод, вывод значений свойств, вычисление площади.
 * Использовать созданный класс для написания программы вычисления
 * площади по заданным длинам сторон.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		explicit Rectangle();
		~Rectangle();

		double square() const;
		void input();
		void output() const;
	private:	
		double length;
		double width;
};

#endif
