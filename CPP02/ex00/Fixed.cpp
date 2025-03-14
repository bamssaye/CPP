/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:38:19 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/13 06:32:53 by bamssaye         ###   ########.fr       */
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

Fixed& Fixed::operator=(const Fixed& ori){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_Number = ori.getRawBits();
    return *this;
}
