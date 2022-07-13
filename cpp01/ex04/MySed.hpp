/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:17:27 by jhii              #+#    #+#             */
/*   Updated: 2022/07/12 15:29:52 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
# define MYSED_HPP

# include <iostream>
# include <fstream>
# include <string.h>

void	printError(char *str, int type);
void	runSed(char *filename, char *str1, char *str2);

#endif
