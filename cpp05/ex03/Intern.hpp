/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:43:42 by asajid            #+#    #+#             */
/*   Updated: 2024/05/04 19:58:29 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		AForm *(Intern::*array[3])(std::string target);//Each element of this array is a pointer to a member function of the Intern class
		// that takes a std::string argument and returns a pointer to an AForm object
		AForm *makeShrubberyCreationForm(std::string target);
		AForm *makeRobotomyRequestForm(std::string target);
		AForm *makePresidentialPardonForm(std::string target);
	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &rhs);
		~Intern();

		AForm *makeForm(std::string const &formName, std::string const &target);
};

#endif
