/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:07:50 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 03:35:47 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP
#define __WRONGCAT_HPP


#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {


public:
    WrongCat();
    WrongCat(const WrongCat &ori);
    WrongCat& operator=(const WrongCat &ori);
    ~WrongCat();

    void makeSound()const;
};

#endif