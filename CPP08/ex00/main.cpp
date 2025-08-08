#include "easyfind.hpp"


int main(){

    std::vector<int> v;
    v.push_back(15);
    try{
        std::cout << std::string(10,'-') << std::endl;
        std::vector<int>::iterator it = easyfind(v, 15);
        std::cout << "search for value 15 : " << *it << std::endl;
        std::cout << "search for value 324 : " ;
        it = easyfind(v, 324);
        // std::cout << *it << std::endl;
    }catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::string(10,'-') << std::endl;

}