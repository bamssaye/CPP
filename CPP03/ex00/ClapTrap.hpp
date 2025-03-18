/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 04:43:31 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/16 06:03:17 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP
#define __CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    std::string _Name;
    unsigned int _hitPoint;
    unsigned int _energyPoint;
    unsigned int _attackDamage;
  
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &ori);
    ClapTrap& operator=(const ClapTrap &ori);
    ~ClapTrap();
    ///
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};



#endif