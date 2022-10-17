/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executeConvert.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:07:13 by jhii              #+#    #+#             */
/*   Updated: 2022/10/17 19:41:02 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	executeConvert(char *argv)
{
	Convert		conv1(argv);

	conv1.convert();
	std::cout << conv1;
}
