#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::seyY(int y)
{
	this->y = y;
}

int Point::getX() const
{
	return (x);
}

int Point::getY() const
{
	return (y);
}

bool Point::operator==(const Point &other) const
{
	return (this->x == other.x && y == other.y);
}

bool Point::operator<(const Point &other) const
{
	return (this->x < other.x);
}