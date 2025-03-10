#include <iostream>

using std::cout;

int main (void)
{
	std::string name[3];

	
	cout << "first name: ";
	std::getline(std::cin, name[0]);

	std::cout << "2nd name: ";
	std::getline(std::cin, name[1]);
	std::cout << "3rd name: ";
	std::getline(std::cin, name[2]);

	cout << "first name "<< name[0] << std::endl;

	return 0;
}