/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:12:10 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 03:44:28 by bamssaye         ###   ########.fr       */
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
    ~Dog();
    Dog& operator=(Dog &ori); 
    void makeSound()const;
};

#endif