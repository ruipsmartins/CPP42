#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// std::srand(static_cast<unsigned int>(std::time(NULL)));
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat rui("Rui", 10);
		Bureaucrat jann("Jann", 137);
		Bureaucrat ze("Ze", 140);
		Bureaucrat intern("Intern", 150);

		 { // ----- SHRUBBERY -----
			 std::cout << "\n=== SHRUBBERY ===\n";
			 ShrubberyCreationForm shrub("home");

			 boss.executeForm(shrub);   // tentar executar sem assinar (vai falhar)
			 ze.signForm(shrub);        // Ze (140) assina (sign <= 145)
			 jann.executeForm(shrub);   // Jann (137) executa (exec == 137)
		 }

		/* { // ----- ROBOTOMY -----
			std::cout << "\n=== ROBOTOMY ===\n";
			RobotomyRequestForm robot("Bender");

			boss.signForm(robot);		 // Boss assina
			for (int i = 0; i < 10; ++i) // executa várias vezes para ver sucesso/falha 50/50
				boss.executeForm(robot);
		} */

		/*  { // ----- PRESIDENTIAL PARDON -----
			 std::cout << "\n=== PRESIDENTIAL PARDON ===\n";
			 PresidentialPardonForm pardon("Arthur Dent");

			 boss.signForm(pardon);     // Boss assina (sign = 25)
			 rui.executeForm(pardon);   // Rui (10) tenta executar — vai falhar (exec = 5)
			 boss.executeForm(pardon);  // Boss executa (sucesso)
		 } */

		/* { // ----- INTERN TRY SIGN -----
			std::cout << "\n=== INTERN TRY SIGN ===\n";
			ShrubberyCreationForm shrub2("garden");
			intern.signForm(shrub2);   // Intern (150) tenta assinar — vai falhar
		} */

		std::cout << "\n--- FIM DOS TESTES ---\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}