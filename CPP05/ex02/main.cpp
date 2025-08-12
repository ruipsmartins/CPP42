#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		// Cria um burocrata com rank suficiente para assinar e executar Required grades: sign 145, exec 137
		Bureaucrat bob("Bob", 1);
		Bureaucrat ted("Ted", 1);

		// Cria o formulário
		ShrubberyCreationForm f("home");

		// Tenta assinar
		bob.signForm(f);

		// Tenta executar
		// bob.executeForm(f);
		ted.executeForm(f);

		Bureaucrat boss("Boss", 150);
		RobotomyRequestForm r("Bender");

		boss.signForm(r); // assina (boss tem grade 1 <= 72)
		for (int i = 0; i < 6; ++i)
		{
			boss.executeForm(r); // executa várias vezes para veres resultados 50/50
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Erro: " << e.what() << std::endl;
	}

	return 0;
}