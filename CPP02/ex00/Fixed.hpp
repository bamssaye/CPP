/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:38:16 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/13 06:32:53 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __FIXED_HPP
# define __FIXED_HPP

#include <iostream>

class Fixed {
    int _Number;
    static const int _frBit;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& ori);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
#endif