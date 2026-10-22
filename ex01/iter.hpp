#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>


template <typename T> void increment(T& param)
{
    param++;
}

template <typename T> void print(const T& param)
{
    std::cout << param << " ";
}

template <typename T> void iter(T *array, const int length, void (*func)(T&))
{
    for(int i = 0; i < length; i++)
        func(array[i]);
}

template <typename T> void iter(const T *array,const int length, void (*func)(const T&))
{
    for(int i = 0; i < length; i++)
        func(array[i]);
}





#endif