#include "Array.hpp"


int main() {
    Array<int> arr(2);

    arr[0] = 13;
    arr[1] = 38;

    std::cout << "{ " ;
    for (unsigned int i = 0; i < arr.size(); ++i) {
        std::cout << i << ": " << arr[i] << ", ";
    }
    std::cout << " }" << std::endl;
    try {
        std::cout << "{index 10  : " << arr[10]  << " }" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "copy { " ;
    Array<int> cpysti(arr);
    for (unsigned int i = 0; i < cpysti.size(); ++i) {
        std::cout <<  i << ": " << cpysti[i] << ", ";
    }
    std::cout << " }" << std::endl;
    std::cout << "Assing operator { " ;
    Array<int> asstri;
    asstri = arr;
    for (unsigned int i = 0; i < asstri.size(); ++i) {
        std::cout << i << ": " << asstri[i] << ", ";
    }
    std::cout << " }" << std::endl;

    //////
    Array<std::string> str(3);

    str[0] = "ma";
    str[1] = "com";
    str[2] = "jp";

    std::cout << "\n\n{ " ;
    for (unsigned int i = 0; i < str.size(); ++i) {
        std::cout << i << ": " << str[i] << ", ";
    }
    std::cout << " }" << std::endl;
    try {
        std::cout << "{index 1  : " << str[1]  << " }" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "copy { " ;
    Array<std::string> cpyst(str);
    for (unsigned int i = 0; i < cpyst.size(); ++i) {
        std::cout <<  i << ": " << cpyst[i] << ", ";
    }
    std::cout << " }" << std::endl;
    std::cout << "Assing operator { " ;
    Array<std::string> asstr;
    asstr = str;
    for (unsigned int i = 0; i < asstr.size(); ++i) {
        std::cout << i << ": " << asstr[i] << ", ";
    }
    std::cout << " }" << std::endl;
    return 0;
}