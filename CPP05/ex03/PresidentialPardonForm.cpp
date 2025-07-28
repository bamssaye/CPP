#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 25, 5),_target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):Form(obj._target, obj.getSigned(), obj.getgradeExecute()){
    *this = obj;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj){
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    
    this->_SignedGradeCheck(executor);
    std::cout   << this->getName() + " has been pardoned by Zaphod Beeblebrox" 
                << std::endl;
}
