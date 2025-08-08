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

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook {

    int _count;
    void _AddNewContact();
    void _SearchContact();
    Contact _contacts[8];
    
public:
    PhoneBook();
    int setOption(std::string &choice);
    
};

#define CH "[ADD], [SEARCH], [EXIT] : "
#define MSG "Error, Use the executable without args."
#define TRY "Enter The Right Option, "

#endif