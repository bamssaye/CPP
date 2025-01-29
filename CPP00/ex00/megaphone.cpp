/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 01:54:58 by bamssaye          #+#    #+#             */
/*   Updated: 2024/09/15 00:08:52 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl,1);
    else
    {
       for (int j = 1; av[j] ; j++)
       {
            for(int i = 0; av[j][i]; i++)
            {
                std::cout << (char)toupper(av[j][i]);
            }
        }
    }
    std::cout << std::endl;
    return (0);
}
