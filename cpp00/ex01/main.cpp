/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:36:08 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 17:09:38 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main()
{
	int			i;
	std::string	input;
	PhoneBook	phonebook;

	i = 0;
	while (1)
	{
		std::cout << CYAN ">" BLUE;
		std::getline(std::cin, input);
		std::cout << RESET;
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			addContacts(phonebook, i++);
		else if (input.compare("SEARCH") == 0)
			searchContacts(phonebook);
		std::cin.clear();
	}
	return (0);
}
