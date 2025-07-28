#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72, 45),_target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):Form(obj._target, obj.getSigned(), obj.getgradeExecute()){
    *this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj){
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    
    this->_SignedGradeCheck(executor);
    std::cout   << "Makes some drilling noises," 
                <<  this->getName() + " has been robotomized by "+ executor.getName() +" successfully 50% of the time."
                << std::endl;
}
