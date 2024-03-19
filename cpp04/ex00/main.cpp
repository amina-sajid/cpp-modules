/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:15:19 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 09:15:19 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout <<" types " << std::endl;
	std::cout << "Animal-Type :" << animal->getType() << std::endl;
	std::cout << "Dog-Type :" << dog->getType() << std::endl;
	std::cout << "Cat-Type :" << cat->getType() << std::endl;

	std::cout <<"sound printing" << std::endl;
	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	std::cout <<"checking for wrong cat " << std::endl;

	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal * wrong_cat = new WrongCat();

	std::cout << std::endl;

	wrong_animal->makeSound();
	wrong_cat->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;
}
