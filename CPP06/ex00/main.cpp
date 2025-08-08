#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac != 2)
        return (std::cerr << "Arg not valid !" << std::endl, 1);
    ScalarConverter::convert(av[1]);
}