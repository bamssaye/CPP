#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("target", 145, 137),_target("target"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137),_target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):Form(obj._target, obj.getSigned(), obj.getgradeExecute()){
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

    this->_SignedGradeCheck(executor);
    std::string _filename = this->_target + "_Shrubbery";
    std::ofstream file(_filename.c_str());
    if (!file.is_open()){
        throw std::runtime_error("Can't open file " + this->_target + "_shrubbery");}
    file << "////🌱////\n"
            "///🍀🍀///\n"
            "//🍀🍀🌱🍀//\n"
            "/🍀🌱🍀🍀🍀/\n"
            "🍀🍀🍀🍀🌱🍀/\n"
            "🍀🌱🍀🍀🌱🍀\n"
            "//🪵🪵🪵/\n" 
            "//🪵🪵🪵/\n"
            "//🪵🪵🪵/\n"
     << std::endl;
    file.close();
    std::cout   << executor.getName()
                    << " executed " << this->getName() << std::endl;
}
