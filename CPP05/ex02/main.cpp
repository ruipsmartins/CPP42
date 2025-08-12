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
		// Cria um burocrata com rank suficiente para assinar e executar Required grades: sign 145, exec 137
		Bureaucrat bob("Bob", 150);
		Bureaucrat ted("Ted", 1);

		// Cria o formulário
		ShrubberyCreationForm f("home");

		// Tenta assinar
		bob.signForm(f);

		// Tenta executar
		//bob.executeForm(f);
		ted.executeForm(f);

	}
	catch (std::exception &e)
	{
		std::cerr << "Erro: " << e.what() << std::endl;
	}

	return 0;
}