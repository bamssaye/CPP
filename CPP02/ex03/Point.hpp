/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 06:48:06 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/14 03:27:31 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP
#define __POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
    const Fixed _x;
    const Fixed _y;
public:
    Point();
    Point(const float a, const float b);
    Point(const Point&ori);
    Point& operator=(const Point&ori);
    ~Point();

    const Fixed &get_x( void ) const;
    const Fixed &get_y( void ) const;
};
// std::ostream	&operator<<(std::ostream &o, Point const point);

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif