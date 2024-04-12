/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:15 by asajid            #+#    #+#             */
/*   Updated: 2024/04/12 17:04:30 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("default"), gradeSign(150), gradeExec(150), sign(false)
{
	return ;
}

Form::Form(const std::string name, int gradeSign, int gradeExec) :
	name(name), gradeSign(gradeSign), gradeExec(gradeExec), sign(false)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), gradeSign(form.gradeSign), gradeExec(form.gradeExec)
{
	*this = form;
}

Form::~Form()
{
	return ;
}

Form	&Form::operator=(const Form &form)
{
	if (this != &form)
		sign = form.sign;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Form &form)
{
	o << "[" << form.getName() << "]" << std::endl;
	o << "\t" << "signed : " << form.getSigned() << std::endl;
	o << "\t" << "grade needed to sign : " << form.getGradeSign() << std::endl;
	o << "\t" << "grade needed to execute : " << form.getGradeExec() << std::endl;
	return (o);
};

const std::string	Form::getName(void) const
{
	return (name);
}

int		Form::getGradeSign(void) const
{
	return (gradeSign);
}

int		Form::getGradeExec(void) const
{
	return (gradeExec);
}

bool	Form::getSigned(void) const
{
	return (sign);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > gradeSign)
		throw GradeTooLowException();
	sign = true;
}
