/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:38:37 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

void	testIntern(void)
{
	try {
		Intern	bootlicker;
		std::cout << std::endl;

		AForm	*shrub;
		shrub = bootlicker.makeForm("shrubbery creation", "shrub");
		delete(shrub);
		std::cout << std::endl;

		AForm	*clank;
		clank = bootlicker.makeForm("robotomy request", "clank");
		delete(clank);
		std::cout << std::endl;

		AForm	*obama;
		obama = bootlicker.makeForm("presidential pardon", "obama");
		delete(obama);
		std::cout << std::endl;

		AForm	*error;
		error = bootlicker.makeForm("medicare for all", "error");
		if (error)
			delete(error);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	testIntern();
	return (0);
}
