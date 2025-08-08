/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:13 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 03:03:57 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __FIXED_HPP
#define __FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    int _Number;
    static const int _frBit;
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed&obj);
    ~Fixed();
    
    Fixed(const int a);
    Fixed(const float b);
    
    float toFloat( void ) const;
    int toInt( void ) const;
    
    bool operator>(const Fixed& obj);
    bool operator<(const Fixed& obj);
    bool operator>=(const Fixed& obj);
    bool operator<=(const Fixed& obj);
    bool operator==(const Fixed& obj);
    bool operator!=(const Fixed& obj);

    float operator*(const Fixed& obj);
    float operator/(const Fixed& obj);
    float operator+(const Fixed& obj);
    float operator-(const Fixed& obj);
    
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    
    const static Fixed &max(const Fixed& a, const Fixed& b);
    const static Fixed &min(const Fixed& a, const Fixed& b);
};

const Fixed  &max(const Fixed& a, const Fixed& b);
const Fixed  &min(const Fixed& a, const Fixed& b);
std::ostream& operator<<(std::ostream& os, const Fixed& obj);


#endif

