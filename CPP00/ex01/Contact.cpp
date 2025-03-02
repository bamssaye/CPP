/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 02:04:07 by bamssaye          #+#    #+#             */
/*   Updated: 2025/02/05 04:15:40 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

Contact::Contact():_FirstName(""), _LastName(""), _NickName(""), _PhoneNumber(""), _DarkestSecret(""){}

std::string Contact::_Checklengh(std::string str){
        return ((str.length() > 10) ? 
                (str.substr(0, 9) + '.') :
                (str + std::string((10 - str.length()), ' ')));
}

int Contact::_CheckData(std::string str, int choice){
    
    switch (choice){
    case 1: 
        if (str.empty() || _ValiStrin(str)){
            return ((std::cout << "Please, Enter  Valid Name [A-Z/a-z] : "), 1);}
        break;
    case 2: 
        if (str.empty() || _ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Last Name [A-Z/a-z] : "),1);
        break;
    case 3: 
        if (str.empty() || _ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Nickname [A-Z/a-z] : "),1);
        break;
    case 4: 
        if (str.empty() || _ValiNumber(str) )
            return ((std::cout << "Please, Enter  Phone Number [0-9] : "),1);
        break;
    case 5: 
        if (str.empty())
            return ((std::cout << "Please, Enter  Darkest Secret!!"),1);
        break;
    }
    return (0);
}

int Contact::Checkempty(){
    return (_FirstName.empty() &&
            _LastName.empty() &&
            _NickName.empty() &&
            _PhoneNumber.empty() &&
            _DarkestSecret.empty());
}

int Contact::_ValiStrin(std::string str){
    for (std::size_t i = 0; i < str.length() ; i++){
        if (!isalpha(str[i])) {
            return (1);}  
    }
    return (0);
}

int Contact::_ValiNumber(std::string str){
    for (std::size_t i = 0; i < str.length() ; i++){
        if (!isdigit(str[i]))
            return (1);
    }
    return (0);
}

void Contact::Printdata(){
        std::string Fname, Lname, Nname;

        Fname = _Checklengh(_FirstName);
        Lname = _Checklengh(_LastName);
        Nname = _Checklengh(_NickName);
        std::cout   << std::left << std::setw(15) << Fname << " | "
                << std::left << std::setw(15) << Lname << " | "
                << std::left << std::setw(15) << Nname << " | "
                << std::endl;
}

void Contact::ShowInfo(){
        std::string tab = std::string(3, ' ');
        std::cout << tab << "First Name: " << _FirstName << std::endl;
        std::cout << tab << "Last Name: " << _LastName << std::endl;
        std::cout << tab << "Nickname: " << _NickName << std::endl;
        std::cout << tab << "Phone Number: " << _PhoneNumber << std::endl;
        std::cout << tab << "Darkest Secret: " << _DarkestSecret << std::endl;
 };

void Contact::AddInfo(){

    std::cout << "Enter First Name : ";
    do{
         std::getline(std::cin, _FirstName);
         if (std::cin.eof())
             exit(1);
    }while(_CheckData(_FirstName, 1));
    std::cout << "Enter Last Name: ";
    do{
        std::getline(std::cin, _LastName);
        if (std::cin.eof())
            exit(1);
    }while(_CheckData(_LastName, 2));
    std::cout << "Enter Nickname : ";
    do{
        std::getline(std::cin, _NickName);
        if (std::cin.eof())
            exit(1);
    }while(_CheckData(_NickName, 3));
    std::cout << "Enter Phone Number: ";
    do{
        std::getline(std::cin, _PhoneNumber);
        if (std::cin.eof())
            exit(1);
    }while(_CheckData(_PhoneNumber, 4));
    std::cout << "Enter Darkest Secret: ";
    do{    
        std::getline(std::cin, _DarkestSecret);
        if (std::cin.eof())
            exit(1);
    }while(_CheckData(_DarkestSecret, 5));
 }