/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:19:18 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 08:54:29 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():_Name(""){}

Zombie::Zombie(std::string name){_Name = name;}

void Zombie::setName(std::string name){_Name = name;}

std::string Zombie::getName(){return _Name;}

Zombie::~Zombie(){
    std::cout   << "Zombie : " << getName()
                << " has been destroyed." << std::endl;
}

void Zombie::announce( void ){
    
    std::cout   << _Name + ": BraiiiiiiinnnzzzZ..."
                << std::endl;
}
