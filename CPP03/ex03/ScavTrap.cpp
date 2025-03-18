/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:34:07 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 08:20:55 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("ScavDf"){
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}
void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap & ori):ClapTrap(ori._name){
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
}
void ScavTrap::attack(const std::string& target){
    
    if (!_energyPoint || !_hitPoint){
        std::cout   <<  "ScavTrap "<<  _name
                    <<  " can’t do anything has no Hit points or Energy points left. " 
                    <<  std::endl;
        return ;
    }
    std::cout   << "ScavTrap " << _name << " attacks "
                << target << " , causing "
                << _attackDamage << " points of damage!" << std::endl;
    _energyPoint -= 1;
}
ScavTrap& ScavTrap::operator=(const ScavTrap & ori){
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    this->_name = ori._name;
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
    return (*this);
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

