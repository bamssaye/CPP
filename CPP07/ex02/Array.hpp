#pragma once

#include <iostream>
#include <cstdlib>
#include <exception>

template <typename T>
class Array{
    T * _data;
    unsigned int _n;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& obj);
    Array& operator=(const Array& obj);
    T& operator[](unsigned int index);
    ~Array();

    size_t size();
};

#include "Array.tpp"