#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
   
    try{
        ShrubberyCreationForm sh1("ShrForm");
        Bureaucrat b1("B1", 1);
        RobotomyRequestForm rob1("RobForm");
        PresidentialPardonForm pre1("PresForm");
        std::cout << std::string(10,'-') << std::endl;
        std::cout << sh1 << std::endl;
        std::cout << std::string(10,'-') << std::endl;
        std::cout << b1 << std::endl;
        std::cout << std::string(10,'-') << std::endl;
        b1.signForm(sh1);
        // sh1.beSigned(b1);
        // b1.executeForm(sh1);
        sh1.execute(b1);
        std::cout << std::string(10,'-') << std::endl;
        b1.signForm(rob1);
        // b1.executeForm(rob1);
        rob1.execute(b1);
        std::cout << std::string(10,'-') << std::endl;
        b1.signForm(pre1);
        // b1.executeForm(pre1);
        pre1.execute(b1);
        
    }catch(std::exception & e) {
        std::cerr  << e.what() << std::endl;
    }
    
    // try{
        
    //     Form a2("FORM2", 19, 30);
    //     Bureaucrat b2("B2", 20);
    //     b2.signForm(a2);
        
    // }catch(std::exception & e) {
    //     std::cerr  << e.what() << std::endl;
    // }
}