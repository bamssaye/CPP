/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:19:49 by bamssaye          #+#    #+#             */
/*   Updated: 2024/10/03 15:46:33 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int set_option(PhoneBook &PBook, std::string &choice)
{
    PBook.add();
    if (choice == "ADD"){
        std::cout << choice << std::endl;
    }
    else if (choice == "SEARCH"){
        std::cout << choice << std::endl;
    }
    return (0);
}
int _checkin(std::string &choice)
{
    for(size_t i = 0; i < choice.length() ; i++){
        choice[i] = std::toupper(choice[i]);
    }
    if (choice == "ADD" || choice == "SEARCH")
        return (0);
    else if (choice == "EXIT")
        exit(0);
    return (1);
}
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
            if (_checkin(choice))
                std::cout << TRY ;
            if (set_option(PBook, choice))
                break;
        }
    }
    else
        return (std::cout << MSG << std::endl, 1);
    std::cout << "\n" << std::endl;
    return (0);
}