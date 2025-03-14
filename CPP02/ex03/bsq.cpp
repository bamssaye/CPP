/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 06:57:04 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/14 04:39:09 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*
sign(p1​,p2​,p3​)=(p1x​−p3x​)(p2y​−p3y​)−(p2x​−p3x​)(p1y​−p3y​)
*/
float sign (Point p1, Point p2, Point p3)
{   
    return (
        (p1.get_x().toFloat() - p3.get_x().toFloat()) * 
        (p2.get_y().toFloat() - p3.get_y().toFloat()) - 
        (p2.get_x().toFloat() - p3.get_x().toFloat()) * 
        (p1.get_y().toFloat() - p3.get_y().toFloat()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    
    float d1, d2, d3;
    bool has_neg, has_pos;
    
    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);
    if (!d1 || !d2 || !d3)
        return false;
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    return !(has_neg && has_pos);
}