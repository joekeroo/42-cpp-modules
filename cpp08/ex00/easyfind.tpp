/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:08:13 by jhii              #+#    #+#             */
/*   Updated: 2022/10/20 13:33:53 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "easyfind.hpp"

template <class T> Array<T>::Array(void): _arr(NULL), _size(0) {}
template <class T> Array<T>::Array(Array const &ref) { *this = ref; }
template <class T> size_t Array<T>::getSize(void) const { return (this->_size); }

template <class T> Array<T>::Array(size_t n): _size(n)
{
	this->_arr = new T[n];
	for (unsigned int i = 0; i < n; ++i)
		this->_arr[i] = 0;
}

template <class T> Array<T>::~Array(void)
{
	if (this->_size)
		delete (this->_arr);
}

template <class T> const char *Array<T>::OutOfBoundsException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade higher than 1" RESET);
}

template <class T> Array<T> &Array<T>::operator=(Array const & ref)
{
	this->_size = ref._size;
	if (!this->_size)
		this->_arr = NULL;
	else
	{
		this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i)
			this->_arr[i] = ref._arr[i];
	}
	return (*this);
}

template <class T> T &Array<T>::operator[](size_t i)
{
	if (i >= this->_size || i < 0)
		throw(OutOfBoundsException());
	return (this->_arr[i]);
}

#endif
