/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:06 by jhii              #+#    #+#             */
/*   Updated: 2022/10/25 15:04:31 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# include <fstream>
# include <iostream>

template <class T> class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &);
		~MutantStack(void);

		MutantStack &operator=(MutantStack const &);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_reverse_iterator;

		iterator				begin(void) { return (this->c.begin()); };
		iterator				end(void) { return (this->c.end()); };
		const_iterator			begin(void) const { return (this->c.cbegin()); };
		const_iterator			end(void) const { return (this->c.cend()); };
		reverse_iterator		rend(void) { return (this->c.rend()); };
		reverse_iterator		rbegin(void) { return (this->c.rbegin()); };
		const_reverse_iterator	rbegin(void) const { return (this->c.rbegin()); };
		const_reverse_iterator	rend(void) const { return (this->c.rend()); };
};

#endif
