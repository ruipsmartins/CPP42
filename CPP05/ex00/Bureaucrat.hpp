#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat();

public:
	Bureaucrat(const std::string &name, const int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif