
#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(){

    Intern  someRandomIntern;
    Bureaucrat p("Hin", 2);
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
        std::cout <<  *rrf << std::endl;
    try{
        rrf->beSigned(p);
        rrf->execute(p);
    }catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
    delete rrf;
}