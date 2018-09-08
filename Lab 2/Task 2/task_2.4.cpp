/* Задание 2.
 * Написать на языке С++ программы для решения следующих
 * задач по обработке одномерных массивов.
 * В задаче 2 использовать пользовательские функции.
 * В задаче 3 для доступа к элементам массива использовать указатели, память
 * под массив выделять динамически.
*/

// Дана строка, которая содержит не более 60 английских букв, цифр,
// знаков препинания. Получить новый массив, в котором данная буква заменена
// на символ «_».

#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cout << "Enter a string: ";
	std::cin >> str;

	if (str.size() > 60)
	{
		std::cout << "The size of string must be less than 60.\n";
		return -1;
	}

	char ch;
	std::cout << "Enter a letter: ";
	std::cin >> ch;

	char array[str.size() + 1];

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == ch)
			array[i] = '_';
		else
			array[i] = str[i];
	}

	array[str.size()] = '\0';

	std::cout << "A new array: " << array << std::endl;

	return 0;
}
