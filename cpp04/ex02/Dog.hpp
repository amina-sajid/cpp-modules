/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:25:21 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 12:25:21 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Dog();
		~Dog();
		Dog(Dog & src);
		Dog & operator=(Dog const & src);

		void makeSound() const;
		std::string getType( void ) const;

		void newIdeas(std::string idea);
		void printIdeas() const;
};

#endif
