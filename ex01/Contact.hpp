/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:13:14 by bamssaye          #+#    #+#             */
/*   Updated: 2024/10/03 15:44:05 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.h"

class Contact {
public:
    // Contact();
private:
  std::string FirstName;
  std::string LastName; 
  std::string NickName;
  std::string PhoneNumber;
  std::string DarkestSecret;
};

#endif