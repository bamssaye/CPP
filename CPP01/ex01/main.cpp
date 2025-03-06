/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 05:12:03 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/05 21:22:11 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 4;
       
    Zombie *z = zombieHorde(n, "Zooo");
    for (int i = 0; i < n ; i++)
        std::cout << z[i].Get_Name() << std::endl;
    for (int i = 0; i < n ; i++)
        z[i].announce();
    delete[] z;

}