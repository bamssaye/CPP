#include "RPN.hpp"

int main(int ac, char **av){

    if (ac != 2)
        return (printError());
    std::string in = av[1];
    RPN rpn;
    if (!rpn.CheckRpnFormat(in))
        return (printError());
    rpn.Add(in);
    rpn.CalculateRpn();
    rpn.ShowTotal();
}   