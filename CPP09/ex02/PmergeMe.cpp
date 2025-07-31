#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char ** av){
    this->_validInput(av);
    this->_fillstack(av);
}
PmergeMe::~PmergeMe(){}

std::list<int> PmergeMe::getList() const{ return this->_listnum;}
std::deque<int> PmergeMe::getDeque() const{ return this->_dequenum;}
int PmergeMe::getSize() const{ return this->_size;}


void PmergeMe::_fillstack(char ** av){
    int num;
    std::string n;
    av++;
    for(int i = 0; av[i] ; i++){
        n = av[i];
        num = std::stoi(n);
        this->_listnum.push_back(num);
        this->_dequenum.push_back(num);
        this->_dequenumvec.push_back(num);
        this->_input += std::to_string(num) + " ";
    }
    this->_size = this->_listnum.size();
}

void PmergeMe::Printer(){
    std::cout   << "Before: " << this->_input  << std::endl;
    std::cout   << "After: " << PrintContiner(this->_listnum) <<  std::endl;
    std::cout   << "Time to process a range of " << this->_size 
                << " elements with std::list : " << this->_timelist << " ms"  << "\n" << "vect : "<< _timelists <<" ms" << std::endl;
    std::cout   << "Time to process a range of " << this->_size 
                << " elements with std::deque : " << this->_timedeque << " ms"<< std::endl;
}

void PmergeMe::SortStacks(){
    clock_t s, e;

    s = clock();
    FordJohnsonAlgo_deque(this->_dequenum);
    e = clock();
    this->_timedeque = (static_cast<double>(e - s) * 1000.0) / CLOCKS_PER_SEC;
    s = clock();
    FordJohnsonAlgo_list(this->_listnum);
    e = clock();
    this->_timelist = (static_cast<double>(e - s) * 1000.0) / CLOCKS_PER_SEC;
    s = clock();
    FordJohnsonAlgo_de(this->_dequenumvec);
    e = clock();
    this->_timelists = (static_cast<double>(e - s) * 1000.0) / CLOCKS_PER_SEC;
}

void PmergeMe::SortedList(std::list<int>& lst, int value) {
    std::list<int>::iterator it = lst.begin();
    while (it != lst.end() && *it < value)
        ++it;
    lst.insert(it, value);
}

void PmergeMe::SortedDeque(std::deque<int>& deq, int value) {
    std::deque<int>::iterator it = std::lower_bound(deq.begin(), deq.end(), value);
    deq.insert(it, value);
}
void PmergeMe::SortedDequev(std::vector<int>& deq, int value) {
    std::vector<int>::iterator it = std::lower_bound(deq.begin(), deq.end(), value);
    deq.insert(it, value);
}

template<typename T>
std::string PmergeMe::PrintContiner(T& type){
    std::string output;
    typename T::iterator it = type.begin();
    while (it != type.end()){
        output += std::to_string(*it) + " ";
        it++;
    }
    return output;
}

void PmergeMe::FordJohnsonAlgo_list(std::list<int>& numbers){
    if (numbers.size() < 2)
        return;

    std::list<std::pair<int, int> > pa;
    int first, second;
    bool odd = (numbers.size() & 1) != 0;
    
    std::list<int>::iterator it = numbers.begin();
    while (it != numbers.end()) {
        first = *it++;
        if (it != numbers.end()) {
            second = *it++;
            if (first < second)
                pa.push_back(std::make_pair(second, first));
            else
                pa.push_back(std::make_pair(first, second));
        } else if (odd){
            pa.push_back(std::make_pair(first, -1));
        }
    }
    std::list<int> mainchain;
    for(std::list<std::pair<int, int> >::iterator it = pa.begin(); it != pa.end() ; it++){
        SortedList(mainchain, it->first);
    }
    for (std::list<std::pair<int, int> >::iterator it = pa.begin(); it != pa.end() ; it++) {
        if (it->second != -1)
            SortedList(mainchain, it->second);
    }
    numbers = mainchain;
}

void PmergeMe::FordJohnsonAlgo_deque(std::deque<int>& numbers){
    if (numbers.size() < 2)
        return;

    std::deque<std::pair<int, int> > pa;
    int first, second;
    bool odd = (numbers.size() & 1) != 0;
    
    std::deque<int>::iterator it = numbers.begin();
    while (it != numbers.end()) {
        first = *it++;
        if (it != numbers.end()) {
            second = *it++;
            if (first < second)
                pa.push_back(std::make_pair(second, first));
            else
                pa.push_back(std::make_pair(first, second));
        } else if (odd){
            pa.push_back(std::make_pair(first, -1));
        }
    }
    std::deque<int> mainchain;
    for(std::deque<std::pair<int, int> >::iterator it = pa.begin(); it != pa.end() ; it++){
        SortedDeque(mainchain, it->first);
    }
    for (std::deque<std::pair<int, int> >::iterator it = pa.begin(); it != pa.end() ; it++) {
        if (it->second != -1)
            SortedDeque(mainchain, it->second);
    }
    numbers = mainchain;
}
void PmergeMe::FordJohnsonAlgo_de(std::vector<int>& numbers){
    if (numbers.size() < 2)
        return;

    std::vector<std::pair<int, int> > pa;
    int first, second;
    bool odd = (numbers.size() & 1) != 0;
    
    std::vector<int>::iterator it = numbers.begin();
    while (it != numbers.end()) {
        first = *it++;
        if (it != numbers.end()) {
            second = *it++;
            if (first < second)
                pa.push_back(std::make_pair(second, first));
            else
                pa.push_back(std::make_pair(first, second));
        } else if (odd){
            pa.push_back(std::make_pair(first, -1));
        }
    }
    std::vector<int> mainchain;
    for(std::vector<std::pair<int, int> >::iterator it = pa.begin(); it != pa.end() ; it++){
        SortedDequev(mainchain, it->first);
    }
    for (std::vector<std::pair<int, int> >::iterator it = pa.begin(); it != pa.end() ; it++) {
        if (it->second != -1)
            SortedDequev(mainchain, it->second);
    }
    numbers = mainchain;
}

void PmergeMe::_validInput(char ** av){
    std::string n;
    int num;
    size_t s;
    std::list<int> list;

    for(int i = 0; av[i] ; i++){
        n = av[i];
        if (!std::all_of(n.begin(), n.end(), ::isdigit))
            throw std::runtime_error("Error.oko");
        num = std::stoi(n);
        if (num < 0)
            throw std::runtime_error("Error.");
        list.push_back(num);
    }
    s = list.size();
    list.sort();
    list.unique();
    if (s != list.size())
        throw std::runtime_error("Error.");
}