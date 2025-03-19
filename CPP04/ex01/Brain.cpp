/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 04:19:42 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 05:49:54 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstring>

Brain::Brain(){
    // this->_Type = "Brain";
    std::cout << "Brain Default Constructor Called."<< std::endl;
}
Brain::Brain(const Brain &ori){
    std::cout << "Brain copy Constructor Called."<< std::endl;
    memcpy(&this->ideas, &ori.ideas, sizeof(std::string));
    // this->ideas = &ori.ideas;
}
Brain::~Brain(){
    std::cout << "Brain Destructor Called."<< std::endl;
}
Brain& Brain::operator=(const Brain &ori){
    // this->_Type = ori._Type;
    memcpy(&this->ideas, &ori.ideas, sizeof(std::string));
    std::cout << "Brain Copy Assignment Operator Called." << std::endl;
    return (*this);
}
// void Brain::makeSound()const{
//     std::cout << "Brain : Brain Sound..." << std::endl;
// }