/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:07:55 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 03:35:31 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP
#define __WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal {

protected:
    std::string _Type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal&ori);
    WrongAnimal& operator=(const WrongAnimal&ori);
    ~WrongAnimal();
    
    void makeSound()const;
    std::string  getType()const;
};

#endif