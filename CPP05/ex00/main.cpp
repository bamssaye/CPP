#include "Bureaucrat.hpp"

int main(){
   
    
    try{
        Bureaucrat b2("ol",150);
        std::cout << b2 << std::endl;
    }catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    ///
    Bureaucrat *b = NULL;
    try
    {
        b = new Bureaucrat("HH",1);
        b->incGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    if (b){
        std::cout << *b << std::endl;
        delete b;
    }
}