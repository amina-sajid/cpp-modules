/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:13:13 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 17:25:04 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "harl.hpp"

Harl::Harl()
{

}
Harl::~Harl()
{

}
void	Harl::debug(void)
{
	std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! " <<std::endl;

}
void	Harl::info( void ) {
	std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! " << std::endl;
}

void	Harl::warning( void ) {
	std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. " << std::endl;
}

void	Harl::error( void )
{
	std::cout << " This is unacceptable! I want to speak to the manager now. " << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}
