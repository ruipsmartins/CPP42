#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point
{
private:
	int x;
	int y;
public:

	Point();
	Point(int x, int y);

	void setX(int x);
	void seyY(int y);
	int getX() const;
	int getY() const;

	bool operator==(const Point &other) const;
	bool operator<(const Point &other) const;

};



#endif