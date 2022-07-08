/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:34:30 by jhii              #+#    #+#             */
/*   Updated: 2022/07/06 15:32:03 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	// print argument in UPPERCASE if argument is specified
	// print default message if no argument has been specified
	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; j < (int)strlen(argv[i]); ++j)
				putchar(toupper(argv[i][j]));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	// print newline at end of result
	std::cout << std::endl;

    return 0;
}
