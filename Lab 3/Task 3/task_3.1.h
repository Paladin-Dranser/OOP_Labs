/* Задание 3.
 * Добавить к программе, разработанной в задании 1 вывод на
 * экран информации об авторе и дате запуска программы в следующему виде:
 * Автор:ХХХХ
 * Дата: YY-MM-DD HH:MM:SS
*/

#ifndef FRACTION_H
#define FRACTION_H

#include <string>

class fraction
{
	public:
		void input();
		void output() const;
		void outputWholePart() const;
		void mult(int a);
		std::string isProper() const;
	private:
		
		int m; // ličnik
		int n; // nazoŭnik
};

#endif
