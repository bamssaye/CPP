/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 04:43:36 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/23 08:22:26 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    
    ScavTrap t("AA");
    // ScavTrap o;
    // o.attack("ddd");
    t.attack("BBB");
    t.takeDamage(4);
    t.attack("CCC");
    t.beRepaired(4);
    t.guardGate();
    
   return (0);
}