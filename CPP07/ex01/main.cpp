#include "iter.hpp"

template <typename T> void p(T &A){std::cout << A << std::endl;};

int main(){
    int a[] = {1,2,3,4,5,6,7};
    char b[] = {'a','b','c','d'};
    std::string c[] = {"com", "ma", "fr", "us", "jp"};
     
    std::cout << std::string(10,'=') << std::endl;
    iter(a, 7, p<int>);
    std::cout << std::string(10,'=') << std::endl;
    iter(b, 4, p<char>);
    std::cout << std::string(10,'=') << std::endl;
    iter(c, 5, p<std::string>);

}