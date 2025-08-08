/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:10:15 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/23 20:24:33 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP


#include <iostream>

class Animal {
    
protected:
    std::string _Type;
    Animal();
    Animal(const Animal&ori);
    Animal& operator=(const Animal&ori);
    virtual ~Animal();
public:
    
    virtual void makeSound()const = 0;
    std::string  getType()const;
};

#endif