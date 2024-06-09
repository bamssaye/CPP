/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 01:54:58 by bamssaye          #+#    #+#             */
/*   Updated: 2024/06/07 23:36:23 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//using namespace std;
char ft_uppercase(int c)
{
    if (c >= 97 && c <= 122)
        return (c  - 32);
    else
        return (c);
}
int main(int ac, char **av)
{
    if (ac == 1)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *",0);
    else
    {
       for (int j = 1; av[j] ; j++)
       {
            for(int i = 0; av[j][i]; i++)
            {
                std::cout << ft_uppercase(av[j][i]);
            }
        }
    }
    std::cout << "\n";   
}