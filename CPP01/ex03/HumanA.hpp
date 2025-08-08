/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:51:02 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/08 02:51:03 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP
#define __HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

    std::string _name;
    Weapon *_Weapon;
public:
    HumanA(Weapon &w);
    HumanA(std::string name, Weapon &w);
    std::string get_Type();
    void attack();
};
#endif