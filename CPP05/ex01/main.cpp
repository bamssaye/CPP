#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
   
    try{
        
        Form a1("FORM1", 30, 20);
        Bureaucrat b1("B1", 30);
        b1.signForm(a1);
        std::cout << std::string(10,'-') << std::endl;
        std::cout << b1 << std::endl;
        std::cout << std::string(10,'-') << std::endl;
        std::cout << a1 << std::endl;
        std::cout << std::string(10,'-') << std::endl;
        
    }catch(std::exception & e) {
        std::cerr  << e.what() << std::endl;
    }
   
}