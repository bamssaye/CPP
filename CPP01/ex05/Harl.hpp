/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:22:01 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 08:58:49 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP
#define __HARL_HPP

#include <iostream>

class Harl{

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    void    complain( std::string level );
};


#define DEBUG_STR "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
#define INFO_STR "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_STR "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR_STR "[ERROR]\nThis is unacceptable! I want to speak to the manager now."
#endif