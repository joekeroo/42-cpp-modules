/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:20:59 by jhii              #+#    #+#             */
/*   Updated: 2022/07/07 17:02:26 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	public:
		Contact	contact[8];
		void	edit_status(int);
		void	display_entry(int);
		void	display_contacts(void);
		void	add_contact(std::string, int, int);
};
