/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executeConvert.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:07:13 by jhii              #+#    #+#             */
/*   Updated: 2022/09/30 15:41:42 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	executeConvert(char *argv)
{
	std::string	input(argv);
	Convert		conv(input);

	conv.convert();
	std::cout << conv;
}
