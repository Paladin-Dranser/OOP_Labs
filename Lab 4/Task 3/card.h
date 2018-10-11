#ifndef CARD_H
#define CARD_H

#include <string>
#include "date.h"

class Card
{
	public:
		Card();
		Card(unsigned long id, std::string name, unsigned long ph, unsigned long acc, Date term);
		void annul();
		void continue_card();
		void show() const;
	private:
		unsigned long id_;
		std::string full_name_;
		unsigned long phone_;
		unsigned long account_;
		Date term_of_lease_;
};

#endif
