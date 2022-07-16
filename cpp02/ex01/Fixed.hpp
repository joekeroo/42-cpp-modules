/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:23 by jhii              #+#    #+#             */
/*   Updated: 2022/07/15 13:58:12 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

// private attributes must start with an underscore (_)
class	Fixed
{
	private:
		int					_fixed;
		static const int	_fraction = 8;

	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const &);
		~Fixed(void);
		Fixed	&operator=(Fixed const &);
		int		getRawBits(void) const;
		void	setRawBits(const int);
		int		toInt(void) const;
		float	toFloat(void) const;
		friend std::ostream	&operator<<(std::ostream &, const Fixed &);
};

#endif
