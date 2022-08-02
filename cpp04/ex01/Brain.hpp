/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:36:11 by jhii              #+#    #+#             */
/*   Updated: 2022/08/01 14:49:42 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Common.hpp"

// private attributes must start with an underscore (_)
class	Brain
{
	protected:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(Brain const &);
		virtual ~Brain(void);

		Brain	&operator=(Brain const &);
};

#endif
