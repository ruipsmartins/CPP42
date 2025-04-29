#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

std::string double_to_string(double number)
{
	std::stringstream stream;
	stream << std::fixed << std::setprecision(2) << number;
	return stream.str();
}

double string_to_double(std::string str)
{
	std::stringstream stream(str);
	double number;
	stream >> number;
	return number;
}

int main(void)
{
	double number = 15.58900;
	std::string str = double_to_string(number);
	std::cout << str << std::endl;

	double number2 = string_to_double("69.38");
	std::cout << number2 << std::endl;

	return 0;
}

