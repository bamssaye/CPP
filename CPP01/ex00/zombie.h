/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombi.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:46:49 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 08:52:32 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H


#include <iostream>
#include <cctype>
#include <string.h>
#include <cstdlib>
#include <iomanip>

#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );




#endif