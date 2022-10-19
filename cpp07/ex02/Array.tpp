/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:14:15 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 18:27:27 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <class T> Array<T>::Array(Array const &ref)
{
	std::cout << GREEN << "Array copy constructor called" << RESET << std::endl;
	*this = ref;
}

template <class T> Array<T>::Array(unsigned int n): _size(n)
{
	std::cout << GREEN << "Array constructor called" << RESET << std::endl;
	this->_arr = new T[n];
}

template <class T> Array<T>::Array(void): _arr(NULL), _size(0)
{
	std::cout << GREEN << "Array constructor called" << RESET << std::endl;
}

template <class T> Array<T>::~Array(void)
{
	std::cout << RED << "Array destructor called" << RESET << std::endl;
	if (this->_size)
		delete (this->_arr);
}

template <class T> const char	*Array<T>::OutOfBoundsException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade higher than 1" RESET);
}

template <class T> Array<T> &Array<T>::operator=(Array const & ref)
{
	std::cout << GREEN << "Array copy assignment operator called" << RESET << std::endl;
	this->_size = ref._size;
	if (this->_size == 0)
		this->_arr = NULL;
	else
	{
		this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i)
			this->_arr[i] = ref._arr[i];
	}
	return (*this);
}

template <class T> T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw(OutOfBoundsException());
	return (this->_arr[i]);
}

template <class T> unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

#endif
