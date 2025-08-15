#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat boss("Boss", 160);

	try
	{
		Intern someRandomIntern;
		
		std::cout << "===== TESTE ROBOTOMY REQUEST =====\n";
		AForm *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
		
		std::cout << "\n\n===== TESTE SHRUBBERY CREATION =====\n";
		AForm *rsf;
		rsf = someRandomIntern.makeForm("shrubbery creation", "home");
		boss.signForm(*rsf);
		boss.executeForm(*rsf);
		delete rsf;
		
		std::cout << "\n\n===== TESTE PRESIDENTIAL PARDON =====\n";
		AForm *rpf;
		rpf = someRandomIntern.makeForm("presidential pardon", "Rui");
		boss.executeForm(*rpf);
		boss.signForm(*rpf);
		delete rpf;
		
		std::cout << "\n\n===== TESTE FORMULÁRIO INVÁLIDO =====\n";
		AForm *ref;
		ref = someRandomIntern.makeForm("random error", "Jann");
		boss.executeForm(*ref);
		boss.signForm(*ref);
		delete ref;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--- FIM DOS TESTES ---\n";
	return 0;
}