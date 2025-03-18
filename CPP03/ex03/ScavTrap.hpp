/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:34:09 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 08:21:04 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP
#define __SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap & ori);
    ScavTrap& operator=(const ScavTrap & ori);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};




#endif