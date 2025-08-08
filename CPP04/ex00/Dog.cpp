/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:22:46 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 03:42:46 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->_Type = "Dog";
    std::cout << "Dog Default Constructor Called."<< std::endl;
}
Dog::Dog(const Dog & ori):Animal(){
    std::cout << "Dog copy Constructor Called."<< std::endl;
    this->_Type = ori._Type;
}
Dog::~Dog(){
    std::cout << "Dog Destructor Called."<< std::endl;
}
Dog& Dog::operator=(Dog &ori){
    std::cout << "Dog Copy Assignment Operator Called." << std::endl;
    if (this == &ori)
        return *this;
    this->_Type = ori._Type;
    return (*this);
}
void Dog::makeSound()const{
    std::cout << "Dog : Dog Sound..." << std::endl;
}