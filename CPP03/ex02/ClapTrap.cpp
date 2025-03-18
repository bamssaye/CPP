/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 04:48:50 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 01:09:00 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_Name(name){
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &ori){
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &ori){
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    return (*this); 
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target){
    
    if (!_energyPoint || !_hitPoint){
        std::cout   <<  "ClapTrap "<<  _Name
                    <<  " can’t do anything has no Hit points or Energy points left. " 
                    <<  std::endl;
        return ;
    }
    std::cout   << "ClapTrap " << _Name << " attacks "
                << target << " , causing "
                << _attackDamage << " points of damage!" << std::endl;
    _energyPoint -= 1;
}
void ClapTrap::takeDamage(unsigned int amount){
    
    if (!_energyPoint || !_hitPoint){
        std::cout   <<  "ClapTrap "<<  _Name
                    <<  " can’t do anything has no Hit points or Energy points left. " 
                    <<  std::endl;
        return ;
    }
    _hitPoint = (_hitPoint >= amount) ? _hitPoint - amount : 0 ;
    std::cout   <<  "ClapTrap " << _Name << " was attacked and lost "
                <<  amount << " hit points, " 
                <<  "Hit Points balance : " << _hitPoint << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){

    if (!_energyPoint || !_hitPoint){
        std::cout   <<  "ClapTrap "<<  _Name
                    <<  " can’t do anything has no Hit points or Energy points left. " 
                    <<  std::endl;
        return ;
    }
    _hitPoint += amount;
    std::cout   << "ClapTrap " << _Name << " was repaired, "
                << amount << " hit points added, "
                << "Hit Points balance : " << _hitPoint << std::endl;
    _energyPoint -= 1;
}
