/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:23:05 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 21:53:13 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
   
    try{
        
        Form a1("FORM1", 15, 30);
        Bureaucrat b1("B1", 15);
        b1.signForm(a1);
        
    }catch(std::exception & e) {
        std::cerr  << e.what() << std::endl;
    }
    
    try{
        
        Form a2("FORM2", 19, 30);
        Bureaucrat b2("B2", 20);
        b2.signForm(a2);
        
    }catch(std::exception & e) {
        std::cerr  << e.what() << std::endl;
    }
}