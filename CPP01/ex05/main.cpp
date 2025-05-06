#include "Harl.hpp"
#include <iostream>
#include <string>


int main (void)
{
	Harl harl;

	std::cout << "Testing complain with 'DEBUG' level:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Testing complain with 'INFO' level:" << std::endl;
	harl.complain("INFO");
	std::cout << "Testing complain with 'WARNING' level:" << std::endl;
	harl.complain("WARNING");
	std::cout << "Testing complain with 'ERROR' level:" << std::endl;
	harl.complain("ERROR");
	std::cout << "Testing complain with 'UNKNOWN' level:" << std::endl;
	harl.complain("UNKNOWN");
	std::cout << "Testing complain with empty string:" << std::endl;
	harl.complain("");
	return 0;
}