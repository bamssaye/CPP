#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <iostream>

class Weapon {

    std::string _Type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string type);
};

#endif
