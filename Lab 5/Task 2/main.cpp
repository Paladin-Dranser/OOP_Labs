/* Дан массив, содержащий события, относящиеся к истории Беларуси и
 * дату (число, месяц, год), когда оно произошло. Упорядочить эти события в
 * хронологическом порядке.
*/

#include <iostream>
#include "event.h"
#include "tarray.h"

int main()
{
	TArray<Event> arr(3);
	std::cout << "Enter an array:\n";
	arr.input();
	arr.bubble();
	std::cout << "\n\nDisplay:\n\n";
	arr.output();

	return 0;
}
