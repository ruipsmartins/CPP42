#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
    PresidentialPardonForm();

public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const &executor) const;
    void executeAction() const;
};

#endif