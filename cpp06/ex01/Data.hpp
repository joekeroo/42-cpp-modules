/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:01:00 by jhii              #+#    #+#             */
/*   Updated: 2022/10/18 15:01:09 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include "Utils.hpp"

// private attributes must start with an underscore (_)
class	Data
{
	private:
		int		_int;
		char	_char;
		float	_float;
		double	_double;

	public:
		Data(void);
		Data(Data const &);
		~Data(void);

		Data	&operator=(Data const &);

		int			getInt(void) const;
		char		getChar(void) const;
		float		getFloat(void) const;
		double		getDouble(void) const;
};

std::ostream	&operator<<(std::ostream &, const Data &);

#endif
