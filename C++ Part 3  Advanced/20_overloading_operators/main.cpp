#include "Point.hpp"

#include <iostream>

int main (void)
{
	Point teste1;

	teste1.setX(10);
	teste1.seyY(20);
	std::cout << "teste1 \n";
	std::cout <<  "x = " << teste1.getX() << " y = "<<teste1.getY() << std::endl;
	
	Point teste2(10,60);
	std::cout << "teste2 \n";
	std::cout <<  "x = " << teste2.getX() << " y = "<<teste2.getY() << std::endl;

	Point teste3;
	std::cout << "teste3 \n";
	std::cout <<  "x = " << teste3.getX() << " y = "<<teste3.getY() << std::endl;

	std::cout << " is equal? --> " << (teste1 == teste2) << std::endl;

	return 0;
}