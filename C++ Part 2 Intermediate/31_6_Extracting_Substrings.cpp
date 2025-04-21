#include <iostream>



int main(void)
{
	std::string name = "Rui";

	name = "Rui Pedro";

	name += " Santos";

	name.append(" Martins");

	std::string copy = name;

	std::string first_name = name.substr(0, name.find(" "));
	std::string last_name = name.substr(name.rfind(" ") + 1);

	std::cout << "First name: " << "(" << first_name << ")" << std::endl;
	std::cout << "Last name: " << "(" << last_name << ")" << std::endl;


	
	
		
		

	return 0;
}