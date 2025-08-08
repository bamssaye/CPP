/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:45:40 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/22 03:01:41 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) { 
    // std::cout << "Part 0 [inc ++ dec --]" << std::endl;
    // std::cout << "pre-increment and post-increment\n" << std::endl;
    Fixed a;
    Fixed const b( Fixed( 5.05565656565656565545f ) * Fixed(2) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << "Max : " << Fixed::max( a, b ) << std::endl;
    
    // std::cout << "\npre-decrement and post-decrement\n" << std::endl;
    // a = 0;
    // std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;
    // std::cout << "a : " << a << " b = " << b << std::endl;
    // std::cout << "Min : "<< Fixed::min( a, b ) << std::endl;
    // //////////////////////////////
    // std::cout << "\nPart 1 : [- , * , +, /]\n" << std::endl;
    // Fixed d(32);
    // Fixed e(3);
    // Fixed c;
    // c = c - e;
    // std::cout << "c(0) - e(3) : " << c << std::endl;
    // c = d + e;
    // std::cout << "d(32) + e(3) : " << c << std::endl;
    // c = d * e;
    // std::cout << "d(32) * e(3) : " << c << std::endl;
    // d = 32; 
    // e = 3;
    // c = d / e;
    // std::cout << "d(32) / e(3) : " << c << std::endl;
    // Fixed n (Fixed(4.54f) / Fixed(0));
    // std::cout << "Fixed(4.54f) / Fixed(0) : " << n << " {Division by zero is considered as undefined}" << std::endl;
    // Fixed t (Fixed(4.54f) - Fixed(2));
    // std::cout << "Fixed(4.54f) - Fixed(2) : "<< t << std::endl;
    // /////////////////////
    // std::cout << "\nPart 2 : [min, max]\n" << std::endl;
    // a = 18.53f;
    // c = 18.54f;
    // std::cout <<"a = "<<a<<"\nc = "<<c<< "\nmax: "<< max(a, c) << std::endl;
    // std::cout <<"a = "<<a<<"\nc = "<<c<< "\nmin: "<< min(a, c) << std::endl;
    // std::cout << "\nPart 3 : [>, <, >=, <=]\n" << std::endl;
    // d = 34;
    // e = 94.54f;
    // Fixed y(94.54f);
    // std::cout << "d = 34; e = 94.54f" << std::endl;
    // std::cout << "d == e} => " ;
    // (d == e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ; 
    // std::cout << "d != e} => " ;
    // (d != e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ; 
    // std::cout << "d >= e} => ";
    // (d >= e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ; 
    // std::cout << "d <= e } => " ;
    // (d <= e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ;
    // std::cout << "d > e} => " ;
    // (d > e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ;
    // std::cout << "d < e} => ";
    // (d < e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ;
    // std::cout << "e == y(94.54f)} => " ;
    // (y == e) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl ; 
    // return 0; 
}
