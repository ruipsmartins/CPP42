#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib> // rand, srand
#include <ctime>   // time
//#include <fstream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const; // implementação concreta
	void executeAction() const; // ação específica do formulário
};

#endif