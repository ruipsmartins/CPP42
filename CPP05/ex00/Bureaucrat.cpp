#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : _name(name)
{
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string &Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
	{
		throw GradeTooHighException();
	}
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
	{
		throw GradeTooLowException();
	}
	this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}


std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}