/* Задание 3
 * Карта клиента может иметь статус обычная и VIP. Карта имеет номер,
 * ФИО и телефон владельца, накопительный счет, срок действия. VIP
 * дополнительно имеет размер скидки.
 * Разработать программное обеспечение, позволяющее выдавать,
 * аннулировать и продлять срок действия карты.
*/

#include <iostream>
#include "card.h"
#include "vipcard.h"

int main()
{
	std::cout << "Create a card:\n";
	Card card;
	std::cout << "Create a VIP card:\n";
	VipCard vipcard;
	std::cout << "Annul \"card\" and continue \"VIP card\"\n";
	card.annul();
	vipcard.continue_card();
	std::cout << std::endl << std::endl;
	card.show();
	std::cout << std::endl << std::endl;
	vipcard.show();
	return 0;
}
