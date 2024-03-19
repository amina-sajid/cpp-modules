/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:25:16 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 12:25:16 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "dog constructor called and dog brain created \n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "dog brain and dog is destroyed \n";
}

Dog::Dog(Dog & src)
{
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "dog copy constructor called\n";
}

Dog & Dog::operator=(Dog const & src)
{
	if (this != &src)
	{
		if (this->brain)
			delete (this->brain);
		this->type = src.type;
		this->brain = new Brain(*src.brain);
	}
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

void Dog::newIdeas(std::string idea) {
	for (int i = 0; i < 100; i++) {
		if (this->brain->getIdeas(i) == "") {
			this->brain->setIdeas(i, idea);
			return;
		}
	}
	std::cout << "Brain of cat is full!" << std::endl;
}

void Dog::printIdeas() const {
	std::string str;
	std::cout << "Cat's ideas:" << std::endl;
	for (int i = 0; i < 100; i++) {
		str = this->brain->getIdeas(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
	}
}
