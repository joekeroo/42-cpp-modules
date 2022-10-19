/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:41:58 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 13:46:09 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{
	std::cout << GREEN << "B Constructor called" << RESET << std::endl;
}

B::~B(void)
{
	std::cout << RED << "B Destructor called" << RESET << std::endl;
}
