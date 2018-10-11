/* Задание 2
 * Распечатать список учеников, фамилии которых начинаются с заданной
 * буквы с указанием даты их рождения.
*/
#include "tarray.h"
#include "student.h"
#include <iostream>

int main()
{
	TArray<Student> arr(3);
	std::cout << "Enter elements of array:\n";
	arr.input();
	std::cout << std::endl;

	char ch;
	std::cout << "Enter a character: ";
	std::cin >> ch;
	arr.output(ch);

	return 0;
}
