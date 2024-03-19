/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:33:45 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 12:33:45 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	// Instantiating an animal doesn't work because it is an abstract class
	// AAnimal *animal1 = new AAnimal();
	// AAnimal animal2 = AAnimal();

	// Rest ist still working fine:

  Dog *dog = new Dog();
  Cat *cat = new Cat();

  delete dog;
  delete cat;

  AAnimal *array_animals[10];
  for (int i = 0; i < 10; i++) {
    if (i % 2)
      array_animals[i] = new Dog();
    else
      array_animals[i] = new Cat();
  }

  for (int i = 0; i < 10; i++) array_animals[i]->makeSound();


  for (int i = 0; i < 10; i++) delete array_animals[i];

  std::cout << std::endl
            << "--- Test for deep copy ---" << std::endl
            << std::endl;
  Cat *cat2 = new Cat();
  cat2->newIdeas("Hmm... fish!");
  cat2->newIdeas("I wanna play...");
  cat2->printIdeas();

  Cat *cat3 = new Cat(*cat2);
  cat2->newIdeas("Gotta sleep now...");
  std::cout << std::endl;
  cat2->printIdeas();
  std::cout << std::endl;
  cat3->printIdeas();
  std::cout << std::endl;

  delete cat2;
  delete cat3;
  return 0;
}
