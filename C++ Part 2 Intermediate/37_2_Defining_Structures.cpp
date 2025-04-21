#include <iostream>
//#include <string>

typedef struct s_adress
{
	std::string Street;
	std::string City;
	std::string ZipCode;
} t_adress;


typedef struct s_costumer
{
	int ID;
	std::string name;
	std::string email;
	t_adress adress;
} t_costumer;



int main(void)
{
	t_costumer costumer;

	std::cout << "Enter the costumer ID: ";
	std::cin >> costumer.ID;
	std::cin.ignore(); // Ignore the newline character left by cin >>

	std::cout << "Enter the costumer name: ";
	std::getline(std::cin, costumer.name);

	std::cout << "Enter the costumer email: ";
	std::getline(std::cin, costumer.email);

	std::cout << "Enter the costumer street: ";
	std::getline(std::cin, costumer.adress.Street);
	std::cout << "Enter the costumer city: ";
	std::getline(std::cin, costumer.adress.City);
	std::cout << "Enter the costumer zip code: ";
	std::getline(std::cin, costumer.adress.ZipCode);
	
	std::cout << "Costumer ID: " << costumer.ID << std::endl;
	std::cout << "Costumer name: " << costumer.name << std::endl;
	std::cout << "Costumer email: " << costumer.email << std::endl;
	std::cout << "Costumer adress: " << costumer.adress.Street << ", " 
	<< costumer.adress.City << ", " << costumer.adress.ZipCode << std::endl;
	return 0;
}