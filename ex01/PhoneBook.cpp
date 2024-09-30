/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:23:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/09/30 09:25:43 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

#define CH "Please, enter your choice [ADD], [SEARCH], [EXIT] : "

int main(int ac, char **av)
{
    (void)av;
    // int i = 0;
    // std::string p;
    // std::string o;
    char name[256];
    
    if (ac == 1)
    {
        // PhoneBook ph;
        
        while (1)
        {
            std::cout << CH ;
            std::cin.getline (name, 256);
            // if (check_in())
            break;
            std::cout << name << std::endl;
            
        }
    }
    else
        return (std::cout << MSG << std::endl, 1);
    return (0);
}