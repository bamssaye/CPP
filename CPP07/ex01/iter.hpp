#pragma once

#include <iostream>
#include <typeinfo>

template <typename A, typename B>
void iter(A arr , size_t lengh, B const & fun){
    if(!arr)
        return;
    for(size_t i = 0; i < lengh;i++){
        fun(arr[i]);
    }
};