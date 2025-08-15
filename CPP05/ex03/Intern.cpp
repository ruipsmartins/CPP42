#include "Intern.hpp"

struct FormPair
{
	std::string name;
	AForm *(*create)(const std::string &target);
};

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }
Intern::~Intern() {}

AForm *Intern::createShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
};

AForm *Intern::createRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
};

AForm *Intern::createPresidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
};

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	FormPair forms[] = {
		{"shrubbery creation", &createShrubbery},
		{"robotomy request", &createRobotomy},
		{"presidential pardon", &createPresidential}};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i].create(target);
		}
	}

		throw FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw()
{
	return "Intern could not find the requested form.";
}