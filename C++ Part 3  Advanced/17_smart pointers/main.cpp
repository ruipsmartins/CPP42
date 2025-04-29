#include "SmartPointer.hpp"

#include <iostream>

int main (void)
{
	SmartPointer prt(new int);

	std::cout << &prt << std::endl;


	return 0;
}