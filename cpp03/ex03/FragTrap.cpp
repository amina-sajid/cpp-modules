/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:29:46 by asajid            #+#    #+#             */
/*   Updated: 2023/12/30 16:58:17 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Constructor for called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor for " << this->name <<   "called" << std::endl;

}
FragTrap::~FragTrap()
{
	std::cout <<  "FragTrap Default Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (&src != this)
	{
		this->name = src.name;
		this->attackDamage = src. attackDamage;
		this->energyPoints = src.energyPoints;
		this->hitPoints = src.hitPoints;
	}
	return *this;
}

void highFivesGuys(void)
{
	std::cout << "****HIGH FIVE****" << std::endl;
}
