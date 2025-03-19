/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:22:46 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 05:56:57 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->_Type = "Dog";
    this->_dog = new Brain();
    std::cout << "Dog Default Constructor Called."<< std::endl;
}
Dog::Dog(const Dog & ori):Animal("Animal"){
    std::cout << "Dog copy Constructor Called."<< std::endl;
    this->_dog = new Brain();
    this->_Type = ori._Type;
    *this->_dog = *ori._dog;
}
Dog::~Dog(){
    delete this->_dog;
    std::cout << "Dog Destructor Called."<< std::endl;
}
Dog& Dog::operator=(Dog &ori){
    this->_dog = new Brain();
    this->_Type = ori._Type;
    *this->_dog = *ori._dog;
    std::cout << "Dog Copy Assignment Operator Called." << std::endl;
    return (*this);
}
void Dog::makeSound()const{
    std::cout << "Dog : Dog Sound..." << std::endl;
}