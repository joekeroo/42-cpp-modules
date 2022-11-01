/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:36:52 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 17:01:18 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

static	void	print_prompt(int type)
{
	switch (type)
	{
		case 1:
			std::cout << CYAN "First Name: " BLUE;
			break ;
		case 2:
			std::cout << CYAN "Last Name: " BLUE;
			break ;
		case 3:
			std::cout << CYAN "Nickname: " BLUE;
			break ;
		case 4:
			std::cout << CYAN "Phone Number: " BLUE;
			break ;
		case 5:
			std::cout << CYAN "Darkest Secret: " BLUE;
			break ;
	}
}

static	void	add_value(PhoneBook &phonebook, int i, int type)
{
	std::string	input;

	while (input.empty())
	{
		print_prompt(type);
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << YELLOW "Phonebook: ADD: please input a value" RESET << std::endl;
	}
	phonebook.addContact(input, i, type);
}

void	addContacts(PhoneBook &phonebook, int i)
{
	int	new_i;

	new_i = i % 8;
	for (int j = 1; j <= 5; ++j)
		add_value(phonebook, new_i, j);
	phonebook.editStatus(new_i);
}
