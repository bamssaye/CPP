/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:07:52 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 03:40:35 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal():_Type(""){
        std::cout << "WrongAnimal Default Constructor Called."<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal&ori){
        std::cout << "WrongAnimal copy Constructor Called."<< std::endl;
        this->_Type = ori._Type;
}

WrongAnimal::~WrongAnimal(){
        std::cout << "WrongAnimal Destructor Called."<< std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal&ori){
        std::cout << "WrongAnimal Copy Assignment Operator Called." << std::endl;
        if (this == &ori)
                return *this;
        this->_Type = ori._Type;
        return (*this);
}

void WrongAnimal::makeSound()const {
    std::cout << "WrongAnimal : Animal sound" << std::endl;
}

std::string  WrongAnimal::getType()const {
        return this->_Type;
}