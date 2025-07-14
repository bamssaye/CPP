#include "AForm.hpp"

AForm::AForm():_name("DF_AForm"), _signed(false), _gradeSign(1), _gradeExecute(1){}

AForm::AForm(std::string name, int _gradeSign, int _gradeExecute):_name(name), _signed(false), _gradeSign(_gradeSign), _gradeExecute(_gradeExecute){
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
    else if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
}
AForm::AForm(const AForm& ob): _name(ob._name), _signed(ob._signed), _gradeSign(ob._gradeSign), _gradeExecute(ob._gradeExecute){}
AForm& AForm::operator=(const AForm&ob){
    if (this == &ob)
        return *this;
    *this = ob;
    return *this;
}
AForm::~AForm(){}


const std::string& AForm::getName() const{ return _name;}
bool AForm::getSigned() const { return _signed;}
int AForm::getgradeSign() const{ return _gradeSign;}
int AForm::getgradeExecute() const{ return _gradeExecute;}



std::ostream& operator<<(std::ostream& os, AForm& ob){
    os  << "AForm Name: " << ob.getName() 
        << "\nGrade Execute : " << ob.getgradeExecute()
        << "\nGrade Sign : " << ob.getgradeSign()
        << "\nsigned : " << ((!ob.getSigned()) ? "False": "True") ;  
    return os;
}



void AForm::beSigned(Bureaucrat& Bur){
    if (Bur.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_signed = true ;
}
