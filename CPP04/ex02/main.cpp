/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:24:55 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 06:31:01 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"



int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // Animal i;
    
    std::cout << std::string(10,'/')<< std::endl;
    
    Dog basic ; {
        std::cout << std::string(10,'+')<< std::endl;

        Dog tmp = basic;
        std::cout << std::string(10,'+')<< std::endl;

    }
    Cat bas ; {
        std::cout << std::string(10,'+')<< std::endl;

        Cat tm = bas;
    }
    // std::cout << std::string(10,'/')<< std::endl;
    // std::cout << i->getType() << std::endl;
    // std::cout << j->getType() << std::endl;
    // std::cout << std::string(10,'/')<< std::endl;
    // delete j;
    // delete i;
    return 0;
}