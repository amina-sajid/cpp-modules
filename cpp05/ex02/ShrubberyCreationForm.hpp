/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:18:17 by asajid            #+#    #+#             */
/*   Updated: 2024/04/13 15:20:06 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <fstream>

#define ASCII_TREE \
"               ^\n"\
"              ^^^\n"\
"             ^^^^^\n"\
"            ^^^^^^^\n"\
"           ^^^^^^^^^\n"\
"          ^^^^^^^^^^^\n"\
"         ^^^^^^^^^^^^^\n"\
"        ^^^^^^^^^^^^^^^\n"\
"       ^^^^^^^^^^^^^^^^^\n"\
"              |||        \n"\
"              |||         "

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		virtual ~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;
};
# endif
