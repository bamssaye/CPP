/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:34:09 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/23 08:06:00 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP
#define __SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap();
    ScavTrap(const ScavTrap & ori);
    ScavTrap& operator=(const ScavTrap & ori);
    ~ScavTrap();

    ScavTrap(std::string name);

    //
    void attack(const std::string& target);
    void guardGate();
};




#endif