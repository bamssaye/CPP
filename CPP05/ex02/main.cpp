#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
   
    try{

        RobotomyRequestForm sh1("HInd");
        Bureaucrat b1("B1", 1);
        std::cout << std::string(10,'-') << std::endl;
        std::cout << sh1 << std::endl;
        std::cout << std::string(10,'-') << std::endl;
        std::cout << b1 << std::endl;
        std::cout << std::string(10,'-') << std::endl;
        b1.signForm(sh1);
        b1.executeForm(sh1);
        
        sh1.execute(b1);
        std::cout << std::string(10,'-') << std::endl;
        
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