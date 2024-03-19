/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:15:26 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 09:15:26 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "dog constructor called \n";
}

Dog::~Dog()
{
	std::cout << "dog is destructed \n";
}

Dog::Dog(Dog & src)
{
	this->type = src.getType();
	std::cout << "dog copy constructor called\n";
}

Dog & Dog::operator=(Dog const & src)
{
	this->type = src.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "boww boww\n";
}

std::string Dog::getType( void ) const
{
	return (this->type);
}
