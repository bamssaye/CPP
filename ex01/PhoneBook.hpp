/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:01:48 by bamssaye          #+#    #+#             */
/*   Updated: 2024/09/30 11:49:55 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string.h>

class PhoneBook {


public:

  //Contact contacts[8];
  




private:
  //Contact contact[8];





};


class Contact {


public:

  int notEmpty(){
    return (!FirstName.empty() || !LastName.empty() || !NickName.empty() || !PhoneNumber.empty() || !DarkestSecret.empty());
  }
  
  int isValid(){
    return (1);
  }
  
  

  
private:
  
  std::string FirstName;
  std::string LastName; 
  std::string NickName;
  std::string PhoneNumber;
  std::string DarkestSecret;
  
     

};



#endif