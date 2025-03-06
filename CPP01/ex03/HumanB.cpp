/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:01:36 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 22:04:09 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB():_name(""){}
HumanB::HumanB(std::string name):_name(name){}
std::string HumanB::get_Type(){return _name;}
void HumanB::setWeapon(Weapon w){_weapon = w;}
void HumanB::attack(){
        std::cout   << get_Type()
                    << " attacks with their "
                    << _weapon.getType() << std::endl;
    };