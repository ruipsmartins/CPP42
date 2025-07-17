#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
	Form();

public:
	Form(const std::string &name, int gradeToSign, int gradeToExecute);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	const std::string &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
