/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 08:55:33 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 08:55:33 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal constructor created \n";
	this->type = "animal";
}

Animal::~Animal()
{
	std::cout << "animal destroyed\n";
}

Animal::Animal(Animal & src)
{
	this->type = src.getType();
	std::cout << "animal copy constructor called \n";
}

Animal & Animal::operator=(Animal const & src)
{
	this->type = src.getType();
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "animal sound \n";
}

std::string Animal::getType( void ) const
{
	return (this->type);
}
