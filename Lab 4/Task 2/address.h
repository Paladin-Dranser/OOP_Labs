#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address
{
	public:
		Address();
		Address(std::string c, std::string s, unsigned house, unsigned flat);
		void input();
		void show() const;
		void setCity(std::string c);
		void setStreet(std::string s);
		void setHouse(unsigned h);
		void setFlat(unsigned f);
	private:
		std::string city;
		std::string street;
		unsigned number_of_house;
		unsigned number_of_flat;		
};

#endif
