/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:23:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/09/30 12:05:28 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

#define CH "Please, enter your choice [ADD], [SEARCH], [EXIT] : "

int set_option()
{
    std::string choice;
    std::string option[3] = {"ADD", "SEARCH", "EXIT"};
    
    std::cout << CH ;
    std::getline(std::cin, choice);
    
    for(size_t i = 0; i < choice.length() ; i++){
        choice[i] = std::toupper(choice[i]);
    }

    if (choice == option[0] || choice == option[1] || choice == option[2])
        std::cout << choice << "\n" << std::endl;
    else
        return (1);
    return (0);
}
int main(int ac, char **av)
{
    (void)av;
    // int i = 0;
    // std::string p;
    // std::string o;
    //char name[256];
    
    if (ac == 1)
    {
        // PhoneBook ph;
        
        while (1)
        {
           if (set_option());
                break;
            //std::cout << name << std::endl;
            
        }
    }
    else
        return (std::cout << MSG << std::endl, 1);
    return (0);
}