#include "Harl.hpp"
#include <iostream>
#include <string>


int main (int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		std::cerr << "Available levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}
	
	harl.complain(argv[1]);
	
	return 0;
}