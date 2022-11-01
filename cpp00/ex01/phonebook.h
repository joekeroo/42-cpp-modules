/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:39:32 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 16:40:04 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "PhoneBook.hpp"

void	searchContacts(PhoneBook &phonebook);
void	addContacts(PhoneBook &phonebook, int i);

#endif
