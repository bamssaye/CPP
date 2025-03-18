/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 04:43:36 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/17 01:51:43 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    
    FragTrap t("AA");
    t.attack("BBB");
    t.takeDamage(4);
    t.attack("CCC");
    t.beRepaired(4);
    t.highFivesGuys();
    
   return (0);
}