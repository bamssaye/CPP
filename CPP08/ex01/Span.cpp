#include "Span.hpp"

Span::Span(int n):_n(n){
    if(n < 0)
        throw std::runtime_error("N integers must be in positive number !");
    else if (this->_n < 2)
        throw std::runtime_error("you can't create Span with 1 or 0 intergers !");
}
Span::Span(const Span& obj){
    *this = obj;
}
Span& Span::operator=(const Span& obj){
    if(this == &obj)
        return *this;
    return *this = obj;
}
Span::~Span(){}

void Span::addNumber(unsigned int n){
    if(this->_data.size() > this->_n - 1)
        throw std::runtime_error("Span is full !");
    this->_data.push_back(n);
}
int Span::shortestSpan(){
    if (this->_data.empty())
        throw std::runtime_error("Span is empty!");
    else if (this->_data.size() < 2)
        throw std::runtime_error("one Value in the Span add more !");
    std::vector<int> tmp = this->_data;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 0; i < tmp.size() - 1 ; i++){
        min = std::min(min, tmp[i + 1] - tmp[i]);
    }
    return min;
}
int Span::longestSpan(){
    if (this->_data.empty())
        throw std::runtime_error("Span is empty!");
    else if (this->_data.size() < 2)
        throw std::runtime_error("one Value in the Span add more !");
    int min = *(std::min_element(this->_data.begin(), this->_data.end()));
    int max = *(std::max_element(this->_data.begin(), this->_data.end()));
    return max - min;
}