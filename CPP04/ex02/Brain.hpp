/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:57:48 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 05:27:48 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP
#define __BRAIN_HPP


#include <iostream>

class Brain {
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain&ori);
    Brain& operator=(const Brain&ori);
    ~Brain();
};

#endif