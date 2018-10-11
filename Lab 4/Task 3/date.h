#ifndef DATE_H
#define DATE_H

class Date
{
	public:
		Date();
		Date(unsigned d, unsigned m, unsigned y);
		void show() const;
		void setDate(unsigned d, unsigned m, unsigned y);
		void incYear();
	private:
		unsigned day_;
		unsigned month_;
		unsigned year_;
};

#endif
