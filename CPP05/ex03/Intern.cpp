#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern& obj){
    *this = obj;
}
Intern& Intern::operator=(const Intern& obj){
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;
}
/*
{
    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
*/
Form* Intern::makeRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}

Form* Intern::makePresidential(const std::string& target) {
    return new PresidentialPardonForm(target);
}

Form* Intern::makeShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeForm(std::string name, std::string target){
    std::string names[3] = {"robotomy request","presidential pardon","shrubbery creation"};
    Form* (Intern::*in[3])(const std::string& tra) = {&Intern::makeRobotomy, &Intern::makePresidential, &Intern::makeShrubbery};

    for (int i = 0; i < 3;i++){
        if (!name.compare(names[i])){
            std::cout << "Intern creates " + names[i] << std::endl;
            return (this->*in[i])(target);
        }
    } 
    std::cerr << "Intern can't create form, Form doesn’t exist " << std::endl;
    return (NULL);
}
