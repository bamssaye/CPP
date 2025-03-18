/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:56:03 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 08:22:50 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
    this->_name = name + "_diamon_name";
    _energyPoint  = ScavTrap::_energyPoint;
    std::cout << _energyPoint << std::endl;
    _hitPoint = FragTrap::_hitPoint;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name <<" constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & ori):ClapTrap(ori._name + "_clap_name"), ScavTrap(ori), FragTrap(ori){
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & ori){
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
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
    std::cout << "DiamondTrap name :" << _name << ", ClapTrap name : " << ClapTrap::_name << "." << std::endl;
}

