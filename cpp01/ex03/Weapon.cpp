/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:08:33 by asajid            #+#    #+#             */
/*   Updated: 2023/12/25 14:08:34 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type)
{
	setType(type);
}
Weapon::~Weapon(void)
{

}
void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

const std::string& Weapon::getType(void)
{
	return(this->type);
}
