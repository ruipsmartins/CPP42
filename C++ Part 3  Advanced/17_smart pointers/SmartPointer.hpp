#ifndef SMART_POINTER_HPP
#define SMART_POINTER_HPP

#include <iostream>

class SmartPointer
{
	private:
	int *ptr;

	public:
	SmartPointer(int *ptr);
	~SmartPointer();
};



#endif