/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/10/18 16:30:41 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data		*data = new Data();
	uintptr_t	serialized = serialize(data);
	std::cout << *data;

	Data	*res;
	res = deserialize(serialized);
	std::cout << *res;

	delete (data);
	return (0);
}
