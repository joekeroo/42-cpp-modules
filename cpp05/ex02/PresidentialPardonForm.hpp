/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:45 by jhii              #+#    #+#             */
/*   Updated: 2022/09/26 18:19:41 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class	Form;
class	Bureaucrat;

// private attributes must start with an underscore (_)
class	PresidentialPardonForm: public Form
{
	private:
		std::string	_target;

		class	FormNotSignedException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	ExecGradeTooLowException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		PresidentialPardonForm(std::string const &);
		PresidentialPardonForm(PresidentialPardonForm const &);
		~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &);

		void	execute(Bureaucrat const &) const;
};

#endif
