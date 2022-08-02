/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:32:38 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 14:35:59 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(Brain const &ref) { *this = ref; }

Brain::Brain(void)
{
	std::cout << GREEN << "Brain" << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

Brain::~Brain(void)
{
	std::cout << RED << "Brain" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Brain	&Brain::operator=(Brain const &ref)
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}
