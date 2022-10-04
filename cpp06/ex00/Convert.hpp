/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:01:00 by jhii              #+#    #+#             */
/*   Updated: 2022/09/30 15:32:22 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include "Utils.hpp"

// private attributes must start with an underscore (_)
class	Convert
{
	private:
		std::string	_input;
		int			_intRes;
		char		_charRes;
		float		_floatRes;
		double		_doubleRes;

		void		toInt(void);
		void		toChar(void);
		void		toFloat(void);
		void		toDouble(void);

	public:
		Convert(std::string);
		Convert(Convert const &);
		~Convert(void);

		Convert	&operator=(Convert const &);

		int			getIntRes(void) const;
		char		getCharRes(void) const;
		float		getFloatRes(void) const;
		double		getDoubleRes(void) const;

		void		convert(void);
};

std::ostream	&operator<<(std::ostream &, const Convert &);

#endif
