#include <iostream>
#include <vector>
#include "circleposter.h"
#include "rectangleposter.h"

template <typename T>
void statistic(const T & list)
{
	for (auto & element : list)
	{
		element.print();
		std::cout << std::endl;
	}
}

int main()
{
	std::vector<CirclePoster> circle;
	std::vector<RectanglePoster> rectangle;
	CirclePoster c1("Adv a", 5, 5, 10);
	RectanglePoster r1("Adv B", 5, 5, 10, 10);
	
	// registration
	circle.push_back(c1);
	rectangle.push_back(r1);
	//statistic
	statistic(circle);
	statistic(rectangle);

	return 0;
}
