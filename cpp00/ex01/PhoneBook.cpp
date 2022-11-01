/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:51:49 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 17:31:37 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) { std::cout << GREEN "PhoneBook Constructor Called" RESET << std::endl; }
PhoneBook::~PhoneBook(void) { std::cout << RED "PhoneBook Destructor Called" RESET << std::endl; }

void	PhoneBook::editStatus(int i)
{
	this->contact[i].setStatus(1);
}

void	PhoneBook::addContact(std::string str, int i, int type)
{
	if (type == 1)
		this->contact[i].setFirstName(str);
	else if (type == 2)
		this->contact[i].setLastName(str);
	else if (type == 3)
		this->contact[i].setNickName(str);
	else if (type == 4)
		this->contact[i].setPhoneNumber(str);
	else if (type == 5)
		this->contact[i].setDarkestSecret(str);
}

void	PhoneBook::displayEntry(int i)
{
	if (this->contact[i].getStatus() == 1)
	{
		std::cout << BLUE "First Name: " << this->contact[i].getFirstName() << RESET << std::endl;
		std::cout << BLUE "Last Name: " << this->contact[i].getLastName() << RESET << std::endl;
		std::cout << BLUE "Nickname: " << this->contact[i].getNickName() << RESET << std::endl;
		std::cout << BLUE "Phone Number: " << this->contact[i].getPhoneNumber() << RESET << std::endl;
		std::cout << BLUE "Darkest Secret: " << this->contact[i].getDarkestSecret() << RESET << std::endl;
	}
	else
	{
		std::cout << YELLOW "Phonebook: SEARCH: " RESET;
		std::cout << YELLOW << std::to_string(i) << RESET;
		std::cout << YELLOW ": index out of range" RESET;
		std::cout << std::endl;
	}
}

std::string	printline(std::string line)
{
	std::string	res;

	if (line.size() > 10)
	{
		res = line.std::string::substr(0, 9);
		res = res + '.';
	}
	else
		res = line;
	return (res);
}

void	PhoneBook::displayContacts(void)
{
	std::cout << std::endl << BLUE "|" RESET;
	std::cout << BLUE << std::setw(11) << "Index|" << RESET;
	std::cout << BLUE << std::setw(11) << "First Name|" << RESET;
	std::cout << BLUE << std::setw(11) << "Last Name|" << RESET;
	std::cout << BLUE << std::setw(11) << "Nick Name|" << RESET << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		std::cout << BLUE << "|" << std::setw(10) << i << RESET;
		std::cout << BLUE "|" RESET;
		std::cout << BLUE << std::setw(10) << printline(this->contact[i].getFirstName()) << RESET;
		std::cout << BLUE "|" RESET;
		std::cout << BLUE << std::setw(10) << printline(this->contact[i].getLastName()) << RESET;
		std::cout << BLUE "|" RESET;
		std::cout << BLUE << std::setw(10) << printline(this->contact[i].getNickName()) << RESET;
		std::cout << BLUE "|" RESET << std::endl;
	}
	std::cout << std::endl;
}
