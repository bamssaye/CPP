#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& obj){
    *this = obj;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj){
    if (this == &obj)
        return *this;
    return *this = obj;
}
ScalarConverter::~ScalarConverter(){}

bool ScalarConverter::_isLiterals(const std::string & li, const std::string& s){
    if (s == "d" && (li == "nan" || li == "+inf" || li == "-inf"))
    {
        std::cout   << "char: impossible\n"
                    << "int: impossible\n"
                    << "float: " << li << "f\n"
                    << "double: " << li << "\n";
        return true;
    }
    else if (s == "f" && (li == "nanf" || li == "+inff" || li == "-inff")){
        std::cout   << "char: impossible\n"
                    << "int: impossible\n"
                    << "float: " << li << "\n"
                    << "double: " << li.substr(0, li.length() - 1) << "\n";
        return true;
    }
    return false;
}

int ScalarConverter::_stoi(const std::string& i){
    long int num = 0, p = 0;
    size_t j = 0;

    if (i == "-" || i == "+" || i.size() > 11)
        throw std::runtime_error("error.");
    if (i[j] == '+' || i[j] == '-'){
        if (i[j] == '-') {p = 1;}
        j++;}
    while (j < i.size()){
        if (!std::isdigit(i[j])){
            throw std::runtime_error("error.");}
        num = num * 10 +  (i[j] - 48);
        j++;
    }
    if(p){num *=-1;}
    if (num > 2147483647 || num < -2147483648)
        throw std::runtime_error("error.");
    return num;
}
float ScalarConverter::_stof(const std::string& f)
{
    size_t i = 0;
    bool dot = false, num = false;
    if (f[i] == '+' || f[i] == '-') i++;
    while (i < f.size()) {
        if (std::isdigit(f[i])) {num = true;}
        else if (f[i] == '.' && !dot) {dot = true;}
        else if (f[i] == 'f' && i == f.size() - 1 && num && dot){break ;}
        else { throw std::runtime_error("error.");}
        i++;
    }
    if (!num || !dot)
        throw std::runtime_error("error.");
    float n = atof(f.c_str());
    return n;
}
double ScalarConverter::_stod(const std::string& f)
{
    size_t i = 0;
    bool dot = false, num = false;
    if (f[i] == '+' || f[i] == '-') i++;
    while (i < f.size()) {
        if (std::isdigit(f[i])) {num = true;}
        else if (f[i] == '.' && !dot) {dot = true;}
        else if (f[i] == 'f' && i == f.size() - 1 && num && dot){break ;}
        else { throw std::runtime_error("error.");}
        i++;
    }
    if (!num || !dot)
        throw std::runtime_error("error.");
    double n = atof(f.c_str());
    return n;
}

bool ScalarConverter::_isChar(const std::string& c){
    if (!(c.length() == 1 && !std::isdigit(c[0])))
        return false;
    char ch = c[0];
    std::cout   << "char: '" << ch << "'\n"
                << "int: " << static_cast<int>(ch) << "\n"
                << "float: " << static_cast<float>(ch) << "f\n"
                << "double: " << static_cast<double>(ch) << "\n";
    return true;
}

bool ScalarConverter::_isInt(const std::string& i){
    try{
        int num = _stoi(i);
        std::cout   << std::string("char: ") + 
                    ((num >= 32 && num <= 126)? "'" + std::string(1, static_cast<char>(num)) + "'" : "Non displayable") << "\n"
                    << "int: " << num << "\n"
                    << "float: " << std::fixed << std::setprecision(1)  << static_cast<float>(num) << "f\n"
                    << "double: " << std::fixed << std::setprecision(1)  << static_cast<double>(num) << "\n";
        return true;
    }catch(...){ return false;}
}

bool ScalarConverter::_isFloat(const std::string& f){
    if (_isLiterals(f, "f"))
        return true;
    try {
        float n = _stof(f);
        std::cout   << std::string("char: ") + 
            ((n >= 32 && n <= 126)? "'" + std::string(1, static_cast<char>(n)) + "'" : "Non displayable") << "\n"
            << "int: " << static_cast<int>(n) << "\n"
            << "float: " << std::fixed << std::setprecision(1) << (n) << "f\n"
            << "double: " << static_cast<double>(n) << "\n";
        return true;
    }catch(...){ return false;}
}

bool ScalarConverter::_isDouble(const std::string& d){
    if (_isLiterals(d, "d"))
        return true;
    try {
        double n = _stod(d);
        std::cout   << std::string("char: ") + 
            ((n >= 32 && n <= 126)? "'" + std::string(1, static_cast<char>(n)) + "'" : "Non displayable") << "\n"
            << "int: " << static_cast<int>(n) << "\n"
            << "float: " << n << "f\n"
            << "double: " << n << "\n";
        return true;
    }
    catch(...){ return false;}
}

void ScalarConverter::convert(const std::string& content){
    if (_isChar(content)){}
    else if (_isInt(content)){}
    else if (_isFloat(content)){}
    else if (_isDouble(content)){}
    else {
        std::cerr << "type conversion is impossible" << std::endl;
    }
}