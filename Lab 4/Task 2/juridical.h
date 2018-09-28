#ifndef JURIDICAL_H
#define JURIDICAL_H

#include "client.h"
#include <string>

class Juridical : public Client
{
	public:
		Juridical();
		Juridical(unsigned id, std::string name, std::string form, unsigned long account, unsigned long account_number);
		void input();
		void show() const;
		void setForm(std::string f);
		void setAccount(unsigned long ac);
		void setAccountNumber(unsigned long acc);
	private:
		std::string form;
		unsigned long account;
		unsigned long account_number;		
};

#endif
