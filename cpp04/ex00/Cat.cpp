/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:15:32 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 09:15:32 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "cat constructer called \n";
}

Cat::~Cat()
{
	std::cout << "cat destroyed\n";
}

Cat::Cat(Cat &src)
{
	this->type = src.getType();
	std::cout << "cat copy constructor called \n";
}

Cat & Cat::operator=(Cat const & src)
{
	this->type = src.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow meow\n";
}

std::string Cat::getType( void ) const
{
	return (this->type);
}
