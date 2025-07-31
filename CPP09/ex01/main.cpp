#include "RPN.hpp"

int main(int ac, char **av){

    if (ac != 2)
        return (printError());
    std::string in = av[1];
    RPN rpn;
    if (!rpn.CheckRpnFormat(in))
        return (printError());
    try {
    rpn.CalculateRpn(in);
    std::cout << rpn.getTotal() << std::endl;
    } catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}   


