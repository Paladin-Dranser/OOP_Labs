/* Задание 1.
 * Изучить теоретический материал п 2.1 и 2.2,
 * выполнить приведенные там примеры
 * и контрольное задание 9 к п. 2.1
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
