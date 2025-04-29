#include "Rectangle.hpp"
#include "TextBox.hpp"

int Rectangle::objectCount  = 0;

int main (void)
{
	//com constructor pode ser das duas maneiras () -----  {}(c++11)
	//Rectangle first{10, 20};
	Rectangle first(10, 20);
	Rectangle second; //meter default constructor
	Rectangle third(30, 40, "red");
	Rectangle *forth = new Rectangle(50,50, "blue");

	std::cout << "----------------------RECTANGLE----------------------\n\n" << std::endl;
	
	/* sem constructor 
	Rectangle first;
	first.setWidth(10);
	first.setHeight(20);
	first.draw(); */
	
	std::cout <<"first area = " << first.getArea() << std::endl;
	std::cout <<"second area = " << second.getArea() << std::endl;
	std::cout <<"forth area = " << forth->getArea() <<" color = " << third.getColor() <<"\n\n" << std::endl;

	std::cout << "number of rectangles = " << Rectangle::getObjectCount() << std::endl;

	std::cout << "----------------------TEXTBOX------------------------\n\n" << std::endl;
	
	TextBox caixa;
	TextBox caixinha;
	
	TextBox teste("testeeeeee"); // teste explicit keyword
	caixa.setValue("hello world 2");
	std::string str= "bananas!";
	caixinha.setValue(str);

	std::cout << caixa.getValue() << std::endl;
	std::cout << caixinha.getValue() << std::endl;
	std::cout << teste.getValue() << std::endl;


	std::cout << "\n\n";

	delete forth;
	forth = NULL;

	return 0;
}