// #include "Array.hpp"

/*
Array();
    Array(unsigned int n);
    Array(const Array& obj);
    T& operator=(const Array& obj);
    T& operator[](const Array& obj);
    ~Array();

    size_t size();
*/
template <typename T> Array<T>::Array():_data(NULL), _n(0){}
template <typename T> Array<T>::Array(unsigned int n):_data(NULL), _n(n){
    if(this->_n  > 0)
       this->_data = new T[this->_n]();
}
template <typename T> Array<T>::Array(const Array& obj):_data(NULL), _n(obj._n){
    if(this->_n  > 0){
       this->_data = new T[this->_n]();
        for (unsigned int i = 0; i < this->_n ; i++){
            this->_data[i] = obj._data[i];
        }
    }
}
template <typename T> Array<T>::~Array(){
    delete[] this->_data;
}


template <typename T> Array<T>& Array<T>::operator=(const Array& obj){
    if(this == &obj)
        return *this;
    delete[] _data;
    this->_n = obj._n;
    this->_data = NULL;
    if(this->_n  > 0){
        this->_data = new T[this->_n]();
        for (unsigned int i = 0; i < this->_n ; i++){
            this->_data[i] = obj._data[i];
        }
    }
    return *this;
}
template <typename T> T& Array<T>::operator[](unsigned int index){
    if (this->_n <= index)
        throw std::out_of_range("Index out of range !");
    return this->_data[index];
}


template <typename T> size_t Array<T>::size(){
    return this->_n;
}
