/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:45:28 by jhii              #+#    #+#             */
/*   Updated: 2022/08/03 15:53:46 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	testCharacter();
	std::cout << std::endl;
	testMateria();
	std::cout << std::endl;
	testPdf();
	system("leaks materia");
	return (0);
}
