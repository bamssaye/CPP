// #include "easyfind.hpp"
template<typename T>
typename T::iterator easyfind(T& con, int a){
    typename T::iterator it = std::find(con.begin(), con.end(), a);
    if (it == con.end())
        throw std::runtime_error("value Not found !");
    return it;
}