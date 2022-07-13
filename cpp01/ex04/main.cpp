/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:42:36 by jhii              #+#    #+#             */
/*   Updated: 2022/07/12 14:43:07 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		printError(argv[1], 1);
	else
	{
		std::ifstream	infile(argv[1]);
		if (infile.good())
			runSed(argv[1], argv[2], argv[3]);
		else
			printError(argv[1], 2);
	}
	return (0);
}
