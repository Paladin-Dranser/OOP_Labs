/* Задание 2.
 * Написать на языке С++ программы для решения следующих
 * задач по обработке одномерных массивов.
 * В задаче 2 использовать пользовательские функции.
 * В задаче 3 для доступа к элементам массива использовать указатели, память
 * под массив выделять динамически.
*/

// Дан одномерный массив, который содержит не более 50 целых чисел.
// Найти сумму элементов, которые делятся на заданное число Х.

#include <iostream>

int sum(const int array[], int size, int x)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
		if (array[i] % x == 0)
			sum += array[i];

	return sum;
}

void input(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Enter " << i+1 << " element: ";
		std::cin >> array[i];
	}
}

int main()
{
	int size;
	std::cout << "Enter the size of array: ";
	std::cin >> size;

	if (size > 50)
	{
		std::cout << "The size of array must be less 50\n";
		return -1;
	}
	else if (size <= 0)
	{
		std::cout << "The wrong size of array\n";
		return -1;
	}

	int array[size] {};
	input(array, size);

	int x;
	std::cout << "Enter 'x': ";
	std::cin >> x;
	
	std::cout << "Sum = " << sum(array, size, x) << std::endl;

	return 0;
}
