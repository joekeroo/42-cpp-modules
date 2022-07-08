/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:51:49 by jhii              #+#    #+#             */
/*   Updated: 2022/07/08 13:37:43 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	PhoneBook::edit_status(int i)
{
	contact[i].status = 1;
}

void	PhoneBook::add_contact(std::string str, int i, int type)
{
	if (type == 1)
		contact[i].first_name = str;
	else if (type == 2)
		contact[i].last_name = str;
	else if (type == 3)
		contact[i].nick_name = str;
	else if (type == 4)
		contact[i].phone_number = str;
	else if (type == 5)
		contact[i].darkest_secret = str;
}

void	PhoneBook::display_entry(int i)
{
	if (contact[i].status == 1)
	{
		std::cout << "First Name: " << contact[i].first_name << std::endl;
		std::cout << "Last Name: " << contact[i].last_name << std::endl;
		std::cout << "Nickname: " << contact[i].nick_name << std::endl;
		std::cout << "Phone Number: " << contact[i].phone_number << std::endl;
		std::cout << "Darkest Secret: " << contact[i].darkest_secret << std::endl;
	}
	else
	{
		std::cout << "Phonebook: SEARCH: ";
		std::cout << std::to_string(i);
		std::cout << ": index out of bounds";
		std::cout << std::endl;
	}
}

void	print_value(std::string str)
{
	int	len;

	len = str.length();
	if (len < 10)
	{
		for (int i = 0; i < 10 - len; ++i)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; ++i)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	PhoneBook::display_contacts(void)
{
	std::cout << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		std::cout << "|         " << std::to_string(i);
		std::cout << "|";
		print_value(contact[i].first_name);
		std::cout << "|";
		print_value(contact[i].last_name);
		std::cout << "|";
		print_value(contact[i].nick_name);
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}
