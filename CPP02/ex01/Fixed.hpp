/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:27:13 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 01:21:28 by bamssaye         ###   ########.fr       */
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
    Fixed(const Fixed &ori);
    Fixed& operator=(const Fixed&ori);
    ~Fixed();
    
    Fixed(const int a);
    Fixed(const float b);
    
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed&fp);

#endif

