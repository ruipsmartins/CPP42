#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

int main()
{
	try // teste 1: tudo funciona
	{
		Bureaucrat b1("Rui", 42);
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << "depois de increment: " << b1 << std::endl;
		b1.decrementGrade();
		std::cout << "depois de decrement: " << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "--------------------------" << std::endl;

	try // teste 2: não deixa criar poque tem grade demasiado baixo
	{
		Bureaucrat b2("Pedro", 151);
		std::cout << b2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "--------------------------" << std::endl;

	try // teste 3: cria b3 mas nao deixa incrementar
	{
		Bureaucrat b3("Martins", 1);
		std::cout << b3 << std::endl;
		b3.incrementGrade();
		std::cout << "depois de increment: " << b3 << std::endl;
		std::cout << b3 << std::endl; // nao dá print porque sai antes
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}