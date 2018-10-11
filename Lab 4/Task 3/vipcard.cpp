#include "vipcard.h"
#include <iostream>

VipCard::VipCard()
{
	std::cout << "Enter discount: ";
	std::cin >> discount_;
}

void VipCard::show() const
{
	Card::show();
	std::cout << "Discount = " << discount_ << std::endl;
}
