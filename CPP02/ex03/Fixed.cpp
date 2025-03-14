/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:11 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/14 03:29:03 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::_frBit = 8;

Fixed::Fixed():_Number(0){
};
Fixed::Fixed(const int a){
    this->_Number = a * (1 << _frBit);
};
Fixed::Fixed(const float b){
    this->_Number = roundf(b * (1 << _frBit)) ;
}
Fixed::Fixed(const Fixed& ori){
    *this = ori;
}
Fixed& Fixed::operator=(const Fixed& ori){
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
}
///////////

bool Fixed::operator>(const Fixed& other){
    return (this->_Number > other._Number);
}
bool Fixed::operator<(const Fixed& other){
    return (this->_Number < other._Number);
}
bool Fixed::operator>=(const Fixed& other){
    return (this->_Number >= other._Number);
}
bool Fixed::operator<=(const Fixed& other){
   return (this->_Number <= other._Number); 
}
bool Fixed::operator==(const Fixed& other){
    return (this->_Number == other._Number);
}
bool Fixed::operator!=(const Fixed& other){
    return (this->_Number != other._Number);
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
float Fixed::operator*(const Fixed& ori){
    return (this->toFloat() * ori.toFloat());
};
float Fixed::operator/(const Fixed& ori){
    return (this->toFloat() / ori.toFloat());
}
float Fixed::operator+(const Fixed& ori){
    return (this->toFloat() + ori.toFloat());
}
float Fixed::operator-(const Fixed& ori){
    return (this->toFloat() - ori.toFloat());
}
////

Fixed const &Fixed::max(const Fixed&a, const Fixed&b){
    return (((a._Number > b._Number) ? a : b));
}
Fixed const &Fixed::min(const Fixed&a, const Fixed&b){
    return (((a._Number < b._Number) ? a : b));
}
Fixed const &max(const Fixed&a, const Fixed&b){
    return (Fixed::max(a, b));
}
Fixed const &min(const Fixed&a, const Fixed&b){
    return (Fixed::min(a, b));
}