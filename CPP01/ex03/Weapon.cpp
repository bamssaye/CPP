/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:42 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 22:08:23 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():_Type(""){}
Weapon::Weapon(std::string type):_Type(type){};
Weapon::~Weapon(){};
std::string  Weapon::getType(){return _Type;}
void Weapon::setType(std::string type){ _Type = type;}