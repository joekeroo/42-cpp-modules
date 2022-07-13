/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printError.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:38:24 by jhii              #+#    #+#             */
/*   Updated: 2022/07/12 14:40:45 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

void	printError(char *str, int type)
{
	if (type == 1)
		std::cout << "Error: Invalid Arguments: [fd] [s1] [s2]" << std::endl;
	else if (type == 2)
		std::cout << "Error: Unable to read "<< str << std::endl;
}
