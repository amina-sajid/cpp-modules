/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:11:08 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 16:21:44 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name , Weapon &weapon): aName(name), aWeapon(weapon)
{
	std::cout << name << " created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->aName << " destroyed" << std::endl;
}



void HumanA::attack()
{
	std::cout << this->aName << " attacks with their " << aWeapon.getType() << std::endl;
}

