/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:11 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 03:11:22 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::_frBit = 8;

Fixed::Fixed():_Number(0){
};
Fixed::Fixed(const Fixed& obj){
    this->_Number = obj._Number;
}
Fixed& Fixed::operator=(const Fixed& obj){
    if (this == &obj)
        return *this;
    this->_Number = obj._Number;
    return *this;
}
Fixed::~Fixed(){
}

Fixed::Fixed(const int a){
    this->_Number = a * (1 << _frBit);
};
Fixed::Fixed(const float b){
    this->_Number = roundf(b * (1 << _frBit)) ;
}

float Fixed::toFloat( void ) const{
    return ((float)_Number / (1 << _frBit));
}
int Fixed::toInt( void ) const{
    return ((int)_Number / (1 << _frBit));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    os << obj.toFloat();
    return os;
}

///////////

bool Fixed::operator>(const Fixed& obj){
    return (this->_Number > obj._Number);
}
bool Fixed::operator<(const Fixed& obj){
    return (this->_Number < obj._Number);
}
bool Fixed::operator>=(const Fixed& obj){
    return (this->_Number >= obj._Number);
}
bool Fixed::operator<=(const Fixed& obj){
   return (this->_Number <= obj._Number); 
}
bool Fixed::operator==(const Fixed& obj){
    return (this->_Number == obj._Number);
}
bool Fixed::operator!=(const Fixed& obj){
    return (this->_Number != obj._Number);
}

///////

Fixed Fixed::operator++(){
    this->_Number++;
    return (*this);
};
Fixed Fixed::operator++(int){
    Fixed t(*this);
    this->_Number++;
    return (t);
};
Fixed Fixed::operator--(){
    this->_Number--;
    return (*this);
};
Fixed Fixed::operator--(int){
    Fixed t(*this);
    this->_Number--;
    return (t);
};

////////

float Fixed::operator*(const Fixed& obj){
    return (this->toFloat() * obj.toFloat());
};
float Fixed::operator/(const Fixed& obj){
    return (this->toFloat() / obj.toFloat());
}
float Fixed::operator+(const Fixed& obj){
    return (this->toFloat() + obj.toFloat());
}
float Fixed::operator-(const Fixed& obj){
    return (this->toFloat() - obj.toFloat());
}

////////

const Fixed &Fixed::max(const Fixed& a, const Fixed& b){
    return (((a._Number > b._Number) ? a : b));
}
const Fixed &Fixed::min(const Fixed& a, const Fixed& b){
    return (((a._Number < b._Number) ? a : b));
}

////////

const Fixed &max(const Fixed& a, const Fixed& b){
    return (Fixed::max(a, b));
}
const Fixed &min(const Fixed& a, const Fixed& b){
    return (Fixed::min(a, b));
}