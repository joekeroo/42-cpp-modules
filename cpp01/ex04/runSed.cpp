/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:34:38 by jhii              #+#    #+#             */
/*   Updated: 2022/07/12 15:48:02 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

static	void	putFile(char *filename, std::string output)
{
	std::string		init(filename);
	std::string		add(".replace");
	std::ofstream	outfile(init + add);

	outfile << output;
	outfile.close();
}

void	runSed(char *filename, char *str1, char *str2)
{
	std::string		temp;
	std::string		input;
	std::string		s1(str1);
	std::string		s2(str2);
	std::ifstream	infile(filename);

	while (std::getline(infile, temp))
	{
		size_t pos = std::string::npos;
		while ((pos = temp.find(s1)) != std::string::npos)
		{
			temp.erase(pos, s1.length());
			temp.insert(pos, s2);
		}
		input = input + temp + "\n";
	}
	putFile(filename, input);
}
