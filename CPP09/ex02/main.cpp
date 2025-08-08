#include "PmergeMe.hpp"

int main(int ac, char **av){

    if (ac == 1)
        return (std::cerr << "Error." << std::endl, 1);
    av++;
    try{
        PmergeMe pm(av);
        pm.SortStacks();
        pm.Printer();
    }catch(const std::exception & e){
        std::cout << "Error." << std::endl;
    }
}