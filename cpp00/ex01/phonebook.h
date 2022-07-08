/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:39:32 by jhii              #+#    #+#             */
/*   Updated: 2022/07/07 17:27:22 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <limits.h>
# include "PhoneBook.hpp"

void	add_contacts(PhoneBook &phonebook, int i);
void	search_contacts(PhoneBook &phonebook);

#endif
