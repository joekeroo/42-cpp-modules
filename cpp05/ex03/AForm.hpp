/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:39:00 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:41:24 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

// private attributes must start with an underscore (_)
class	AForm
{
	private:
		std::string	const	_name;
		bool				_signed;
		int	const			_signGrade;
		int	const			_execGrade;

		class	GradeTooHighException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	GradeTooLowException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	SignGradeTooLowException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		AForm(std::string const &, int const, int const);
		AForm(AForm const &);
		virtual	~AForm(void);

		AForm	&operator=(AForm const &);

		void			setSigned(bool);
		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;

		void			beSigned(Bureaucrat &);
		virtual void	execute(Bureaucrat const &) const = 0;
};

std::ostream	&operator<<(std::ostream &, const AForm &);

#endif
