/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 06:47:34 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 03:27:08 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(){

    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);
    Point d(10, 15);
    
    bsp(a, b, c, d) ? std::cout << "Inside" << std::endl : std::cout << "Outside"<< std::endl;
    return (0);
}