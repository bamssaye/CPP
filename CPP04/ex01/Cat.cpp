/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:16:54 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 05:04:19 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->_Type = "Cat";
    this->_cat = new Brain();
    std::cout << "Cat Default Constructor Called."<< std::endl;
}
Cat::Cat(const Cat &ori):Animal("Animal"){
    std::cout << "Cat copy Constructor Called."<< std::endl;
    this->_Type = ori._Type;
    this->_cat = ori._cat;
}
Cat::~Cat(){
    delete _cat;
    std::cout << "Cat Destructor Called."<< std::endl;
}
Cat& Cat::operator=(const Cat &ori){
    this->_Type = ori._Type;
    this->_cat = ori._cat;
    std::cout << "Cat Copy Assignment Operator Called." << std::endl;
    return (*this);
}
void Cat::makeSound()const{
    std::cout << "Cat : Cat Sound..." << std::endl;
}