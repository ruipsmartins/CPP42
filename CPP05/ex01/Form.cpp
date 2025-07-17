#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
	: _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return *this;
}

Form::~Form() {}

const std::string &Form::getName() const { return this->_name; }

bool Form::getIsSigned() const { return this->_isSigned; }

int Form::getGradeToSign() const { return this->_gradeToSign; }

int Form::getGradeToExecute() const { return this->_gradeToExecute; }

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form " << form.getName()
		<< ", signed: " << (form.getIsSigned() ? "true" : "false")
		<< ", grade to sign: " << form.getGradeToSign()
		<< ", grade to execute: " << form.getGradeToExecute();
	return out;
}
