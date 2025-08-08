#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	// Verificações herdadas
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	// Executa a ação concreta
	executeAction();
}


void ShrubberyCreationForm::executeAction() const
{
	std::ofstream out((_target + "_shrubbery").c_str());
	if (!out)
	{
		std::cerr << "Could not create file " << (_target + "_shrubbery") << std::endl;
		return;
	}

	out << "       _-_\n";
	out << "    /~~   ~~\\\n";
	out << " /~~         ~~\\\n";
	out << "{               }\n";
	out << " \\  _-     -_  /\n";
	out << "   ~  \\\\ //  ~\n";
	out << "_- -   | | _- _\n";
	out << "  _ -  | |   -_\n";
	out << "      // \\\\\n";

	out.close();
}
