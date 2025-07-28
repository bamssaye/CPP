
#include "Intern.hpp"
#include "Form.hpp"

int main(){

    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomyrequest", "Bender");
    if (rrf)
        std::cout <<  *rrf << std::endl;
}