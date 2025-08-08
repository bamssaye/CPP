/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:50:53 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/08 02:50:54 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef __HUMANB_HPP
# define __HUMANB_HPP

#include "Weapon.hpp"


class HumanB {

    std::string _name;
    Weapon *_weapon;
public:
    HumanB();
    HumanB(std::string name);
    std::string get_Type();
    void setWeapon(Weapon &w);
    void attack();
};

#endif