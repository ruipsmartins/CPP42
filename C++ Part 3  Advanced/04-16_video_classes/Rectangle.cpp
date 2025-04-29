#include "Rectangle.hpp"

Rectangle::Rectangle()
{
	// pode ter ou nao coisas dentro, pode estar completamente vazio
	std::cout << "default constructor" << std::endl;
	objectCount++;
	this->width = 0;
	this->height = 0;
	this->area = 0;
}

Rectangle::Rectangle(const Rectangle &source) // copy constructor
{
	std::cout << "Rectangle copied" << std::endl;
	this->color = source.color;
	this->height = source.height;
	this->width = source.width;
	// se nao meter aqui o area ele nao vai copiar quando fazemos algo como Rectangle second = first
}

Rectangle::Rectangle(int width, int height)
{
	std::cout << "Constructing a Rectangle with width and height" << std::endl;
	objectCount++;
	this->setWidth(width);
	this->setHeight(height);
}

Rectangle::Rectangle(int width, int height, const std::string &color)
	//: Rectangle(width, height) só dá no c++11+
{
	std::cout << "constructing a Rectangle with color" << std::endl;
	objectCount++;
	this->setWidth(width);   // nao é preciso de for c++11+
	this->setHeight(height); // nao é preciso de for c++11+
	this->color = color;
}

Rectangle::~Rectangle()
{
	std::cout << "Rectangle destructor called" << std::endl;
}

void Rectangle::draw()
{
	std::cout << "Drawig a rectangle" << std::endl;
	std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea() const
{
	return (width * height);
}

int Rectangle::getWidth() const
{
	return (width);
}

void Rectangle::setWidth(int width)
{
	if (width < 0)
		throw std::invalid_argument("Width cannot be negative");
	this->width = width;
}

int Rectangle::getHeight() const
{
	return (height);
}

void Rectangle::setHeight(int height)
{
	if (height < 0)
		throw std::invalid_argument("Height cannot be negative");
	this->height = height;
}

std::string Rectangle::getColor()
{
	return (this->color);
}

int Rectangle::getObjectCount()
{

	return objectCount;
}
