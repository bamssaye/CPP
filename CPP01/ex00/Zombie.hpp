/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 05:12:56 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 08:53:31 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <cctype>
#include <string.h>
#include <cstdlib>
#include <iomanip>


class Zombie{
    
    std::string _Name;
    
public:
    Zombie();
    ~Zombie();
    void Set_Name(std::string name);
    std::string Get_Name();
    void announce( void );
};

# endif