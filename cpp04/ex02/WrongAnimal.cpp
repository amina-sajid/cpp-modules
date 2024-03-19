/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:16:01 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 09:16:01 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal constructor called \n";
	this->type = "wrong animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal & src)
{
	this->type = src.getType();
	std::cout << "Wrong Animal copy constructor called\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	this->type = src.getType();
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "wrong animal sound\n";
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}
