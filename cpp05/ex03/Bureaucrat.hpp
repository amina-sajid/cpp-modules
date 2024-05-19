/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:17:03 by asajid            #+#    #+#             */
/*   Updated: 2024/04/13 17:05:45 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATHPP
# define BUREAUCRATHPP

#include "AForm.hpp"
# include <iostream>

class AForm;
class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		virtual ~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &bureaucrat);

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(AForm &form) const;
		void 				executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too low");
				}
		};

};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
