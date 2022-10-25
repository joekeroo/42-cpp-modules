/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/10/25 15:05:01 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int	main(void)
{
	// custom test cases

	// MutantStack<int>			integer_stack;
	// MutantStack<std::string>	string_stack;
	// std::cout << std::endl;

	// integer_stack.push(2);
	// integer_stack.push(54);
	// integer_stack.push(255);
	// std::cout << std::endl;

	// string_stack.push("Welcome");
	// string_stack.push("to");
	// string_stack.push("GeeksforGeeks");
	// std::cout << std::endl;

	// integer_stack.pop();
	// string_stack.pop();
	// std::cout << std::endl;

	// std::cout << CYAN "top() = " RESET;
	// std::cout << BLACK << integer_stack.top() << RESET << std::endl;
	// std::cout << CYAN "top() = " RESET;
	// std::cout << BLACK << string_stack.top() << RESET << std::endl;
	// std::cout << std::endl;

	// pdf test cases

	MutantStack<int>	integer;
	std::cout << std::endl;

	integer.push(2);
	integer.push(54);
	integer.push(255);
	integer.push(23);

	MutantStack<int>::iterator	it = integer.begin();
	MutantStack<int>::iterator	ite = integer.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << CYAN "iterator() = " RESET;
		std::cout << BLACK << *it << RESET << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<int>	s(integer);
	return (0);
}
