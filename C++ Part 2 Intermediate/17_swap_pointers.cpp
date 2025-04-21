#include <iostream>
#include <vector>
#include <cstdlib>

void swap(int* first, int* second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

int main(void)
{
	int first = 10;
	int second = 20;
	
	swap(&first, &second);

	std::cout << "first = " << first << std::endl;
	std::cout << "second = " << second << std::endl;

	return 0;
}