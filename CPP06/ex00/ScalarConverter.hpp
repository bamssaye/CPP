#pragma once 

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <string> 
#include <cstdlib>
#include <cctype>


class ScalarConverter{
    static int _stoi(const std::string& i);
    static float _stof(const std::string& f);
    static double _stod(const std::string& f);
    static bool _isChar(const std::string& c);
    static bool _isInt(const std::string& i);
    static bool _isFloat(const std::string& f);
    static bool _isDouble(const std::string& d);
    static bool _isLiterals(const std::string & li, const std::string& s);
    
    ScalarConverter();
    ScalarConverter(const ScalarConverter& obj);
    ScalarConverter& operator=(const ScalarConverter &obj);
public:
    ~ScalarConverter();

    static void convert(const std::string& content);
};