#include "RPN.hpp"

int main(int ac, char **av){

    if (ac != 2)
        return ((std::cerr << "Error." << std::endl), 1);
    std::string in = av[1];
    RPN rpn;
    try {
        rpn.CheckRpnFormat(in);
        rpn.CalculateRpn(in);
        std::cout << rpn.getTotal() << std::endl;
    } catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}   

//"8 9 * 9 - 9 - 9 - 4 - 1 +"
// "1 2 * 2 / 2 * 2 4 - +"
// 1 * 2  = 2 -> 2  2 / 2 * 2 4 - + 
//  2 / 2 = 1 -> 1 2 * 2 4 - +
// 1 * 2 = 2 -> 2 2 4 - + 
// 2 - 4 = -2 -> 2  -2 + => 2 - 2 = 0

