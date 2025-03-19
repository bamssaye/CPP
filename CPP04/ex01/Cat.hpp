/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 02:12:13 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 04:18:44 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP


#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal {

    Brain *_cat;
public:
    Cat();
    Cat(const Cat &ori);
    ~Cat();
    Cat& operator=(const Cat &ori);
    void makeSound()const;
};

#endif