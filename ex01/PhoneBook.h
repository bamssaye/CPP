/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:01:45 by bamssaye          #+#    #+#             */
/*   Updated: 2024/06/09 05:27:38 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>
#include <string.h>


class PhoneBook
{
    public:
        char contact[8];
    private:  
};

class Contact
{
  public:
    std::string FirstName;
    std::string LastName;
    std::string NickName;    
  private:    
};



#endif