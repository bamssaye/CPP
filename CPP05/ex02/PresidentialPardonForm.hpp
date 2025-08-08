#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class PresidentialPardonForm : public AForm{
    std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & obj);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();
    
    ///
    void execute(Bureaucrat const & executor) const;
    
};


