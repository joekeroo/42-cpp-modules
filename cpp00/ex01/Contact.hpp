/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:20:21 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 17:24:12 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# include <string>
# include <iomanip>
# include <sstream>
# include <limits.h>
# include <iostream>

class	Contact
{
	private:
		int			_status;
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		void	setStatus(int);
		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickName(std::string);
		void	setPhoneNumber(std::string);
		void	setDarkestSecret(std::string);

		int			getStatus(void) const;
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
};

#endif
