#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>

class RPN{
    int             _total;
    std::stack<int> _stack;
    std::string     _rpn;
public:
    RPN();
    ~RPN();

    bool CheckRpnFormat(std::string& rpn);
    void Add(std::string& rpn);
    void CalculateRpn();
    void ShowTotal();
};
int printError(){
    return ((std::cerr << "Error." << std::endl), 1);
}