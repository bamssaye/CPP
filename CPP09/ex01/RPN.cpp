#include "RPN.hpp"

RPN::RPN():_total(0){}
RPN::~RPN(){}

bool RPN::CheckRpnFormat(const std::string& rpn){
    std::istringstream s(rpn);
    std::string str;

    int  i = 0;
    while (s >> str){
        if (str.length() == 1 && isdigit(str.at(0)))
            i++;
        else if (str.length() == 1 && _isOperator(str.at(0))){
            if (i < 2) {throw std::runtime_error("Error. invalid Format");}
            i--;
        }else {throw std::runtime_error("Error. invalid Format");}
    }
    return i == 1;
}

void RPN::CalculateRpn(const std::string& rpn){
    std::istringstream s(rpn);
    std::string str;

    int  a, b;
    while (s >> str){
        if (isdigit(str.at(0)))
            this->_stack.push(std::atoi(str.c_str()));
        else if (_isOperator(str.at(0))){
            b = _stack.top(); _stack.pop();
            a = _stack.top(); _stack.pop();
            if (str == "+") _stack.push(a + b);
            else if (str == "-") _stack.push(a - b);
            else if (str == "*") _stack.push(a * b);
            else if (str == "/") {
                if (!b) throw std::runtime_error("Error. Division by zero");
                _stack.push(a / b);
            }
        }
    }
    _total = _stack.top();
    _stack.pop();
}
int RPN::getTotal() const { return this->_total;}

bool RPN::_isOperator(int c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}