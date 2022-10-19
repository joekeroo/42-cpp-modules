/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 19:05:04 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main(void)
{
	Array<int> arr(void);

	Array<int> arr1(3);
	Array<int> arr2 = arr1;

	arr1[0] = 1;
	arr1[1] = 5;
	arr1[2] = 10;

	std::cout << std::endl << CYAN << "arr1 : ";
	std::cout << arr1[0] << ", ";
	std::cout << arr1[1] << ", ";
	std::cout << arr1[2] << std::endl;
	std::cout << "size : " << arr1.size() << RESET << std::endl << std::endl;

	std::cout << CYAN << "arr2 : ";
	std::cout << arr2[0] << ", ";
	std::cout << arr2[1] << ", ";
	std::cout << arr2[2] << std::endl;
	std::cout << "size : " << arr2.size() << RESET << std::endl << std::endl;

	Array<int> arr3 = arr1;
	std::cout << std::endl << CYAN << "arr3 : ";
	std::cout << arr3[0] << ", ";
	std::cout << arr3[1] << ", ";
	std::cout << arr3[2] << std::endl;
	std::cout << "size : " << arr3.size() << RESET << std::endl << std::endl;

	arr3[0] = 3;
	arr3[1] = 6;
	arr3[2] = 9;

	Array<int> arr4(arr3);
	std::cout << std::endl << CYAN << "arr4 : ";
	std::cout << arr4[0] << ", ";
	std::cout << arr4[1] << ", ";
	std::cout << arr4[2] << std::endl;
	std::cout << "size : " << arr4.size() << RESET << std::endl << std::endl;

	return (0);
}
