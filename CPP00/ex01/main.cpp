/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:19:49 by bamssaye          #+#    #+#             */
/*   Updated: 2025/02/05 04:27:36 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int main(int ac, char **av)
{
    (void)av;
    if (ac == 1)
    {
        PhoneBook PBook;
        std::string choice;
        while (1)
        {
            std::cout << CH ;
            std::getline(std::cin, choice);
            if (std::cin.eof())
                break;
            if (PBook.set_option(choice))
                std::cout << TRY ;
        }
    }
    else
        return (std::cout << MSG << std::endl, 1);
    std::cout << "\n" << std::endl;
    return (0);
}