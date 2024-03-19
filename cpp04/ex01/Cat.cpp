/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:24:57 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 12:24:57 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "cat constructer called and cat brain created \n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat brain and cat destroyed\n";
}

Cat::Cat(Cat & src)
{
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
	std::cout << "cat copy constructor called \n";
}

Cat & Cat::operator=(Cat const & src)
{
	if (this != &src)
	{
		if (this->brain)
			delete (this->brain);
		this->type = src.getType();
		this->brain = new Brain(*src.brain);
	}
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

void Cat::newIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->brain->getIdeas(i) == "") {
			this->brain->setIdeas(i, idea);
			return;
		}
	}
	std::cout << "Brain of cat is full!" << std::endl;
}

void Cat::printIdeas() const
{
	std::string str;
	std::cout << "Cat's ideas:" << std::endl;
	for (int i = 0; i < 100; i++) {
		str = this->brain->getIdeas(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
	}
}
