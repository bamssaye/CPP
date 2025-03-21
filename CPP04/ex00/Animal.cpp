/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:08:05 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 03:53:06 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_Type(""){
    std::cout << "Animal Default Constructor Called."<< std::endl;
}

Animal::Animal(const Animal&ori){
    std::cout << "Animal copy Constructor Called."<< std::endl;
    this->_Type = ori._Type;
}

Animal::~Animal(){
    std::cout << "Animal Destructor Called."<< std::endl;
}

Animal& Animal::operator=(const Animal&ori){
    std::cout << "Animal Copy Assignment Operator Called." << std::endl;
    if (this == &ori)
        return *this;
    this->_Type = ori._Type;
    return (*this);
}

void Animal::makeSound()const{
    std::cout << "Animal : Animal sound..." << std::endl;
}
std::string  Animal::getType()const{return this->_Type;}