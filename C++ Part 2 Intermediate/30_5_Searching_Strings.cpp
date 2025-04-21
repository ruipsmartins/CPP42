#include <iostream>



int main(void)
{
	std::string name = "Rui";

	name = "Rui Pedro";

	name += " Santos";

	name.append(" Martins");

	std::cout << name.find("Pedro") << std::endl;
	std::cout << name.find("Pedro", 4) << std::endl;	
	std::cout << name.find("Pedro", 5, 3) << std::endl;

	if (name.find("Pedros") != std::string::npos)
		std::cout << "Found at index: " << name.find("Pedros") << std::endl;
	else
		std::cout << "Not found" << std::endl;

	if ((int)name.find("Pedro") != -1)
		std::cout << "Found at index: " << name.find("Pedro") << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::cout << name.rfind("Pedro") << std::endl;

	std::cout << name.find_first_of("Pedro") << std::endl;
	std::cout << name.find_last_of("Pedro") << std::endl;

	std::cout << name.find_first_not_of("Pedro") << std::endl;
	std::cout << name.find_last_not_of("Pedro") << std::endl;
	
	
		
		

	return 0;
}