/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:08:05 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 04:15:04 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal():_Type(""){
    std::cout << "Animal Constructor Called."<< std::endl;
}
Animal::Animal(std::string type):_Type(type){
    std::cout << "Animal Default Constructor Called."<< std::endl;
}
Animal::Animal(const Animal&ori){
    this->_Type = ori._Type;
    std::cout << "Animal copy Constructor Called."<< std::endl;
}
Animal::~Animal(){
    std::cout << "Animal Destructor Called."<< std::endl;
}
Animal& Animal::operator=(const Animal&ori){
    this->_Type = ori._Type;
    std::cout << "Animal Copy Assignment Operator Called." << std::endl;
    return (*this);
}

void Animal::makeSound()const{
    std::cout << "Animal : Animal sound..." << std::endl;
}
std::string  Animal::getType()const{return this->_Type;}