# ifndef __HUMANB_HPP
# define __HUMANB_HPP

#include "Weapon.hpp"


class HumanB {

    std::string _name;
    Weapon _weapon;
public:
    HumanB();
    HumanB(std::string name);
    std::string get_Type();
    void setWeapon(Weapon w);
    void attack();
};

#endif