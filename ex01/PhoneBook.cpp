/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:23:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/10/05 04:41:03 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook.h"

PhoneBook::PhoneBook() : count(0){
    
}

void PhoneBook::AddNewContact(){
    if (count < 8) {
            contacts[count].AddInfo();
            count++;
        } else {
            std::cout << "PhoneBook is full! Replacing oldest contact." << std::endl;
            for (int i = 1; i < 8; ++i) {
                contacts[i - 1] = contacts[i]; 
            }
            contacts[7].AddInfo(); 
        }
}

void PhoneBook::SearchContact(){

	std::string index_str;
	std::cout << "Enter The Contact Index: ";
	std::getline(std::cin, index_str);

	if (index_str.length() == 1 && std::isdigit(index_str[0]) )
	{
		int index = index_str[0] - 48;
		if (index >= 1 && index <= 8 && !contacts[index - 1].checkempty())
		{
			std::cout << index << std::endl;
			contacts[index - 1].ShowInfo();
			std::cout << "---------------" << std::endl;
			return ;
		}
	}
	std::cout << "No User In This Index!!" << std::endl;

}