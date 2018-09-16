#ifndef ROLL_H
#define ROLL_H

class Roll
{
	public:
		Roll();
		Roll( double width,  double length);
		double getSquare() const;
	private:
		 double width;
		 double length;
};

#endif
