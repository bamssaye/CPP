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
Zombie::~Zombie(){
    std::cout   << "Zombie : " << Get_Name()
                << " has been destroyed." << std::endl;
}

void Zombie::Set_Name(std::string name){_Name = name;}
std::string Zombie::Get_Name(){return _Name;}

void Zombie::announce( void ){
    
    std::cout   << _Name + ": BraiiiiiiinnnzzzZ..."
                << std::endl;
}
