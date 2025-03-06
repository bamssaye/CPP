/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:23:27 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/04 03:08:24 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook() : count(0){}

/*
Choice : {ADD, EXIT, SEARCH}
ADD -> add new contact.
SEARCH -> search for contact
EXIT -> exit the progam [Phone Book]
*/
int PhoneBook::set_option(std::string &choice)
{
    for (size_t i = 0; i < choice.length() ; i++){
    	choice[i] = std::toupper(choice[i]);
	}
    if (choice == "EXIT") exit(0);
    if (choice != "ADD" && choice != "SEARCH") return (1);
    if (choice == "ADD") AddNewContact();
    else if (choice == "SEARCH") SearchContact();
    return (0);
}

void PhoneBook::AddNewContact(){
    if (count < 8) {
            contacts[count].AddInfo();
            count++;
        } else {
            std::cout << "PhoneBook is full! Replacing oldest contact." << std::endl;
            for (int i = 1; i < 8; i++) {
                contacts[i - 1] = contacts[i]; 
            }
            contacts[7].AddInfo(); 
        }
}

void PhoneBook::SearchContact(){

	std::string _id;
	int i = -1;
	
	std::cout   << "\n" << std::right << std::setw(15) << "Index"
                << std::right << std::setw(15) << "First Name"
                << std::right << std::setw(18) << "Last Name"
				<< std::right << std::setw(21) << "Nick Name"
                << std::endl;
	std::cout   << std::string(7 , ' ') << std::string(16 * 4, '-') << std::endl;
	if(contacts[0].Checkempty()){
		std::cout	<< "No User Found, Choise (ADD) option To add the first Contact. \n"
					<< std::string(std::string(16 * 4, '-')) << std::endl;
	}
	else{
		while (!contacts[++i].Checkempty() && i < 8){//
			std::cout << std::right << std::setw(15) << i + 1 << " | ";
			contacts[i].Printdata();
		}
		std::cout << "Enter The Contact Index: ";
		std::getline(std::cin, _id);
		if(std::cin.eof()){
			exit(1);
		}
		if (_id.length() == 1 && std::isdigit(_id[0]) )
		{
			int i = _id[0] - 48;
			std::string row = std::string(10 * 5, '-');
			if (i >= 1 && i <= 8 && !contacts[i - 1].Checkempty())
			{
				std::cout << row << std::endl;
				std::cout << std::string(3, ' ') << "Contact Id : " << i << std::endl;
				std::cout << row << std::endl;
				contacts[i - 1].ShowInfo();
				std::cout << row << std::endl;
				return ;
			}
		}
		std::cout << "User Not found !!" << std::endl;
	}
}