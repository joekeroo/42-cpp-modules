/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:08:13 by jhii              #+#    #+#             */
/*   Updated: 2022/10/25 13:46:32 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "MutantStack.hpp"

template <class T> MutantStack<T>::MutantStack(MutantStack const &ref): std::stack<T>(ref) {}
template <class T> MutantStack<T>::MutantStack(void): std::stack<T>() { std::cout << GREEN "MutantStack constructor called" RESET << std::endl; }
template <class T> MutantStack<T>::~MutantStack(void) { std::cout << RED "MutantStack destructor called" RESET << std::endl; }
template <class T> MutantStack<T> &MutantStack<T>::operator=(MutantStack const &ref)
{
	std::stack<T>::operator=(ref);
	return (*this);
}

#endif
