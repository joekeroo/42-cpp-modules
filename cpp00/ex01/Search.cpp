/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:37:43 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 17:01:10 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	searchContacts(PhoneBook &phonebook)
{
	int	input;

	input = 0;
	phonebook.displayContacts();
	std::cout << CYAN "SEARCH: " BLUE;
	while(!(std::cin >> input))
	{
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << YELLOW "Phonebook: SEARCH: invalid entry" RESET << std::endl;
		std::cout << CYAN "SEARCH: " BLUE;
    }
	phonebook.displayEntry(input);
}
