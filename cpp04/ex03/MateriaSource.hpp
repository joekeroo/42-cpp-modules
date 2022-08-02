/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:08:52 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 21:57:05 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

// private attributes must start with an underscore (_)
class	MateriaSource: public	IMateriaSource
{
	private:
		int			_max;
		AMateria	*_materia[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &);
};

#endif
