/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:20:59 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 16:40:14 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contact[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	editStatus(int);
		void	displayEntry(int);
		void	displayContacts(void);
		void	addContact(std::string, int, int);
};

#endif
