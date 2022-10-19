/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:42:05 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 13:46:23 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
	std::cout << GREEN << "C Constructor called" << RESET << std::endl;
}

C::~C(void)
{
	std::cout << RED << "C Destructor called" << RESET << std::endl;
}
