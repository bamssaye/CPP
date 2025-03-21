/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:24:55 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 05:05:02 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::string(10, '/') << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << std::string(8, '*') << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::string(10, '/') << std::endl;
    const WrongAnimal* me = new WrongAnimal();
    const WrongAnimal* a = new WrongCat();
    const WrongCat* wcat = new WrongCat();
    std::cout << std::string(10, '/') << std::endl;
    std::cout << a->getType() << std::endl;
    a->makeSound();
    me->makeSound();
    std::cout << std::string(8, '*') << std::endl;
    wcat->makeSound();
    std::cout << std::string(10, '/') << std::endl;
    delete i;
    delete j;
    delete meta;
    delete me;
    delete a;
    delete wcat;
    return 0;
}