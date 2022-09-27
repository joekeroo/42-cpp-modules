/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:29 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 11:35:40 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref): Form(ref.getName(), ref.getSignGrade(), ref.getExecGrade()) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form(target, 145, 137)
{
	this->_target = target;
	std::cout << GREEN << "ShrubberyCreationForm " << RESET;
	std::cout << GREEN << target << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << RED << "ShrubberyCreationForm " << RESET;
	std::cout << RED << this->getName() << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

const char	*ShrubberyCreationForm::FormNotSignedException::what(void) const throw()
{
	return (YELLOW "Error: Form: has not been signed" RESET);
}

const char	*ShrubberyCreationForm::ExecGradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade too low to execute Form" RESET);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw(FormNotSignedException());
	else
	{
		if (executor.getGrade() > this->getExecGrade())
			throw(ExecGradeTooLowException());
		std::cout << CYAN << "Shrub created" << RESET << std::endl;
		std::ofstream	shrubfile(this->_target + "_shrubbery");
		shrubfile << "                                                         ." << std::endl;
		shrubfile << "                                              .         ;" << std::endl;
		shrubfile << "                 .              .              ;%     ;;" << std::endl;
		shrubfile << "                   ,           ,                :;%  %;" << std::endl;
		shrubfile << "                    :         ;                   :;%;'     .," << std::endl;
		shrubfile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		shrubfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		shrubfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		shrubfile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		shrubfile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		shrubfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		shrubfile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		shrubfile << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
		shrubfile << "                        `@%.  `;@%.      ;@@%;" << std::endl;
		shrubfile << "                          `@%%. `@%%    ;@@%;" << std::endl;
		shrubfile << "                            ;@%. :@%%  %@@%;" << std::endl;
		shrubfile << "                              %@bd%%%bd%%:;" << std::endl;
		shrubfile << "                                #@%%%%%:;;" << std::endl;
		shrubfile << "                                %@@%%%::;" << std::endl;
		shrubfile << "                                %@@@%(o);  . '" << std::endl;
		shrubfile << "                                %@@@o%;:(.,'" << std::endl;
		shrubfile << "                            `.. %@@@o%::;" << std::endl;
		shrubfile << "                               `)@@@o%::;" << std::endl;
		shrubfile << "                                %@@(o)::;" << std::endl;
		shrubfile << "                               .%@@@@%::;" << std::endl;
		shrubfile << "                               ;%@@@@%::;." << std::endl;
		shrubfile << "                              ;%@@@@%%:;;;." << std::endl;
		shrubfile << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	}
}
