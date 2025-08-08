#pragma once

#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <stdlib.h>
#include <ctime>

class RobotomyRequestForm : public AForm{
    std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & obj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm(); 
    //
    void execute(Bureaucrat const & executor) const;
};

