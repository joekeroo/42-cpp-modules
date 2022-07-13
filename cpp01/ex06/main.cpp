/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:52:23 by jhii              #+#    #+#             */
/*   Updated: 2022/07/13 14:24:54 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static	void	runHarl(char *argv)
{
	int			i = 0;
	Harl		harlBot;
	std::string	str(argv);
	std::string types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (str != types[i] && i < 4)
		i++;
	switch (i)
	{
		case 0:
			harlBot.complain("DEBUG");
		case 1:
			harlBot.complain("INFO");
		case 2:
			harlBot.complain("WARNING");
		case 3:
			harlBot.complain("ERROR");
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		runHarl(argv[1]);
	else
	{
		std::cout << "Error: spicify a Filter:";
		std::cout << " [DEBUG] [INFO] [WARNING] [ERROR]";
		std::cout << std::endl << std::endl;
	}
	return (0);
}
