/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:05:50 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 09:59:07 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string level):_type(level){}
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

void    Harl::complain(){
    std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4; i++){
        if (!_type.compare(_level[i])){
            break ;
        }
    }
    for (int j = i; j < 4; j++){
        switch (j){
            case 0: debug(); break;
            case 1: info(); break;
            case 2: warning(); break;
            case 3: error(); break;
        } 
    }
    if (i > 3){
    	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;}
}
