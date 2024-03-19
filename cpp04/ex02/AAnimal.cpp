/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:33:18 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 12:33:19 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Aanimal";
	std::cout << "AAnimal  constructed\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed\n";
}

AAnimal::AAnimal(AAnimal const & src)
{
	this->type = src.getType();
	std::cout << "AAnimal copy constructed\n";
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
	this->type = src.getType();
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "aanimal sound\n";
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}
