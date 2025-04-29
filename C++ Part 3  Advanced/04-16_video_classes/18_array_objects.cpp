#include "Rectangle.hpp"
#include "TextBox.hpp"

int Rectangle::objectCount  = 0;

int main (void)
{
	Rectangle rectangles[] = {
		Rectangle(5,10, "blue"),
		Rectangle(),
		Rectangle(10,20),
		Rectangle(20, 40, "red")
	};
	
	for (int i = 0; i < 4; ++i) {
        rectangles[i].print();
    }

	/* for (Rectangle &rect : rectangles)
		rect.print(); c++11 */

	std::cout << "\n\n";


	return 0;
}