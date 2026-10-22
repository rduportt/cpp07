#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    _elements = NULL;
    _size = 0;
    std::cout << "created an array of 0 elements" << std::endl;
}

template <typename T> Array<T>::Array(unsigned       n)
{
    _elements = new T[n]();
    _size = n;
    std::cout << "created an array of " << n << " elements" << std::endl;
}

template <typename T> Array<T>::Array(const Array &other)
{
    if (other._size != 0)
    {
        _elements = new T[other._size]();
        for(unsigned int i = 0; i< other._size; i++)
            _elements[i] = other._elements[i];
    }
    else
        _elements = NULL;
    _size = other._size;
    std::cout << "copy constructor called" << std::endl;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
    std::cout << "Operator constructor called" << std::endl;
    if (this != &other)
    {
        T *tmp = NULL;
        if (other._size != 0)
        {
            tmp = new T[other._size]();
            for (unsigned int i = 0; i < other._size; i++)
                tmp[i] = other._elements[i];
        }
        delete[] _elements;
        _elements = tmp;
        _size = other._size;
    }
    return *this;
}

template <typename T> unsigned int Array<T>::size() const
{
    return _size;
}

template <typename T> Array<T>::~Array()
{
    delete[] _elements;
    //std::cout << "destructor called" << std::endl;
}

template <typename T> T& Array<T>::operator[](unsigned int i)
{
    if(i >= _size)
        throw outOfBounds();
    return(_elements[i]);
}

template <typename T> T Array<T>::operator[](unsigned int i) const
{
    if(i >= _size)
        throw outOfBounds();
    return(_elements[i]);
}

template <typename T> void Array<T>::fillArray(Array<T> &other, T *fill,unsigned int size)
{
    for(unsigned int i = 0; i < size; i++)
    {
        if(i >= other._size)
            throw outOfBounds();
        other._elements[i] = fill[i];
    }
}