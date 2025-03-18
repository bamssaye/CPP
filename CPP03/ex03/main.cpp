/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 04:43:36 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 07:11:45 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    
    DiamondTrap t("AAA");
    // t.attack("BBB");
    std::cout   << "  Hit points (FragTrap) {100} : "<< t.getHitPoint() << "\n"
                << "  Energy points (ScavTrap) {50} : "<< t.getEnPoint() << "\n"
                << " Attack damage (FragTrap) {30} : "<< t.getatDamage() << std::endl;  
    // t.takeDamage(4);
    // t.attack("CCC");
    // t.beRepaired(4);
    // t.highFivesGuys();
    t.whoAmI();
   return (0);
}