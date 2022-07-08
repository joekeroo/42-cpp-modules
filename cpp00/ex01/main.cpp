/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:36:08 by jhii              #+#    #+#             */
/*   Updated: 2022/07/08 16:29:35 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main()
{
	int	i;
	PhoneBook phonebook;
	std::string	input;

	i = 0;
	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			add_contacts(phonebook, i++);
		else if (input.compare("SEARCH") == 0)
			search_contacts(phonebook);
		std::cin.clear();
	}
	return (0);
}
