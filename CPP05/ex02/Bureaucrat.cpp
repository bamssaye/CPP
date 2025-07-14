#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat():_name("DF_Bu"), _grade(150){}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name){
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj):_name(obj._name){
    this->_grade = obj._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj){
    if (this == &obj)
        return (*this);
    *this = obj;
    return *this;
}

Bureaucrat::~Bureaucrat(){}

///
void Bureaucrat::incGrade(){
    if ((_grade - 1) < 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decGrade(){
    if ((_grade + 1) > 150)
        throw GradeTooLowException();
    this->_grade++;
}

///
const std::string& Bureaucrat::getName()const { return _name;}
int Bureaucrat::getGrade()const {return _grade;}

///
std::ostream &operator<<(std::ostream & os, Bureaucrat & ob){
    os << ob.getName() + ", Bureaucrat grade " << ob.getGrade();
    return os;
}
//
void Bureaucrat::signForm(AForm& fo){
    try
    {
        fo.beSigned(*this);
        std::cout   << this->getName()
                    << " signed " << fo.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr   << this->getName() 
                    << " couldn't sign " << fo.getName()
                    << " because " << e.what() 
                    << std::endl;
    }    
}

void Bureaucrat::executeForm(AForm const & fo){
    try
    {
        fo.execute(*this);
        std::cout   << this->getName()
                    << " executed " << fo.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr   << this->getName() 
                    << " couldn't executed " << fo.getName()
                    << " because " << e.what() 
                    << std::endl;
    } 
}
