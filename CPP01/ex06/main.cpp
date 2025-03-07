/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:47:21 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 09:59:20 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    
    if (ac != 2)
        return (std::cout << MSG_ERROR << std::endl, 1);
    Harl ha(av[1]);
    ha.complain();
    return 0;
}