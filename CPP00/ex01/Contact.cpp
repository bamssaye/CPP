/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 02:04:07 by bamssaye          #+#    #+#             */
/*   Updated: 2024/12/12 00:45:48 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

Contact::Contact(): 
    FirstName(""), LastName(""), NickName(""), PhoneNumber(""), DarkestSecret(""){}
Contact::Contact(std::string f, std::string l, std::string n, std::string p, std::string d):
    FirstName(f), LastName(l), NickName(n), PhoneNumber(p), DarkestSecret(d){}

std::string Contact::GetFirstName(){return FirstName;};
std::string Contact::GetLastName(){return LastName;};
std::string Contact::GetNickName(){return NickName;};
std::string Contact::GetPhoneNumber(){return PhoneNumber;};
std::string Contact::GetDarkestSecret(){return DarkestSecret;};

bool Contact::checkempty(){
    return LastName.empty() && NickName.empty() && PhoneNumber.empty() && DarkestSecret.empty();
}

bool ValiStrin(std::string &str){

    for (std::size_t i = 0; i < str.length() ; i++){
        if (!isalpha(str[i])){
            return (1);
        }    
    }
    return (0);
}

bool ValiNumber(std::string &str){
    for (std::size_t i = 0; i < str.length() ; i++){
        if (!isdigit(str[i]))
            return (1);
    }
    return (0);
}

int checkdata(std::string &str, int choise){
    
    switch (choise)
    {
    case 1: 
        if (str.empty() || ValiStrin(str)){
            return ((std::cout << "Please, Enter  Valid Name [A-Z/a-z] : "), 1);}
        break;
    case 2: 
        if (str.empty() || ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Last Name [A-Z/a-z] : "),1);
        break;
    case 3: 
        if (str.empty() || ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Nickname [A-Z/a-z] : "),1);
        break;
    case 4: 
        if (str.empty() || ValiNumber(str) )
            return ((std::cout << "Please, Enter  Phone Number [0-9] : "),1);
        break;
    case 5: 
        if (str.empty() || !ValiNumber(str) || !ValiStrin(str) )
            return ((std::cout << "Please, Enter  Darkest Secret!! [A-Z/a-z][0-9]: "),1);
        break;
    }
    return (0);
}

void Contact::AddInfo(){
 
        std::cout << "Enter First Name : ";
        do{
            std::getline(std::cin, FirstName);
            if (std::cin.eof())
                exit(1);
        }while(checkdata(FirstName, 1));
        
    
        std::cout << "Enter Last Name: ";
        do{
            std::getline(std::cin, LastName);
            if (std::cin.eof())
                exit(1);
        }while(checkdata(LastName, 2));
  
        std::cout << "Enter Nickname : ";
        do{
            std::getline(std::cin, NickName);
            if (std::cin.eof())
                exit(1);
        }while(checkdata(NickName, 3));
        

        std::cout << "Enter Phone Number: ";
        do{
            std::getline(std::cin, PhoneNumber);
            if (std::cin.eof())
                exit(1);
        }while(checkdata(PhoneNumber, 4));
        

        std::cout << "Enter Darkest Secret: ";
        do{    
            std::getline(std::cin, DarkestSecret);
            if (std::cin.eof())
                exit(1);
        }while(checkdata(DarkestSecret, 5));
   
}

void Contact::ShowInfo(){
        
        std::string tab = std::string(3, ' ');
        std::cout << tab << "First Name: " << Contact::GetFirstName() << std::endl;
        std::cout << tab << "Last Name: " << Contact::GetLastName() << std::endl;
        std::cout << tab << "Nickname: " << Contact::GetNickName() << std::endl;
        std::cout << tab << "Phone Number: " << Contact::GetPhoneNumber() << std::endl;
        std::cout << tab << "Darkest Secret: " << GetDarkestSecret() << std::endl;
}

void Contact::PrintData()
{
    std::string fn, ln, nkn;

    fn = GetFirstName();
    ln = GetLastName();
    nkn = GetNickName();
    fn = (fn.length() > 10) ? (fn.substr(0, 9) + '.') : (fn + std::string((10 - fn.length()), ' '));
    ln = (ln.length() > 10) ? (ln.substr(0, 9) + '.') : (ln + std::string((10 - ln.length()), ' '));
    nkn = (nkn.length() > 10) ? (nkn.substr(0, 9) + '.') : (nkn + std::string((10 - fn.length()), ' '));
    
    std::cout   << std::left << std::setw(15) << fn << " | "
                << std::left << std::setw(15) << ln << " | "
                << std::left << std::setw(15) << nkn << " | "
                << std::endl;
    
}