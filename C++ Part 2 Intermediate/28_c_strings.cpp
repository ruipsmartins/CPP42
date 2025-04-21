#include <iostream>



int main(void)
{
	std::string name = "Rui";

	name = "Rui Pedro";

	name += " Santos";

	name.append(" Martins");

	std::string name2 = name;

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;

	name2.clear();

	std::cout << name2.empty() << std::endl;

	name.insert(0, "I am ");

	std::cout << name << std::endl;

	name.erase(0, 5);

	std::cout << name << std::endl;
	
	


	return 0;
}