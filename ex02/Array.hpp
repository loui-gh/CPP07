/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:21 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/07 12:39:23 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <cstdlib>
#include <iostream>

template <typename T>
class Array {

	public:

		Array();
		Array(unsigned int size);
		Array( Array const & obj);
		Array & operator=(Array<T> const & obj);
		~Array();

		T& operator[](int index);
		unsigned int	getSize();


	private:

		int	_size;
		T*	_data;
	
	
};

template <typename T>
Array<T>::Array() {

	this->_size = 0;
	this->_data = NULL;
	return;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size), _data(new T[_size]) {

	
	return;
}

/*Copy constructor*/
template <typename T>
Array<T>::Array(Array<T> const & obj)
{
	this->_data = NULL;
	*this = obj;
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & obj)
{
	if (this == &obj)
		return (*this);
	if (this->_data != NULL)
		delete [] this->_data;//because operator= makes two copies: one of the current instance, and one of the obj.
	this->_size = obj._size;
	this->_data = new T[this->_size];
	for (int i = 0; i < _size; i++){
		this->_data[i] = obj._data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {

	if (this->_data != NULL)
		delete[] this->_data;
	return;
}

template <typename T>
unsigned int	Array<T>::getSize() {

	return (this->_size);
}

/*special template function to access individual element*/
template <typename T>
T & Array<T>::operator[](int i)
{
	if (i >= this->_size)
		throw std::out_of_range("Array::Index out of bounds!");
	return (this->_data[i]);
}
#endif