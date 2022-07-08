/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:36:52 by jhii              #+#    #+#             */
/*   Updated: 2022/07/07 17:37:43 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

static	void	print_prompt(int type)
{
	switch (type)
	{
		case 1:
			std::cout << "First Name: ";
			break ;
		case 2:
			std::cout << "Last Name: ";
			break ;
		case 3:
			std::cout << "Nickname: ";
			break ;
		case 4:
			std::cout << "Phone Number: ";
			break ;
		case 5:
			std::cout << "Darkest Secret: ";
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
			std::cout << "Phonebook: ADD: please input a value" << std::endl;
	}
	phonebook.add_contact(input, i, type);
}

void	add_contacts(PhoneBook &phonebook, int i)
{
	int	new_i;

	new_i = i % 8;
	for (int j = 1; j <= 5; ++j)
		add_value(phonebook, new_i, j);
	phonebook.edit_status(new_i);
}
