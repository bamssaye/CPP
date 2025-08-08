#pragma once

#include <iostream>
#include <stdint.h>

struct Data {
    int key;
};

class Serializer {
    Serializer();
    ~Serializer();
    Serializer(const Serializer&obj);
    Serializer& operator=(const Serializer& obj);
public:
    
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);


};