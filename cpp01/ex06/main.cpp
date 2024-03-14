/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:20:21 by asajid            #+#    #+#             */
/*   Updated: 2023/12/22 14:15:26 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	harlUtils(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}

void	callHarl(char *argv, Harl & newHarl)
{
	switch (harlUtils(argv))
	{
		case 0:
			newHarl.complain("DEBUG");
		case 1:
			newHarl.complain("INFO");
		case 2:
			newHarl.complain("WARNING");
		case 3:
			newHarl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl newHarl;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		callHarl(argv[1], newHarl);
	return (0);
}
