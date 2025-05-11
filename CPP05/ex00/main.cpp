/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:23:05 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/10 23:20:33 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
   
    try{
        Bureaucrat b2("ol",150);
        std::cout << b2 << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    Bureaucrat *b = new Bureaucrat();
    try
    {
        b->incGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << *b << std::endl;
    delete b;
}