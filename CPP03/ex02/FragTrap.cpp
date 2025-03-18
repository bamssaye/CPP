/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:24:59 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 01:49:13 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & ori):ClapTrap(ori._Name){
    std::cout << "FragTrap Copy constructor called" << std::endl;
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap & ori){
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->_Name = ori._Name;
    this->_hitPoint = ori._hitPoint;
    this->_energyPoint = ori._energyPoint;
    this->_attackDamage = ori._attackDamage;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << this->_Name << " : Positive high fives." << std::endl;
}
