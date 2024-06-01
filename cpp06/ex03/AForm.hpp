/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:58:35 by asajid            #+#    #+#             */
/*   Updated: 2024/05/10 09:57:09 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		const int			gradeSign;
		const int			gradeExec;
		bool				sign;

	public:
		AForm(void);
		AForm(const std::string name, int gradeSign, int gradeExec);
		AForm(const AForm &form);
		virtual ~AForm();

		AForm	&operator=(const AForm &form);

		const std::string	getName(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		bool				getSigned(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);

		virtual void execute(const Bureaucrat& executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("grade is too high");}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("grade is too low"); }
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("robotomy failed");}
		};

};

std::ostream	&operator<<(std::ostream &o, const AForm &form);

#endif
