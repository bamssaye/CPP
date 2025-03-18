/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:56:05 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 06:48:08 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP
#define __DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    std::string _name;
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap & ori);
    DiamondTrap& operator=(const DiamondTrap & ori);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI();
};



#endif