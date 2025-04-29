#include "SmartPointer.hpp"

SmartPointer::SmartPointer(int *ptr) : ptr(ptr){
	std::cout << "creating smart pointer" << std::endl;
}

SmartPointer::~SmartPointer()
{
	std::cout << "deleting smart pointer" << std::endl;
	delete ptr;
}
