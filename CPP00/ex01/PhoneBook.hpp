/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:01:48 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/04 03:08:19 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

    int count;
    void AddNewContact();
    void SearchContact();
    Contact contacts[8];
    
public:
    PhoneBook();
    int set_option(std::string &choice);
    
};

#endif