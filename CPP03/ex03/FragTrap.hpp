/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:24:58 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/23 08:40:42 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP
#define __FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
    FragTrap();
    FragTrap(const FragTrap & ori);
    FragTrap& operator=(const FragTrap & ori);
    ~FragTrap();

    FragTrap(std::string name);
     
    void highFivesGuys(void);
};




#endif