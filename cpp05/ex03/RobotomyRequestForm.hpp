/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:42 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:27:02 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class	Form;
class	Bureaucrat;

// private attributes must start with an underscore (_)
class	RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;

		class	FormNotSignedException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	ExecGradeTooLowException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		RobotomyRequestForm(std::string const &);
		RobotomyRequestForm(RobotomyRequestForm const &);
		~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &);

		void	execute(Bureaucrat const &) const;
};

#endif
