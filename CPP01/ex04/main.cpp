/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 06:00:03 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 07:16:57 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"

int main(int ac, char **av){
        
    if (ac != 4)
        return (std::cout << "<./Replace_world> <filename> <string1> <string2>", 1);
    std::string     line;
    ReplaceFile     rf(av[1], av[2], av[3]);
    if (rf.checkFile())
        return (std::cout << "File not found" << std::endl, 1);
    while(std::getline(rf.getinFile(), line)){
        rf.replaceWord(line, av[2], av[3]);
        rf.addLinetoFile(line);
    }
    return 0;
}