/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/10/20 14:08:34 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main(void)
{
	Array<int> intArr(5);
	Array<double> doubleArr(5);

	for (int i = 0; i < 5; i++)
		intArr[i] = i * 2;
	for (int i = 0; i < 5; i++)
		doubleArr[i] = i * 2.2;

	::easyfind(intArr, 4);
	::easyfind(intArr, 5);
	::easyfind(doubleArr, 4.4);
	::easyfind(doubleArr, 5.5);

	return (0);
}
