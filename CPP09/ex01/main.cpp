#include "RPN.hpp"

int main(int ac, char **av){

    if (ac != 2)
        return (std::cerr << "Error. many argument." << std::endl, 1);
    std::string in = av[1];
    RPN rpn(in);
}   