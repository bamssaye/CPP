/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:21:50 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 07:21:51 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACE_FILE_HPP
#define __REPLACE_FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class ReplaceFile{
    std::ifstream _inFile;
    std::ofstream _ouFile;
    std::string _iFile, _String1, _String2;
public :
    ReplaceFile(std::string infile, std::string s1, std::string s2);
    ~ReplaceFile();
    std::ifstream& getinFile();
    int checkFile();
    void addLinetoFile(std::string &string);
    void replaceWord(std::string &string, std::string string1, std::string string2);
    
};
#endif