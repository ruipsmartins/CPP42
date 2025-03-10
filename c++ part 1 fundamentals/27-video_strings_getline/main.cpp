#include <iostream>


int	main(void)
{
	std::string street, city, state, zip_code;
	
	std::cout << "enter street: ";
	std::getline(std::cin, street);

	std::cout << "enter city: ";
	std::getline(std::cin, city);

	std::cout  << "enter state: ";
	std::getline(std::cin, state);

	std::cout  << "enter zip_code: ";
	std::getline(std::cin, zip_code);

	std::cout	<< street << std::endl
				<< city << ", " << state << ", " << zip_code << std::endl;

	return 0;
}