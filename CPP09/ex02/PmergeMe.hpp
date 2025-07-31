#pragma once

#include <iostream>
#include <algorithm>
#include <cctype>
#include <list>
#include <deque>
#include <vector>
#include <exception>
#include <ctime>



class PmergeMe{
    std::string     _input;
    std::list<int>  _listnum;
    std::deque<int> _dequenum;
    int             _size;
    double          _timelist;
    double          _timedeque;
    void            _validInput(char ** av);
    void            _fillstack(char ** av);

public :
    PmergeMe(char ** av);
    ~PmergeMe();

    std::list<int> getList() const;
    std::deque<int> getDeque() const;
    int getSize() const;

    void Printer();
    template<typename T> std::string PrintContiner(T& type);

    void FordJohnsonAlgo_list(std::list<int>& numbers);
    void FordJohnsonAlgo_deque(std::deque<int>& numbers);
    void SortedList(std::list<int>& lst, int value);
    void SortedDeque(std::deque<int>& deq, int value);

    void FordJohnsonAlgo_de(std::vector<int>& numbers);
    void SortedDequev(std::vector<int>& deq, int value);
    std::vector<int> _dequenumvec;
    int _timelists;

    void SortStacks();
};