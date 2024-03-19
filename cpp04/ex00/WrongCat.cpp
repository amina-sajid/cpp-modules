/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:16:15 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 09:16:15 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "wrong cat";
	std::cout << "wrong cat constructer called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "wrong cat destroyed\n";
}

WrongCat::WrongCat(WrongCat & src)
{
	this->type = src.getType();
	std::cout << "wrong cat copy constructer called\n";
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	this->type = src.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "wrong meow meow\n";
}
