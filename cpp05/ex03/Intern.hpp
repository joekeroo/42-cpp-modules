/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:56:16 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:22:54 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	AForm;

// private attributes must start with an underscore (_)
class	Intern
{
	private:
		class	InvalidFormNameException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		Intern(void);
		Intern(Intern const &);
		~Intern(void);

		Intern	&operator=(Intern const &);

		AForm	*makeForm(std::string, std::string);
		AForm	*makeShrubberyForm(std::string);
		AForm	*makeRobotomyForm(std::string);
		AForm	*makePresidentialForm(std::string);
};

#endif
