#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat jann("Jann", 50);
		Bureaucrat rui("Rui", 1);
		Bureaucrat ze("Zé", 150);

		Form taxForm("Tax Form", 30, 10);
		Form leaveForm("Leave Form", 100, 50);

		std::cout << taxForm << std::endl;
		std::cout << leaveForm << std::endl;

		std::cout << "\n--- Testing signForm ---" << std::endl;

		jann.signForm(taxForm);	  // Deve falhar (50 > 30)
		std::cout << taxForm << std::endl;
		rui.signForm(taxForm);	  // Deve assinar (1 < 30)
		std::cout << taxForm << std::endl;
		ze.signForm(leaveForm);  // Deve falhar (150 > 100)
		std::cout << leaveForm << std::endl;
		jann.signForm(leaveForm); // Deve assinar (50 < 100)
		std::cout << leaveForm << std::endl;

		std::cout << "\n--- Final forms status ---" << std::endl;
		std::cout << taxForm << std::endl;
		std::cout << leaveForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}