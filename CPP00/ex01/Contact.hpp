/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:13:14 by bamssaye          #+#    #+#             */
/*   Updated: 2025/02/05 04:16:27 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
  
  std::string _FirstName, _LastName, _NickName, _PhoneNumber, _DarkestSecret;
  std::string _Checklengh(std::string str);
  int _CheckData(std::string str, int choice);
  int _ValiNumber(std::string str);
  int _ValiStrin(std::string str);
  
public:

  Contact();
  void AddInfo();
  void ShowInfo();
  void Printdata();
  int  Checkempty();
};

#endif