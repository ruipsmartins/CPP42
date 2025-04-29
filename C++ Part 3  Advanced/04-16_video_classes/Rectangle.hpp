#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include <iostream>

class Rectangle
{
  private:
	int width;
	int height;
	std::string color;
	int area;

	static int objectCount;

  public:
	//constructors
	Rectangle(); // = default só dá no c++11
	Rectangle(const Rectangle &source); //copy constructor
	Rectangle(int width, int height);
	Rectangle(int width, int height, const std::string &color);
	~Rectangle(); //destructor, usado para dar frees e close de files etc...

	void draw();
	int getArea() const;
	// Getters (accessors) and setters (mutators)
	int getWidth() const;
	void setWidth(int width);
	int getHeight() const;
	void setHeight(int height);
	std::string getColor();

	void print() {
        std::cout << "Width: " << width << ", Height: " << height << ", Color: " << color << std::endl;
    }

	static int getObjectCount();
};

#endif
