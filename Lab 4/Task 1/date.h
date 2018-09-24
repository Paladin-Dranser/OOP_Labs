#ifndef DATE_H
#define DATE_H

class Date
{
	public:
		Date();
		Date(unsigned d, unsigned m, unsigned int y);
		void show() const;
	private:
		unsigned day;
		unsigned month;
		unsigned int year;
};

#endif
