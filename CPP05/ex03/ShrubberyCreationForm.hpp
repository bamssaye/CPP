#pragma once

#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"
#include "Form.hpp"


class ShrubberyCreationForm : public Form{
    
    std::string _target;
    ShrubberyCreationForm();
public:

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& obj);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
    ~ShrubberyCreationForm();  
    
    void execute(Bureaucrat const & executor) const;
};