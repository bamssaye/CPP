/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:01:48 by bamssaye          #+#    #+#             */
/*   Updated: 2025/01/28 23:10:49 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    
    PhoneBook();
    int count;
    void AddNewContact();
    void SearchContact();
    void checkempty();
      
private:
    
    Contact contacts[8];
};

#endif