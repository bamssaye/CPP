/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:47:21 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 09:03:04 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl ha;
    ha.complain("DEBUG");
    ha.complain("INFO");
    ha.complain("WARNING");
    ha.complain("ERROR");
    return 0;
}