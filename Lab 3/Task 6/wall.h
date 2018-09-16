#ifndef WALL_H
#define WALL_H

class Wall
{
	public:
		Wall();
		Wall( double width,  double height);
		double getSquare() const;
	private:
		 double width;
		 double height;
};

#endif
