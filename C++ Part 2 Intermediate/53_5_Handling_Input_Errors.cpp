#include <iostream>
#include <limits>



int get_number(std::string prompt)
{
	int number;

	while (true)
	{
		std::cout << prompt;
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cout << "Invalid number, please try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (number < std::numeric_limits<int>::min() || number > std::numeric_limits<int>::max())
		{
			std::cout << "Number out of range, please try again.\n";
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
	}
	return number;
}


int main(void)
{
	long long first_number;
	long long second_number;

	first_number = get_number("Enter first number: ");
	second_number = get_number("Enter second number: ");

	std::cout << "The sum of " << first_number << " and " << second_number << " is " << first_number + second_number << ".\n";
	

	return 0;
}