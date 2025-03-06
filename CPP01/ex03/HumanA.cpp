/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:01:39 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 22:07:39 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon w):_name(""){_Weapon = w;};
HumanA::HumanA(std::string name, Weapon w):_name(name){_Weapon = w;};
std::string HumanA::get_Type(){return _name;};
void HumanA::attack(){
    std::cout   << get_Type()
                << " attacks with their "
                << _Weapon.getType() << std::endl;
};