/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:40 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:41:12 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class	AForm;
class	Bureaucrat;

// private attributes must start with an underscore (_)
class	ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;

		class	FormNotSignedException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	ExecGradeTooLowException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		ShrubberyCreationForm(std::string const &);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &);

		void	execute(Bureaucrat const &) const;
};

#endif
