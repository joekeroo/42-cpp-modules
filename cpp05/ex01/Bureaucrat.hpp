/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:01:00 by jhii              #+#    #+#             */
/*   Updated: 2022/09/26 11:37:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# include <iostream>
# include "Form.hpp"

class	Form;

// private attributes must start with an underscore (_)
class	Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

		class	GradeTooHighException: public std::exception
		{ virtual const char	*what(void) const throw(); }; 
		class	GradeTooLowException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		Bureaucrat(std::string const &, int const);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &);
};

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);

#endif
