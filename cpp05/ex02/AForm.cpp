/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:15 by asajid            #+#    #+#             */
/*   Updated: 2024/05/04 19:39:31 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("default"), gradeSign(150), gradeExec(150), sign(false)
{
	return ;
}

AForm::AForm(const std::string name, int gradeSign, int gradeExec) :
	name(name), gradeSign(gradeSign), gradeExec(gradeExec), sign(false)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &form) : name(form.name), gradeSign(form.gradeSign), gradeExec(form.gradeExec)
{
	*this = form;
}

AForm::~AForm()
{
	return ;
}

AForm	&AForm::operator=(const AForm &form)
{
	if (this != &form)
		sign = form.sign;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const AForm &form)
{
	o << "[" << form.getName() << "]" << std::endl;
	o << "\t" << "signed : " << form.getSigned() << std::endl;
	o << "\t" << "grade needed to sign : " << form.getGradeSign() << std::endl;
	o << "\t" << "grade needed to execute : " << form.getGradeExec() << std::endl;
	return (o);
};

const std::string	AForm::getName(void) const
{
	return (name);
}

int		AForm::getGradeSign(void) const
{
	return (gradeSign);
}

int		AForm::getGradeExec(void) const
{
	return (gradeExec);
}

bool	AForm::getSigned(void) const
{
	return (sign);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > gradeSign)
		throw GradeTooLowException();
	sign = true;
}
