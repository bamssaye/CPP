#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string& input):_filetype(false){
    try{
        this->_openInputfile = _openFile(input);
        this->_openDatafile = _openFile("data.csv");
        this->_Inputfile = _fillMap(this->_openInputfile, "date | value", " | ");
        this->_filetype = true;
        this->_Datafile = _fillMap(this->_openDatafile, "date,exchange_rate", ",");
    }catch(const std::exception & e){
        std::cout << e.what() << std::endl;
    }
}

BitcoinExchange::~BitcoinExchange(){
    if (this->_openDatafile.is_open())
        this->_openDatafile.close();
    if (this->_openInputfile.is_open())
        this->_openInputfile.close();
}

float BitcoinExchange::_checkValue(std::string value){
    float v = std::stof(value);
    if (this->_filetype)
        return v;
    if (v > 1000.0)
        throw std::runtime_error("too large a number.");
    if (v < 0.0)
        throw std::runtime_error("not a positive number.");
    return v;
}

std::string BitcoinExchange::_checkDate(std::string date){
    std::string da[3];
    size_t s = 0,e = date.find("-");
    int i = 0;

    while(e != std::string::npos && i < 2){
        da[i++] = date.substr(s, e - s);
        s = e + 1;
        e = date.find("-", s);
    }
    da[i] = date.substr(s, e - s);
    if (da[0].length() != 4 || da[1].length() != 2 || da[2].length() != 2)
        throw std::runtime_error("Year-Month-Day");
    else if (std::stoi(da[0]) < 1997 || std::stoi(da[0]) > 2025)
        throw std::runtime_error("Year-Month-Day");
    else if (std::stoi(da[1]) < 1 || std::stoi(da[1]) > 12)
        throw std::runtime_error("Year-Month-Day");
    else if (std::stoi(da[2]) < 1 || std::stoi(da[2]) > 31)
        throw std::runtime_error("Year-Month-Day");
    return date;
}

std::ifstream BitcoinExchange::_openFile(std::string filename){
    std::ifstream file;
    file.open(filename);
    if (!file.is_open())
        throw std::runtime_error("Error, could not open file : " + filename);
    return file;
}

std::vector<std::map<std::string, float> > BitcoinExchange::_fillMap(std::ifstream& file, std::string format, std::string del){
    std::map<std::string, float> map;
    std::vector<std::map<std::string, float> > _dataa;
    std::string line, date;
    float value;
    size_t e;

    std::getline(file,line);
    if (line != format)
        throw std::runtime_error("format not found in the first line double check your file : "+format);
    while (std::getline(file,line)){
        if (line.empty())
            continue;
        try{
        if((e = line.find(del)) != std::string::npos){
            try {
                date = _checkDate(line.substr(0,e));
                value = _checkValue(line.substr(e + del.length()));
                map[date] = value;
                _dataa.push_back(map);
                map.clear();
            }catch(const std::runtime_error& e){
                map[e.what()] = 0.0;
                _dataa.push_back(map);
                map.clear();
            }
        }
        else
            throw std::runtime_error("bad input => " + line);
        }catch(const std::runtime_error & e){
            map[e.what()] = 0.0;
            _dataa.push_back(map);
            map.clear();
        }
    }
    return _dataa;
}
//2011-01-03 => 3 = 0.9
void BitcoinExchange::getData() {
    std::string date;
    float value, va;
    bool ma;

    for (size_t i = 0; i < _Inputfile.size(); i++) {
        std::map<std::string, float>::const_iterator it = _Inputfile[i].begin();
            date = it->first;
            value = it->second;
            try { _checkDate(date); } catch (const std::exception& e) { 
                std::cout << "Error: " << date << std::endl;
                continue; 
            }
            ma = false;
            for (size_t j = 0; j < _Datafile.size(); j++) {
                std::map<std::string, float>::const_iterator dt = _Datafile[j].begin();
                if (dt != _Datafile[j].end() && dt->first == date) {
                    va = dt->second;
                    ma = true;
                    break;
                } else if (dt != _Datafile[j].end() && dt->first < date){
                    va = dt->second;
                    ma = true;
                }
            }
            if (!ma)
                std::cout << date << " => not found!" << std::endl;
            else{
                va *= value;
                std::cout << date << " => " << it->second << " = " << va << std::endl;}
    }
}


