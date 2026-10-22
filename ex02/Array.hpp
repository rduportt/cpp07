#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>


template <typename T> class Array
{
    private :
        T* _elements;
        unsigned int _size;
    public :
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();
        T &operator[](unsigned int i);
        T operator[](unsigned int i) const;
        void fillArray(Array<T> &other, T *fill,unsigned int size);
        class outOfBounds : public std::exception
        {
            virtual const char *what() const throw()
            {
                return "index is out of bounds";
            }
        };  
        unsigned int size() const;
};

#include "Array.tpp"
#endif