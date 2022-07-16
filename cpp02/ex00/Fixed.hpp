/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:23 by jhii              #+#    #+#             */
/*   Updated: 2022/07/14 14:52:28 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// private attributes must start with an underscore (_)
class	Fixed
{
	private:
		int					_fixed;
		static const int	_fraction = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &);
		~Fixed(void);
		Fixed	&operator=(Fixed const &);
		int		getRawBits(void) const;
		void	setRawBits(const int);
};

#endif
