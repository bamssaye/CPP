/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:12:10 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 06:28:42 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP


#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    Dog(const Dog & ori);
    Dog& operator=(Dog &ori); 
    virtual ~Dog();
    virtual void makeSound()const;
};

#endif