#ifndef __HUMANA_HPP
#define __HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

    std::string _name;
    Weapon _Weapon;
public:
    HumanA(Weapon w);
    HumanA(std::string name, Weapon w);
    std::string get_Type();
    void attack();
};
#endif