// list<long>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void display(std::list<long> l)
{
	std::cout << "Display:\n";
    std::copy( l.begin(), l.end(),
			   std::ostream_iterator<long>( std::cout, " " ) );
	std::cout << std::endl;
}

int main()
{
	std::list<long> l1 = { 7, 5, 16, 8, 4, 4, 5, 6};
	display(l1);

	auto it = l1.begin();
	*it = 42;
    std::advance(it, 2);


	l1.erase(it);
	display(l1);

	std::list<long> l2 = { 7, 5, 16, 8};
	
	auto range_begin = l1.begin();
	auto range_end = l1.begin();
	std::advance(range_begin, 2);
	std::advance(range_end, 5);
	
	l1.erase(range_begin, range_end);	
	l1.insert(l1.end(), l2.begin(), l2.end());

	display(l1);
	std::cout << std::endl;
	display(l2);

	return 0;
}
