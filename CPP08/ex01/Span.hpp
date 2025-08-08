#pragma once

#include <iostream>

#include <algorithm>
#include <vector>
#include <stdexcept>

class Span {
    unsigned int _n;
    std::vector<int> _data;
    Span();
public:
   Span(int _n);
   Span(const Span& obj);
   Span& operator=(const Span& obj);
   ~Span();
   
   void addNumber(unsigned int n);
   int shortestSpan();
   int longestSpan();
};
