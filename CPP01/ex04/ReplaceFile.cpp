/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 05:42:28 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/07 07:15:13 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"

ReplaceFile::ReplaceFile(std::string infile, std::string s1, std::string s2){
    _iFile = infile;
    _inFile.open(_iFile);
    _ouFile.open(_iFile.append(".replace"));
    _String1 = s1;
    _String2 = s2;
}
ReplaceFile::~ReplaceFile(){
    _inFile.close();
    _ouFile.close();
}

std::ifstream& ReplaceFile::getinFile(){
    return _inFile;
}

int ReplaceFile::checkFile(){
    std::ifstream inFile;
    inFile.open(_iFile);
    if (!inFile.is_open())
        return (1);
    inFile.close();
    return (0);
}

void ReplaceFile::replaceWord(std::string &string, std::string string1, std::string string2){
    size_t      s_pos, f_pos;
    std::string rezult;
    
    s_pos = f_pos = 0;
    f_pos = string.find(string1, s_pos);
    while(f_pos != std::string::npos){
        rezult.append(string, s_pos, f_pos - s_pos);
        rezult.append(string2);
        s_pos = f_pos + string1.length();
        f_pos = string.find(string1, s_pos);
    }
    rezult.append(string, s_pos);
    string = rezult;
   
}

void ReplaceFile::addLinetoFile(std::string &string){
    _ouFile << string << std::endl;
}