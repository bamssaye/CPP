/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:56:03 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/23 09:09:09 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap(), FragTrap(){
    this->_name = "DF_diamon_name";
    ClapTrap::_name = "DF_clap_name";
    
    _energyPoint  = 50;
    _hitPoint = 100;
    _attackDamage = 30;
    
    std::cout << "DiamondTrap " << _name <<" constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ScavTrap(), FragTrap()
{
    this->_name = name + "_diamon_name";
    ClapTrap::_name = name + "_clap_name";
    
    _energyPoint  = 50;
    _hitPoint = 100;
    _attackDamage = 30;
    
    std::cout << "DiamondTrap " << _name <<" constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & ori):ScavTrap(ori), FragTrap(ori){
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & ori){
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this == &ori)
        return *this;
        
    this->_name = ori._name;
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
    
    return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Destructor called" << std::endl;
}
void DiamondTrap::attack(const std::string& target){
   ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name : " << _name << " , ClapTrap name : " << ClapTrap::_name << "." << std::endl;
}

