/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:41:40 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 13:45:42 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
	std::cout << GREEN << "A Constructor called" << RESET << std::endl;
}

A::~A(void)
{
	std::cout << RED << "A Destructor called" << RESET << std::endl;
}
