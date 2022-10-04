/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/09/30 15:37:07 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		printError(int argc)
{
	if (argc < 2)
		std::cout << YELLOW << "convert: no input was given" << RESET << std::endl;
	else
		std::cout << YELLOW << "convert: Too many input was given" << RESET << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (printError(argc));
	executeConvert(argv[1]);
	return (0);
}
