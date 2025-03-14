/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:11 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/13 06:32:53 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::_frBit = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
};
Fixed::Fixed(const int a){
    this->_Number = a * (1 << _frBit);
    std::cout << "Int constructor called" << std::endl;
};
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
    this->_Number = ori._Number;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Fixed&ori){
    os << ori.toFloat();
    return os;
}
float Fixed::toFloat( void ) const{
    return ((float)_Number / (1 << _frBit));
}
int Fixed::toInt( void ) const{
    return ((int)_Number / (1 << _frBit));
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

/*
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
*/
/*

Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called


*/