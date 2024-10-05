/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 02:04:07 by bamssaye          #+#    #+#             */
/*   Updated: 2024/10/05 06:21:28 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

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
    for (std::size_t i = 0; str.length() ; i++){
        if (isalpha(str[i]))
            return (true);
    }
    return (false);
}

bool ValiNumber(std::string &str){
    for (std::size_t i = 0; str.length() ; i++){
        if (!isdigit(str[i]))
            return (true);
    }
    return (false);
}

int checkdata(std::string &str, int choise){
    
    switch (choise)
    {
    case 1: 
        if (str.empty() || !ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Name!! : "), 1);
        break;
    case 2: 
        if (str.empty() && ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Last Name!! : "),1);
        break;
    case 3: 
        if (str.empty() && ValiStrin(str))
            return ((std::cout << "Please, Enter  Valid Nickname!! : "),1);
        break;
    case 4: 
        if (str.empty() && ValiNumber(str))
            return ((std::cout << "Please, Enter  Phone Number!! : "),1);
        break;
    case 5: 
        if (str.empty() && (ValiNumber(str) || ValiStrin(str)))
            return ((std::cout << "Please, Enter  Darkest Secret!! : "),1);
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
        
        std::cout << "First Name: " << Contact::GetFirstName() << std::endl;
        std::cout << "Last Name: " << Contact::GetLastName() << std::endl;
        std::cout << "Nickname: " << Contact::GetNickName() << std::endl;
        std::cout << "Phone Number: " << Contact::GetPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << GetDarkestSecret() << std::endl;
}



// void Contact::print_row()
// {
// 	std::string f_ = getFirstName();
// 	f_ = (f_.length() > 10) ? (f_.substr(0, 9) + '.') : (f_);
// 	std::string l_ = getLastName();
// 	l_ = (l_.length() > 10) ? (l_.substr(0, 9) + '.') : (l_);
// 	std::string n_ = getNickName();
// 	n_ = (n_.length() > 10) ? (n_.substr(0, 9) + '.') : (n_);

// 	std::cout << std::setw(10) << std::right << f_ << "|";
// 	std::cout << std::setw(10) << std::right << l_ << "|";
// 	std::cout << std::setw(10) << std::right << n_ << std::endl;
// }