/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 04:19:42 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 05:57:15 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstring>

Brain::Brain(){
    std::cout << "Brain Default Constructor Called."<< std::endl;
}
Brain::Brain(const Brain &ori){
    std::cout << "Brain copy Constructor Called."<< std::endl;
    std::copy(ori.ideas, ori.ideas + 100 , this->ideas);
}
Brain::~Brain(){
    std::cout << "Brain Destructor Called."<< std::endl;
}
Brain& Brain::operator=(const Brain &ori){
    std::cout << "Brain Copy Assignment Operator Called." << std::endl;
    if (this == &ori)
        return *this;
    std::copy(ori.ideas, ori.ideas + 100 , this->ideas);
    return (*this);
}
