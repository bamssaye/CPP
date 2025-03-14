/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:13 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/13 06:32:53 by bamssaye         ###   ########.fr       */
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
    Fixed(const int a);
    Fixed(const float b);
    ~Fixed();
    Fixed(const Fixed &ori);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed&ori);
    
    bool operator>(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);
    
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    
    float operator*(const Fixed& other);
    float operator/(const Fixed& other);
    float operator+(const Fixed& other);
    float operator-(const Fixed& other);

    const static Fixed &max(const Fixed&a, const Fixed&b);
    const static Fixed &min(const Fixed&a, const Fixed&b);
};
Fixed const &max(const Fixed&a, const Fixed&b);
Fixed const &min(const Fixed&a, const Fixed&b);
std::ostream& operator<<(std::ostream& os, const Fixed&fp);


#endif

