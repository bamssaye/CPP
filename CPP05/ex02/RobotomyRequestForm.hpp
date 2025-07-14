#pragma once

#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    
    if ((executor.getGrade() > this->getgradeExecute()))
        throw std::runtime_error("the robotomy failed");
    if (!this->getSigned())
        throw std::runtime_error("the robotomy failed");
    std::cout   << this->getName()
                << std::string(" has been robotomized successfully 50% of the time.") << std::endl;
}
