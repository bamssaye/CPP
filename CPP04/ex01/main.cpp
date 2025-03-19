/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:24:55 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 06:31:46 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"



int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << "////"<< std::endl;
    // Animal test;
    Dog basic;
    std::cout << "////"<< std::endl;
    Dog tm = basic;
    std::cout << "////"<< std::endl;
    //   tm.getType();
    // std::cout << "////"<< std::endl;
    // delete j;//should not create a leak
    // delete i;
    // ...
    return 0;
}