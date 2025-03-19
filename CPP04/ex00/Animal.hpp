/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:10:15 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 04:13:12 by bamssaye         ###   ########.fr       */
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
    Animal(std::string type);
    Animal(const Animal&ori);
    virtual ~Animal();
    Animal& operator=(const Animal&ori);
    virtual void makeSound()const;
    void setType(std::string type);
    std::string  getType()const;
};

#endif