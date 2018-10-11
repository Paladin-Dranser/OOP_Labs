#ifndef VIPCARD_H
#define VIPCARD_H

#include "card.h"

class VipCard : public Card
{
	public:
		VipCard();
		void show() const;
	private:
		unsigned discount_;
};

#endif
