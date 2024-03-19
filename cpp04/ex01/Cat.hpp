/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:25:12 by asajid            #+#    #+#             */
/*   Updated: 2024/01/07 12:25:12 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain	*brain;

	public:
		Cat();
		~Cat();
		Cat(Cat & src);
		Cat & operator=(Cat const & src);

		void makeSound() const;
		std::string getType( void ) const;

		void newIdeas(std::string idea);
		void printIdeas() const;

};

#endif
