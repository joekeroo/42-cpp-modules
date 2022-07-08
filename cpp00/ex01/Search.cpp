/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SEARCH.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:37:43 by jhii              #+#    #+#             */
/*   Updated: 2022/07/07 18:23:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	search_contacts(PhoneBook &phonebook)
{
	int	input;

	input = 0;
	phonebook.display_contacts();
	std::cout << "SEARCH: ";
	while(!(std::cin >> input))
	{
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Phonebook: SEARCH: invalid entry" << std::endl;
		std::cout << "SEARCH: ";
    }
	phonebook.display_entry(input);
}
