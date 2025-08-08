#pragma once

#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <ctime>
#include <stdlib.h>
class RobotomyRequestForm : public Form{
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

