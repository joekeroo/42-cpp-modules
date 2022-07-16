/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:23 by jhii              #+#    #+#             */
/*   Updated: 2022/07/16 16:13:06 by jhii             ###   ########.fr       */
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

		Fixed			&operator=(Fixed const &);
		Fixed			operator++(int);
		Fixed			operator++(void);
		Fixed			operator--(int);
		Fixed			operator--(void);
		Fixed			operator+(const Fixed &);
		Fixed			operator-(const Fixed &);
		Fixed			operator*(const Fixed &);
		Fixed			operator/(const Fixed &);
		bool			operator>(const Fixed &);
		bool			operator<(const Fixed &);
		bool			operator>=(const Fixed &);
		bool			operator<=(const Fixed &);
		bool			operator==(const Fixed &);
		bool			operator!=(const Fixed &);

		int				toInt(void) const;
		float			toFloat(void) const;

		int				getRawBits(void) const;
		void			setRawBits(const int);

		static Fixed	&min(Fixed &, Fixed &);
		static Fixed	&max(Fixed &, Fixed &);
		static Fixed	&min(const Fixed &, const Fixed &);
		static Fixed	&max(const Fixed &, const Fixed &);

		friend std::ostream	&operator<<(std::ostream &, const Fixed &);
};

#endif
