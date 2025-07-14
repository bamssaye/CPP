#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137),_target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):AForm(obj._target, obj.getSigned(), obj.getgradeExecute()){
    *this = obj;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj){
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    
    if ((executor.getGrade() > this->getgradeExecute()))
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw std::runtime_error("Form not signed.");
    std::ofstream file(this->_target + "_shrubbery");
    if (!file.is_open()){
        std::cout << "Can't open file " + this->_target + "_shrubbery" << std::endl;
        exit(1) ;}
    file << "🌲🌳🌲🌳🌲🌳🌲🌳🌲🌳🌲🌳🌲🌳🌲🌳🌲🌳🌲🌳" << std::endl;
    file.close();
    std::cout   << executor.getName()
                    << " executed " << this->getName() << std::endl;
}
