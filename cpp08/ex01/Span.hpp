/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:06 by jhii              #+#    #+#             */
/*   Updated: 2022/10/21 19:47:49 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# include <vector>
# include <iostream>
# include <iterator>
# include <algorithm>

// private attributes must start with an underscore (_)
class	Span
{
	private:
		int		*_arr;
		size_t	_curr;
		size_t	_size;

		int		*sortArr(void);

		class	OutOfBoundsException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	SpanFullException: public std::exception
		{ virtual const char	*what(void) const throw(); };
		class	SpanErrorException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		Span(size_t);
		Span(Span const &);
		~Span(void);

		Span	&operator=(Span const &);
		int		&operator[](size_t);

		void	addNumber(int);
		void	fillSpanArr(void);
		void	longestSpan(void);
		void	shortestSpan(void);

		int		*getArr(void) const;
		size_t	getSize(void) const;
};

std::ostream	&operator<<(std::ostream &, Span &);

#endif
