/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:01:43 by bamssaye          #+#    #+#             */
/*   Updated: 2024/06/12 17:59:28 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

class PhoneBook
{
  public:
    std::string contact[8];

};
class Contact
{
  public:
  
  int _checkinput(std::string s1, std::string s2, std::string s3, std::string s4)
  {
    if (s1 == "" || s2 == "" || s3 == "" || s4 == "")
      return (1);
    return (0);
  }
  void _addcontact(){}
  void _searchcontact(){}
  void _exit(){}
  private:
    std::string FName;
    std::string LName;
    std::string NName;
    std::string PNumber;
    std::string DSecret;
};

int main()
{
   
    PhoneBook con1;

    con1.contact
}


