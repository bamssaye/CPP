/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:24:58 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 01:49:50 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP
#define __FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap(std::string name);
    FragTrap(const FragTrap & ori);
    FragTrap& operator=(const FragTrap & ori);
    ~FragTrap();
    void highFivesGuys(void);
};




#endif