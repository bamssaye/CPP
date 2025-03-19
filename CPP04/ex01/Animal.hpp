/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:10:15 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 06:32:02 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP


#include <iostream>

class Animal {
    
protected:
    std::string _Type;
public:
    Animal();
    Animal& operator=(const Animal&ori);
    Animal(const Animal&ori);
    Animal(std::string type);
    virtual ~Animal();
    virtual void makeSound()const;
    void setType(std::string type);
    std::string  getType()const;
};

#endif