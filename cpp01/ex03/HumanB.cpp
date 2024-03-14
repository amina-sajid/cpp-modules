/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:19:36 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 16:22:39 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : bWeapon(NULL)
{
	this->bName = name;
	std::cout << this->bName << " created without weapon " << std::endl;

}
HumanB::~HumanB(void)
{
	std::cout << this->bName << " destroyed " << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->bWeapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->bName << " attacks with their " << bWeapon->getType() << std::endl;
}
