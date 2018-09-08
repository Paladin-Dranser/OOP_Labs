/* Задание 2.
 * Написать на языке С++ программы для решения следующих
 * задач по обработке одномерных массивов.
 * В задаче 2 использовать пользовательские функции.
 * В задаче 3 для доступа к элементам массива использовать указатели, память
 * под массив выделять динамически.
*/

// Дан одномерный массив, который содержит не более 40 целых чисел.
// Создать новый массив, элементами которого являются суммы цифр каждого
// числа данного массива.

#include <iostream>

int sum_of_figure(int number)
{
	int sum = 0;

	while (number)
	{
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

int main()
{
	int size;
	std::cout << "Enter the size of array: ";
	std::cin >> size;

	if (size > 40)
	{
		std::cout << "The size of array must be less 50\n";
		return -1;
	}
	else if (size <= 0)
	{
		std::cout << "The wrong size of array\n";
		return -1;
	}

	int * array = new int[size];

	for (int i = 0; i < size; ++i)
	{
		std::cout << "Enter " << i+1 << " element: ";
		std::cin >> *(array + i);
	}

	int * new_array = new int[size];

	for (int i = 0; i < size; ++i)
	{
		*(new_array + i) = sum_of_figure( *(array + i) );
		std::cout << *(new_array + i) << ' ';
	}
	
	std::cout << std::endl;

	delete[] array;
	delete[] new_array;

	return 0;
}
