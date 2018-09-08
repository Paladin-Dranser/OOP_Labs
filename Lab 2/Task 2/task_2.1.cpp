/* Задание 2.
 * Написать на языке С++ программы для решения следующих
 * задач по обработке одномерных массивов.
 * В задаче 2 использовать пользовательские функции.
 * В задаче 3 для доступа к элементам массива использовать указатели, память
 * под массив выделять динамически.
*/

// Имеется 5 магазинов с разными названиями: ЦУМ, ГУМ, Немига,
// Восточный, Первомайский. В магазинах имеется один и тот же товар, который
// пользуется большим спросом. Необходимо определить, в какой магазин в
// первую очередь необходимо завести новую партию этого товара.

#include <iostream>

int main()
{
	const char * names[5] {"ЦУМ", "ГУМ", "Немига", "Восточный", "Первомайский"};
	int number[5] {};

	std::cout << "Enter the number of goods in ЦУМ: ";
	std::cin >> number[0];
	std::cout << "Enter the number of goods in ГУМ: ";
	std::cin >> number[1];
	std::cout << "Enter the number of goods in Немига: ";
	std::cin >> number[2];
	std::cout << "Enter the number of goods in Восточный: ";
	std::cin >> number[3];
	std::cout << "Enter the number of goods in Первомайский: ";
	std::cin >> number[4];

	int min_index = 0;
	for (int i = 1; i < 5; ++i)
	{
		if (number[min_index] > number[i])
			min_index = i;
	}

	std::cout << names[min_index] << " needs goods.\n";

	return 0;
}
