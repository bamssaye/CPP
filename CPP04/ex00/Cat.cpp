/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:16:54 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 03:43:13 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->_Type = "Cat";
    std::cout << "Cat Default Constructor Called."<< std::endl;
}

Cat::Cat(const Cat &ori):Animal(){
    std::cout << "Cat copy Constructor Called."<< std::endl;
    this->_Type = ori._Type;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called."<< std::endl;
}

Cat& Cat::operator=(const Cat &ori){
    std::cout << "Cat Copy Assignment Operator Called." << std::endl;
    if (this == &ori)
        return *this;
    this->_Type = ori._Type;
    return (*this);
}

void Cat::makeSound()const{
    std::cout << "Cat : Cat Sound..." << std::endl;
}