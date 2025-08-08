/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:51:10 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/08 02:51:11 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <iostream>

class Weapon {

    std::string _Type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string type);
};

#endif
