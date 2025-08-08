#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("target", 72, 45),_target("target"){}
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
    srand(time(NULL));
    std::cout   << "Makes some drilling noises, " << std::endl;
    if (rand() & 1)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}
