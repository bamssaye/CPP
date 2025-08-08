/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:11 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 01:30:01 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::_frBit = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}
/* fixed-point number 
    => int number * (1 << fractional bits)
*/
Fixed::Fixed(const int a){
    this->_Number = a * (1 << _frBit);
    std::cout << "Int constructor called" << std::endl;
}

/* fixed-point number 
    => roundf (floating-point number * (1 << fractional bits))
*/
Fixed::Fixed(const float b){
    this->_Number = roundf(b * (1 << _frBit)) ;
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ori){
    std::cout << "Copy constructor called" << std::endl;
    *this = ori;
}

Fixed& Fixed::operator=(const Fixed& ori){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &ori)
        return *this;
    this->_Number = ori._Number;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
    return ((float)_Number / (1 << _frBit));
}

int Fixed::toInt( void ) const{
    return ((int)_Number / (1 << _frBit));
}

std::ostream& operator<<(std::ostream& os, const Fixed&ori){
    os << ori.toFloat();
    return os;
}





