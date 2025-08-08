/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:12:10 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 06:27:32 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP


#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    Brain *_dog;
public:
    Dog();
    Dog(const Dog & ori);
    virtual ~Dog();
    Dog& operator=(Dog &ori); 
    virtual void makeSound()const;
};

#endif