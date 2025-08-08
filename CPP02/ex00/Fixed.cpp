/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:38:19 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 01:18:15 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frBit = 8;

Fixed::Fixed():_Number(0){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& ori){
    std::cout << "Copy constructor called" << std::endl;
    this->_Number = ori.getRawBits(); 
}

Fixed& Fixed::operator=(const Fixed& ori){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &ori)
        return *this;
    this->_Number = ori.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_Number);
}
void Fixed::setRawBits( int const raw ){
   this->_Number = raw;
}