/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:01:00 by jhii              #+#    #+#             */
/*   Updated: 2022/10/17 19:52:26 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include "Utils.hpp"

// private attributes must start with an underscore (_)
class	Convert
{
	private:
		char		*_input;
		int			_intRes;
		char		_charRes;
		float		_floatRes;
		double		_doubleRes;
		bool		_intStat;
		bool		_charStat;
		bool		_floatStat;
		bool		_doubleStat;
		bool		_charDisplay;
		bool		_floatDisplay;
		bool		_doubleDisplay;

		void		toInt(void);
		void		toChar(void);
		void		toFloat(void);
		void		toDouble(void);

	public:
		Convert(char *);
		Convert(Convert const &);
		~Convert(void);

		Convert	&operator=(Convert const &);

		int			getIntRes(void) const;
		char		getCharRes(void) const;
		float		getFloatRes(void) const;
		double		getDoubleRes(void) const;
		bool		getIntStat(void) const;
		bool		getCharStat(void) const;
		bool		getFloatStat(void) const;
		bool		getDoubleStat(void) const;
		bool		getCharDisplay(void) const;
		bool		getFloatDisplay(void) const;
		bool		getDoubleDisplay(void) const;

		void		convert(void);
		bool		checkInput(void);
};

std::ostream	&operator<<(std::ostream &, const Convert &);

#endif
