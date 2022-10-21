/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/10/21 19:47:31 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << YELLOW "Error: specify span size" RESET << std::endl;
		return (0);
	}

	Span	span(atoi(argv[1]));

	srand(time(0));
	span.fillSpanArr();
	std::cout << span << std::endl;

	span.shortestSpan();
	span.longestSpan();

	return (0);
}
