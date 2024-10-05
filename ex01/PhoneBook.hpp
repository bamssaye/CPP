/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:01:48 by bamssaye          #+#    #+#             */
/*   Updated: 2024/10/03 15:43:41 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "PhoneBook.h"
#include "Contact.hpp"

class PhoneBook {
public:
  Contact contacts[8];
 // PhoneBook();
  void add(){
        std::cout << "hello Phone Book \n" << std::endl;
  };
  void show();
  
private:
    
};

#endif