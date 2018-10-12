#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include "date.h"

void display(std::list<Date> l)
{
	std::cout << "Display:\n";
    std::copy( l.begin(), l.end(),
			   std::ostream_iterator<Date>( std::cout, "\t" ) );
	std::cout << std::endl;
}

bool foo(Date d)
{
	Date temp(7,7,7);
	return d < temp;
}

int main()
{
	std::list<Date> l1;
	Date d1, d2, d3;
	std::cout << "Enter date:\n";
	std::cin >> d1;
	std::cout << "Enter date:\n";
	std::cin >> d2;
	std::cout << "Enter date:\n";
	std::cin >> d3;

	l1.push_back(d1);
	l1.push_back(d2);	
	l1.push_back(d3);	

	l1.sort();
	l1.reverse();
	display(l1);

	auto p = std::find(l1.begin(), l1.end(), Date(2, 2, 2));
	if ( p != l1.end() )
		std::cout << std::endl << *p << std::endl << std::endl;

	auto it = l1.begin();


	std::list<Date> l2;
	while ( it != l1.end() )
	{
		it = std::find_if( it, l1.end(), foo);
		if (it != l1.end())
			l2.push_back(*it);	
		++it;
	}

	display(l2);

	l1.sort();
	l2.sort();
	
	auto l3 = l1;
	l3.insert(l3.end(), l2.begin(), l2.end());

	l3.sort();
	display(l3);

	unsigned count = 0;
	it = l3.begin();
	while ( it != l3.end() )
	{
		it = std::find_if( it, l3.end(), foo);
		if (it != l3.end())
		{
			++count;	
			++it;
		}
	}
	std::cout << std::endl << "Count = " << count << std::endl;

	p = std::find(l1.begin(), l1.end(), Date(2, 2, 2));
	if ( p != l1.end() )
		std::cout << std::endl << *p << std::endl << std::endl;
	
	return 0;
}
