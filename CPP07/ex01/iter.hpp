#pragma once

#include <iostream>


template <typename A, typename B>
void iter(A* arr , size_t lengh, B & fun){
    for(size_t i = 0; i < lengh;i++){
        fun(arr[i]);
    }
};