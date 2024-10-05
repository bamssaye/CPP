/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:13:14 by bamssaye          #+#    #+#             */
/*   Updated: 2024/10/05 05:05:20 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

// #include "PhoneBook.h"
#include <iostream>
#include <cctype>
#include <string.h>
#include <cstdlib>

class Contact {
public:
    
    Contact();
    Contact(std::string f, std::string l, std::string n, std::string p, std::string d);
    
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetNickName();
    std::string GetPhoneNumber();
    std::string GetDarkestSecret();
    
    void AddInfo();
    void ShowInfo();
    bool checkempty();
    
private:
  std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;
};

#endif