#include <iostream>

//using namespace std;


int main(void)
{

	std::cout << "Enter a value: ";
	
	double fahrenheit;
	std::cin >> fahrenheit;
	
	double celsius = (fahrenheit - 32) * 5 / 9;
	std::cout << "Celsius: " << celsius << std::endl;

	return 0;
}