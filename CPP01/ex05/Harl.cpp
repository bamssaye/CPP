/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:05:50 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 09:02:29 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){
    std::cout << DEBUG_STR << std::endl;
}
void Harl::info( void ){
    std::cout << INFO_STR<< std::endl;
}
void Harl::warning( void ){
    std::cout << WARNING_STR << std::endl;
}
void Harl::error( void ){
    std::cout << ERROR_STR << std::endl;
}

void    Harl::complain( std::string level ){
    void (Harl::*ptrstr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++){
        if (!level.compare(_level[i])){
            (this->*ptrstr[i])();
            return ;}
    }
    std::cout << "{DEBUG, INFO, WARNING, ERROR}" << std::endl;
}