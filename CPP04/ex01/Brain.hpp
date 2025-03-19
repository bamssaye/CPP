/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:57:48 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/19 05:50:06 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP
#define __BRAIN_HPP


#include <iostream>

class Brain {
    std::string ideas[100];

public:
    Brain();
    // Brain(std::string type);
    Brain(const Brain&ori);
    virtual ~Brain();
    Brain& operator=(const Brain&ori);
    // virtual void makeSound()const;
    // void setType(std::string type);
    // std::string  getType()const;
};

#endif