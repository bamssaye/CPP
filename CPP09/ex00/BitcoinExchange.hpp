#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <exception>

class BitcoinExchange{
   
    std::vector<std::map<std::string, float> >  _Datafile;
    std::vector<std::map<std::string, float> >  _Inputfile;
    std::map<std::string, float>                _map;
    std::ifstream                               _openDatafile;
    std::ifstream                               _openInputfile;
    bool                                        _filetype;

    std::vector<std::map<std::string, float> >  _fillMap(std::ifstream& file, std::string format, std::string del);
    float                                       _checkValue(std::string value);
    std::ifstream                               _openFile(std::string filename);
    std::string                                 _checkDate(std::string date);
public:
    BitcoinExchange(std::string& input);
    ~BitcoinExchange();

    void    getData();
};
