#include "Harl.hpp"
#include <iostream>
#include <string>


int main (int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		return 1;
	}
	
	harl.complain(argv[1]);
	
	return 0;
}