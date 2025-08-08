#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		// Cria um burocrata com rank suficiente para assinar e executar
		Bureaucrat bob("Bob", 1);

		// Cria o formulário
		ShrubberyCreationForm f("home");

		// Tenta assinar
		bob.signForm(f);

		// Tenta executar
		bob.executeForm(f);

		std::cout << "Teste concluído. Verifica o ficheiro 'home_shrubbery'." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Erro: " << e.what() << std::endl;
	}

	return 0;
}