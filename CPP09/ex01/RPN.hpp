#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <stack>
#include <exception>

class RPN{
    int             _total;
    std::stack<int> _stack;
public:
    RPN();
    ~RPN();

    bool CheckRpnFormat(const std::string& rpn);
    void CalculateRpn(const std::string& rpn);
    int getTotal() const;
};

bool    isOperator(int c);
int     printError();