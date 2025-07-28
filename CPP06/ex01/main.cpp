#include "Serializer.hpp"

int main() {
    Data data;
    data.key = 1337;

    std::cout << "Original pointer: " << &data << std::endl;

    uintptr_t raw = Serializer::serialize(&data);

    Data* deserialized = Serializer::deserialize(raw);

    std::cout << "Deserialized pointer: " << deserialized << std::endl;
    std::cout << "Deserialized content: id = " << deserialized->key << std::endl;

    if (deserialized == &data)
        std::cout << "Success: same pointer!" << std::endl;
    else
        std::cout << "Error: pointers are different!" << std::endl;

    return 0;
}