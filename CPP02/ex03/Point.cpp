/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 06:50:30 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/14 03:27:04 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){}
Point::Point(const float a, const float b):_x(a), _y(b){}
Point::Point(const Point &ori):_x(ori.get_x()),_y(ori.get_y()){}
Point::~Point(){}

const Fixed &Point::get_x( void ) const{
    return this->_x;
}
const Fixed &Point::get_y( void ) const{
    return this->_y;
}
Point& Point::operator=(const Point&ori){
    return ((this == &ori) ? *this : *this);
}
