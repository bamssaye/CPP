/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:07:57 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 03:41:20 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->_Type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called."<< std::endl;
}
WrongCat::WrongCat(const WrongCat &ori):WrongAnimal("Animal"){
    std::cout << "WrongCat copy Constructor Called."<< std::endl;
    this->_Type = ori._Type;
}
WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called."<< std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat &ori){
    std::cout << "WrongCat Copy Assignment Operator Called." << std::endl;
    this->_Type = ori._Type;
    return (*this);
}
void WrongCat::makeSound()const{
    std::cout << "WrongCat : Cat Sound..." << std::endl;
}